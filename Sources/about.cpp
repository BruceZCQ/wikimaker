#include "Headers/about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    connect(ui->closeAboutBtn,SIGNAL(clicked()),
            this,SLOT(accept()));
}

About::~About()
{
    delete ui;
}
