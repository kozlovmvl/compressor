#pragma once

#include "main.h"


struct Data {
	QString filename;
	QString outfile;
	int quality;
};


class CentralWidget : public QWidget 
{
	Q_OBJECT
public:
	QLabel* selectedFile;
	QComboBox* selectQuality;
	QPushButton* runCompression;
	QPushButton* cancelCompression;
	Data data;
	CentralWidget();
public slots:
	void handleSelectQuality(QString value);
};
