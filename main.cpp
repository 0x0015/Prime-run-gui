#include <QApplication>
#include <QLabel>
#include <QWidget>
#include <iostream>
#include "ui_main.h"

using namespace std;

int main(int argc, char *argv[ ])
{

	QApplication app(argc, argv);
	QDialog *widget = new QDialog;

	Ui::Dialog ui;
	ui.setupUi(widget);

	widget->show();
	app.exec();

	int diaResult = widget->result();
	if(diaResult == 1) {
		string command = ui.lineEdit->text().toStdString();
		string run = "prime-run " + command + " &";
		//cout<<run<<endl;
		system(run.c_str());
	}
}
