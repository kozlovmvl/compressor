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

public slots:
	void selectFile();
	void aboutProduct();
};