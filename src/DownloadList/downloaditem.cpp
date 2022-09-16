#include "downloaditem.h"
#include "ui_downloaditem.h"

DownloadItem::DownloadItem(Download download, QWidget* parent) :
	QWidget(parent),
	ui(new Ui::DownloadItem) {
	ui->setupUi(this);

	ui->nameLabel->setText(download.name);
	ui->urlLabel->setText(download.url);

	ui->downloadProcess->setValue(download.progress * 100);
}

DownloadItem::~DownloadItem() {
	delete ui;
}
