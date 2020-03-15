#ifndef SCORERWINDOW_H
#define SCORERWINDOW_H

#include <QDialog>

namespace Ui {
class ScorerWindow;
}

class ScorerWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ScorerWindow(QWidget *parent = nullptr);
    ~ScorerWindow();

private:
    Ui::ScorerWindow *ui;
};

#endif // SCORERWINDOW_H
