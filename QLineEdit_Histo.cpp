#include "QLineEdit_Histo.h"

#include <qmessagebox.h>
#include "ui_QT_Heritage_TP2.h"


#include <QLineEdit>
#include <QLabel>
#include <qmessagebox.h>

// - Construct
QLineEdit_Histo::QLineEdit_Histo(QWidget *parent) : QLineEdit(parent)
{
	QObject::connect(this, SIGNAL(returnPressed()), this, SLOT(insertHisto()));
}


// - insertion du contenu de LineEdit dans l'histo
void QLineEdit_Histo::insertHisto() {
	QMessageBox::information(this, "coucou", "coucou");
	ui.label->setText("QString" + QString::number(val));
	val++;
}