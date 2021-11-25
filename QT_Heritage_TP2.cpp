#include "QT_Heritage_TP2.h"

#include <QLineEdit>
#include <QLabel>

QT_Heritage_TP2::QT_Heritage_TP2(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);


	QLineEdit *EditLine = new QLineEdit(ui.centralWidget);
	EditLine->move(15,50);

}
