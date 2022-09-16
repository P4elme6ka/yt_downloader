#ifndef DOWNLOAD_H
#define DOWNLOAD_H

#include <QString>

class Download {
	public:
		QString url;
		QString name;

		double progress;

		inline Download(QString url, QString name = "default") : url(url), name(name), status(Status::Preparing), progress(0) {}
		inline Download() : url(QString()) {}
		inline bool isNull() { return url.isNull(); }

		enum Status {
			Preparing = 0,
			Paused = 1,
			InProgress = 2,
			Finished = 3,
		};

		enum Quality {
			Best = 0,
			Normal = 1,
			Worst = 3,
		};

		Status status;
	signals:
		void onProgressChanged(double);
		void onStatusChanged(Status);
};

#endif // DOWNLOAD_H
