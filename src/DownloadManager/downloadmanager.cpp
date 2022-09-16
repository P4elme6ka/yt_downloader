#include "downloadmanager.h"

DownloadManager::DownloadManager(QObject* parent) : QObject{parent} {

}

int DownloadManager::createDownload(Download download) {
	int lk = 0;

	if (downloadList.count() != 0)
		lk = downloadList.lastKey();

	lk++;
	downloadList.insert(lk, download);
	onDownloadListChanged();
	return lk;
}

QMap<int, Download> DownloadManager::getDownloadList() {
	return downloadList;
}

Download DownloadManager::getDownloadById(int id) {
	return downloadList.value(id);
}
