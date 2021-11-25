#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_Heritage_TP2.h"
#include "QLineEdit_Histo.h"

class QT_Heritage_TP2 : public QMainWindow
{
    Q_OBJECT

public:
    QT_Heritage_TP2(QWidget *parent = Q_NULLPTR);

private:
    Ui::QT_Heritage_TP2Class ui;
};
