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

#include "qhpiemodelmapper.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

QHPieModelMapper::QHPieModelMapper(QObject *parent) :
    QPieModelMapper(parent)
{
    QPieModelMapper::setOrientation(Qt::Horizontal);
}

int QHPieModelMapper::valuesRow() const
{
    return QPieModelMapper::valuesIndex();
}

void QHPieModelMapper::setValuesRow(int valuesRow)
{
    QPieModelMapper::setValuesIndex(valuesRow);
}

int QHPieModelMapper::labelsRow() const
{
    return QPieModelMapper::labelsIndex();
}

void QHPieModelMapper::setLabelsRow(int labelsRow)
{
    QPieModelMapper::setLabelsIndex(labelsRow);
}

#include "moc_qhpiemodelmapper.cpp"

QTCOMMERCIALCHART_END_NAMESPACE