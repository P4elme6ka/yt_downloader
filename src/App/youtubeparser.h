#ifndef YOUTUBEPARSER_H
#define YOUTUBEPARSER_H

#include <QObject>

#include "src/DownloadManager/downloadmanager.h"

class YouTubeParser : public QObject {
		Q_OBJECT

		YouTubeParser();
		~YouTubeParser();

		static YouTubeParser* instance;


	public:
		static YouTubeParser* getInstance();
		DownloadManager* downloadManager;


	signals:

};

#endif // YOUTUBEPARSER_H
