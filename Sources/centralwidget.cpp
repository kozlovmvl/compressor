#include "centralwidget.h"


CentralWidget::CentralWidget() : QWidget(){
	QVBoxLayout* pvbxLayout = new QVBoxLayout;
	setLayout(pvbxLayout);

	QHBoxLayout* phFirstLayout = new QHBoxLayout;
	pvbxLayout->addLayout(phFirstLayout);
	phFirstLayout->setSpacing(15);

	selectedFile = new QLabel("file not selected", this);
	phFirstLayout->addWidget(selectedFile);

	QHBoxLayout* phSecondLayout = new QHBoxLayout;
	pvbxLayout->addLayout(phSecondLayout);
	phSecondLayout->setSpacing(15);
	
	QLabel* lblQuality = new QLabel("Select quality:", this);
	phSecondLayout->addWidget(lblQuality);

	selectQuality = new QComboBox(this);
	QStringList listQuality = {"240p", "360p", "480p", "720p"};
	selectQuality->addItems(listQuality);
	connect(selectQuality, SIGNAL (textActivated()), this, SLOT (handleSelectQuality()));
	phSecondLayout->addWidget(selectQuality);

	runCompression = new QPushButton("Run", this);
	phSecondLayout->addWidget(runCompression);

	cancelCompression = new QPushButton("Cancel", this);
	phSecondLayout->addWidget(cancelCompression);
}

void CentralWidget::handleSelectQuality(QString value){
	data.quality = value.left(value.length()).toInt();
}