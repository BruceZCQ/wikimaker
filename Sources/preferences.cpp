#include "Headers/preferences.h"
#include "ui_preferences.h"

Preferences::Preferences(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Preferences)
{
    ui->setupUi(this);
    //connect the signals and slots
    reflectActions();
}

Preferences::~Preferences()
{
    delete ui;
}


void Preferences::reflectActions()
{
    //cancel and ok button action reflect
    connect(ui->cancelButton,SIGNAL(clicked()),\
            this,SLOT(accept()));
    connect(ui->okButton,SIGNAL(clicked()),\
            this,SLOT(accept()));
}
