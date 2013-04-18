#include "Headers/wikimaker.h"
#include "ui_wikimaker.h"

WikiMaker::WikiMaker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WikiMaker)
{
    ui->setupUi(this);
    //connect the signals and slots
    reflectActions();
}

void WikiMaker::reflectActions(){
    //open action
    connect(ui->actionOpen,SIGNAL(triggered()),
            this,SLOT(openActionSlot()));
    //preference action
    connect(ui->actionPreferences,SIGNAL(triggered()),
            this,SLOT(perferencesActionSlot()));

}

WikiMaker::~WikiMaker()
{
    delete ui;
}


void WikiMaker::openActionSlot(){
    qDebug() << "open action reflect";
}

void WikiMaker::perferencesActionSlot(){
    qDebug() << "preference reflect";
}

void WikiMaker::keyPressEvent(QKeyEvent *e){
//    qDebug() << "a key pressed";
//    if (e->key() == Qt::Key_Control){
//        qDebug() << "command pressed";
//    }
}
