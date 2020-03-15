#include "scorerwindow.h"
#include "ui_scorerwindow.h"

ScorerWindow::ScorerWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScorerWindow)
{
    ui->setupUi(this);
}

ScorerWindow::~ScorerWindow()
{
    delete ui;
}
