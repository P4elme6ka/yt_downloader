#ifndef DOWNLOADITEM_H
#define DOWNLOADITEM_H

#include <QWidget>

#include "src/Models/download.h"

namespace Ui {
	class DownloadItem;
}

class DownloadItem : public QWidget
{
		Q_OBJECT

	public:
		explicit DownloadItem(Download, QWidget *parent = nullptr);
		~DownloadItem();

	private:
		Ui::DownloadItem *ui;
};

#endif // DOWNLOADITEM_H
