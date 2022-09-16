#ifndef DOWNLOADMANAGER_H
#define DOWNLOADMANAGER_H

#include <QObject>
#include <QMap>

#include "src/Models/download.h"

class DownloadManager : public QObject
{
		Q_OBJECT

		QMap<int, Download> downloadList;

	public:
		explicit DownloadManager(QObject *parent = nullptr);

		int createDownload(Download);
		QMap<int, Download> getDownloadList();
		Download getDownloadById(int id);

	signals:
		void onDownloadListChanged();

};

#endif // DOWNLOADMANAGER_H
