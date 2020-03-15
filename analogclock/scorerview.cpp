#include "scorerview.h"
#include "ui_scorerview.h"

ScorerView::ScorerView(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ScorerView)
{
    ui->setupUi(this);
}

ScorerView::~ScorerView()
{
    delete ui;
}
