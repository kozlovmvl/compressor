#include "main.h"
#include "centralwidget.h"
#include "mainwindow.h"


int main(int argc, char** argv){
	QApplication app(argc, argv);
	MainWindow mwin;

	CentralWidget ctrw;
	mwin.setCentralWidget(&ctrw);
	mwin.centralWidget = &ctrw;

	mwin.show();
	
	return app.exec();
}
