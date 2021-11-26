#include "QT_Heritage_TP2.h"
#include "QLineEdit_Histo.h"

#include <QLineEdit>
#include <QLabel>
#include <qmessagebox.h>

QT_Heritage_TP2::QT_Heritage_TP2(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QLineEdit *lineHisto = new QLineEdit(ui.centralWidget);
	lineHisto->move(15, 50);
}