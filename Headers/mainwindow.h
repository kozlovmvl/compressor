#pragma once

#include "main.h"
#include "centralwidget.h"


class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow();
	QToolBar* createToolBar();
	CentralWidget* centralWidget = 0;
	void setCentralWidget(CentralWidget* pwt);

public slots:
	void selectFile();
	void aboutProduct();
};