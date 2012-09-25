/****************************************************************************
**
** Copyright (C) 2012 Digia Plc
** All rights reserved.
** For any questions to Digia, please use contact form at http://qt.digia.com
**
** This file is part of the Qt Commercial Charts Add-on.
**
** $QT_BEGIN_LICENSE$
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.
**
** If you have questions regarding the use of this file, please use
** contact form at http://qt.digia.com
** $QT_END_LICENSE$
**
****************************************************************************/

#include "qpielegendmarker.h"
#include "qpielegendmarker_p.h"
#include <QPieSeries>
#include <QDebug>

QTCOMMERCIALCHART_BEGIN_NAMESPACE
/*
QPieLegendMarker::QPieLegendMarker(QPieSeries* series, QPieSlice* slice, QObject *parent) :
    QLegendMarker(series, parent),
    d_ptr(new QPieLegendMarkerPrivate(series,slice,this))
{
    QObject::connect(slice, SIGNAL(labelChanged()), this, SLOT(updated()));
    QObject::connect(slice, SIGNAL(brushChanged()), this, SLOT(updated()));
    updated();
}

*/
QPieLegendMarker::QPieLegendMarker(QPieSeries* series, QPieSlice* slice, QObject *parent) :
    QLegendMarker(*new QPieLegendMarkerPrivate(series,slice,this), parent)
{
    QObject::connect(slice, SIGNAL(labelChanged()), this, SLOT(updated()));
    QObject::connect(slice, SIGNAL(brushChanged()), this, SLOT(updated()));
//    updated();
}

/*!
    \internal
*/
QPieLegendMarker::QPieLegendMarker(QPieLegendMarkerPrivate &d, QObject *parent) :
    QLegendMarker(d, parent)
{
}

QAbstractSeries* QPieLegendMarker::series()
{
    Q_D(QPieLegendMarker);
    return d->m_series;
}

QPieSlice* QPieLegendMarker::peerObject()
{
    Q_D(QPieLegendMarker);
    return d->m_slice;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//QPieLegendMarkerPrivate::QPieLegendMarkerPrivate(QAbstractSeries *series, QPieLegendMarker *q) :
QPieLegendMarkerPrivate::QPieLegendMarkerPrivate(QPieSeries *series, QPieSlice *slice, QPieLegendMarker *q) :
    QLegendMarkerPrivate(q),
    m_series(series),
    m_slice(slice)
{
    qDebug() << "QPieLegendMarkerPrivate created";
    updated();
}

QPieLegendMarkerPrivate::~QPieLegendMarkerPrivate()
{
}

void QPieLegendMarkerPrivate::updated()
{
    m_item->setBrush(m_slice->brush());
    m_item->setLabel(m_slice->label());
}

#include "moc_qpielegendmarker.cpp"
#include "moc_qpielegendmarker_p.cpp"

QTCOMMERCIALCHART_END_NAMESPACE