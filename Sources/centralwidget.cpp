#include "centralwidget.h"


CentralWidget::CentralWidget() : QWidget(){
	QVBoxLayout* pvbxLayout = new QVBoxLayout;
	setLayout(pvbxLayout);

	QHBoxLayout* phbxLayout = new QHBoxLayout;
	pvbxLayout->addLayout(phbxLayout);
	phbxLayout->setSpacing(15);

	selectedFile = new QLabel("file not selected", this);
	phbxLayout->addWidget(selectedFile);
}