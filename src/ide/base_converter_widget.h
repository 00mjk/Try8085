/*
  Copyright (C) 2009, 2016  Artem Chistyakov <chistyakov.artem@gmail.com>
  Copyright (C) 2009  Ilya Beda <ir4y.ix@gmail.com>
  Copyright (C) 2009  Daniil Zapyatoy <zapper.kb@gmail.com>

  This file is part of Try8085.

  Try8085 is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Try8085 is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Try8085.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef TRY8085_BASE_CONVERTER_WIDGET_H
#define TRY8085_BASE_CONVERTER_WIDGET_H
#include <QGroupBox>
#include <QLabel>
#include <QLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QString>

class BaseConverterWidget : public QGroupBox
{
  Q_OBJECT
private:
  QHBoxLayout* decToHexHexHLayout;
  QHBoxLayout* decToHexBinHLayout;
  QHBoxLayout* decToHexDecHLayout;
  QHBoxLayout* decToHexButtonLayout;
  QVBoxLayout* decToHexVLayout;
  QLineEdit* decToHexHexEdit;
  QLabel* decToHexHexLabel;
  QLineEdit* decToHexDecEdit;
  QLabel* decToHexDecLabel;
  QLineEdit* decToHexBinEdit;
  QLabel* decToHexBinLabel;
  QPushButton* decToHexButton;

public:
  BaseConverterWidget(QString title, QWidget* parent = 0);
public slots:
  void convertFromDec();
  void convertFromHex();
  void convertFromBin();
};
#endif // TRY8085_BASE_CONVERTER_WIDGET_H
