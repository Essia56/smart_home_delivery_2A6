#ifndef STATS_H
#define STATS_H

#include <QMainWindow>

namespace Ui {
class stats;
}

class stats : public QMainWindow
{
    Q_OBJECT

public:
    explicit stats(QWidget *parent = nullptr);
    ~stats();

private:
    Ui::stats *ui;
};

#endif // STATS_H
