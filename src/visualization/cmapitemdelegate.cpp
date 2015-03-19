/**************************************************************************
 *  This file is part of QXmlEdit                                         *
 *  Copyright (C) 2012 by Luca Bellonda and individual contributors       *
 *    as indicated in the AUTHORS file                                    *
 *  lbellonda _at_ gmail.com                                              *
 *                                                                        *
 * This library is free software; you can redistribute it and/or          *
 * modify it under the terms of the GNU Library General Public            *
 * License as published by the Free Software Foundation; either           *
 * version 2 of the License, or (at your option) any later version.       *
 *                                                                        *
 * This library is distributed in the hope that it will be useful,        *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      *
 * Library General Public License for more details.                       *
 *                                                                        *
 * You should have received a copy of the GNU Library General Public      *
 * License along with this library; if not, write to the                  *
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA  02110-1301  USA                                            *
 **************************************************************************/


#include "cmapitemdelegate.h"
#include "ui_cmapitemdelegate.h"

CMapItemDelegate::CMapItemDelegate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CMapItemDelegate)
{
    ui->setupUi(this);
}

CMapItemDelegate::~CMapItemDelegate()
{
    delete ui;
}

void CMapItemDelegate::setColorMap(ColorMap *map)
{
    ui->label->setText(map->name());
    ui->colorMap->setColorMap(map);
    setToolTip(map->name());
}

QPixmap CMapItemDelegate::colorMapImage(const QSize & size)
{
    QPixmap pixmap(size);
    ui->colorMap->force();
    ui->colorMap->render(&pixmap);
    return pixmap;
}

QImage CMapItemDelegate::colorMapImage()
{
    return ui->colorMap->cachedImage();
}

