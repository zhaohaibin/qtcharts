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

#include "qpiemodelmapper_p.h"
#include "qvpiemodelmapper.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

QVPieModelMapper::QVPieModelMapper(QObject *parent) :
    QPieModelMapper(parent)
{
    QPieModelMapper::setOrientation(Qt::Vertical);
}

int QVPieModelMapper::valuesColumn() const
{
    return QPieModelMapper::valuesIndex();
}

void QVPieModelMapper::setValuesColumn(int valuesColumn)
{
    QPieModelMapper::setValuesIndex(valuesColumn);
}

int QVPieModelMapper::labelsColumn() const
{
    return QPieModelMapper::labelsIndex();
}

void QVPieModelMapper::setLabelsColumn(int labelsColumn)
{
    QPieModelMapper::setLabelsIndex(labelsColumn);
}

#include "moc_qvpiemodelmapper.cpp"

QTCOMMERCIALCHART_END_NAMESPACE