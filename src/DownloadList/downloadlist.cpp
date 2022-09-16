#include "downloadlist.h"
#include "ui_downloadlist.h"

#include "src/App/youtubeparser.h"
#include "downloaditem.h"

downloadlist::downloadlist(QWidget* parent) : QWidget(parent), ui(new Ui::downloadlist) {
	ui->setupUi(this);
	connect(ui->addButton, &QPushButton::clicked, this, [ = ]() {
		YouTubeParser::getInstance()->downloadManager->createDownload(Download("http://test.ru", "someName"));
	});

	connect(YouTubeParser::getInstance()->downloadManager, &DownloadManager::onDownloadListChanged, this, [ = ]() {
		qDebug() << "updating listview ";
		QMap<int, Download> downloads = YouTubeParser::getInstance()->downloadManager->getDownloadList();

		ui->downloadsList->clear();

		for (auto downIt = downloads.begin(); downIt != downloads.end(); ++downIt) {
			DownloadItem* downloadItem = new DownloadItem(downIt.value());
			auto sh = downloadItem->sizeHint();

			QListWidgetItem* listItem = new QListWidgetItem();
			listItem->setSizeHint(sh);

			ui->downloadsList->addItem(listItem);
			ui->downloadsList->setItemWidget(listItem, downloadItem);
		}
	});
}

downloadlist::~downloadlist() {
	delete ui;
}
