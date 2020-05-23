#pragma once

#include "main.h"


class CentralWidget : public QWidget 
{
	Q_OBJECT
public:
	QLabel* selectedFile;
	CentralWidget();
};
