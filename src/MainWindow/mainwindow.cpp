#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include "src/App/youtubeparser.h"
#include "src/DownloadList/downloadlist.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);

	ui->centralwidget->layout()->addWidget(new downloadlist(this));
}

MainWindow::~MainWindow() {
	delete ui;
}

