#ifndef DOWNLOADLIST_H
#define DOWNLOADLIST_H

#include <QWidget>

#include "src/Models/download.h"

namespace Ui {
	class downloadlist;
}

class downloadlist : public QWidget {
		Q_OBJECT

	public:
		explicit downloadlist(QWidget* parent = nullptr);
		~downloadlist();

		QList<Download> downloads;

	private:
		Ui::downloadlist* ui;
};

#endif // DOWNLOADLIST_H
