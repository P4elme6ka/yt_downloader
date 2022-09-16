#include "src/MainWindow/mainwindow.h"

#include <QApplication>

#include "src/App/youtubeparser.h"

int main(int argc, char* argv[]) {
	QApplication a(argc, argv);

	YouTubeParser::getInstance();

	MainWindow w;
	w.show();
	return a.exec();
}
