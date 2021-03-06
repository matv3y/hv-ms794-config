/*
 *      Copyright 2018 Pavel Bludov <pbludov@gmail.com>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License along
 *      with this program; if not, write to the Free Software Foundation, Inc.,
 *      51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef MICEWIDGET_H
#define MICEWIDGET_H

#include <QWidget>

class MiceWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MiceWidget(QWidget *parent = 0)
        : QWidget(parent)
    {
    }

    virtual bool load(class MS794 *) = 0;
    virtual void save(class MS794 *) = 0;
};

#endif // MICEWIDGET_H
