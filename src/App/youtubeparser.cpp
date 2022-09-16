#include "youtubeparser.h"

#include <QDebug>

YouTubeParser* YouTubeParser::instance = nullptr;

YouTubeParser* YouTubeParser::getInstance() {
	if (instance == nullptr)
		instance = new YouTubeParser();

	return instance;
}

YouTubeParser::YouTubeParser() {
	downloadManager = new DownloadManager(this);
}

YouTubeParser::~YouTubeParser() {
	delete downloadManager;
}
