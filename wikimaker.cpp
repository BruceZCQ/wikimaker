#include "wikimaker.h"
#include "ui_wikimaker.h"

WikiMaker::WikiMaker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WikiMaker)
{
    ui->setupUi(this);
}

WikiMaker::~WikiMaker()
{
    delete ui;
}
