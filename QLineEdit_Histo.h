#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QT_Heritage_TP2.h"
#include <QLineEdit>

class QLineEdit_Histo : public QLineEdit
{
	Q_OBJECT

public : QLineEdit_Histo(QWidget *parent = Q_NULLPTR);


public slots:
	void insertHisto();

private:
	Ui::QT_Heritage_TP2Class ui;
	int val = 0;
};