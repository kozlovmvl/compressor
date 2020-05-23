#include "mainwindow.h"
#include "centralwidget.h"


MainWindow::MainWindow() : QMainWindow() {
	setWindowTitle("Video Compressor");
	resize(500, 500);
	addToolBar(Qt::TopToolBarArea, createToolBar());
}

QToolBar* MainWindow::createToolBar(){
	QToolBar* ptb = new QToolBar("Linker Too!Bar");
	ptb->addAction("Select File", this, SLOT(selectFile()));
	ptb->addAction("About", this, SLOT(aboutProduct()));
	return ptb;
}

void MainWindow::selectFile(){
	QString fileName = QFileDialog::getOpenFileName(this, "Select", "", "*.txt");
	if (fileName != ""){
		centralWidget->selectedFile->setText(fileName);	
	}
}

void MainWindow::aboutProduct(){
	QMessageBox::information(0, "About", "Information");
}
