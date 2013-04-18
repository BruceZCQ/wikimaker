#include "Headers/wikimaker.h"
#include "ui_wikimaker.h"
#include "Headers/about.h"

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
    //make wiki button action
    connect(ui->makeWikiBtn,SIGNAL(clicked()),
            this,SLOT(makeWikiActionSlot()));
    //about action reflect
    About *about = new About;
    connect(ui->actionAbout,SIGNAL(triggered()),
            about,SLOT(exec()));
    //qt about
    connect(ui->actionAboutQt,SIGNAL(triggered()),
            this,SLOT(aboutQtActionSlot()));
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

void WikiMaker::makeWikiActionSlot(){
    qDebug() << " HTML Content" << endl
             <<ui->wikiContent->toHtml()<< endl
    << "Plain Text" << ui->wikiContent->toPlainText();
}

void WikiMaker::aboutQtActionSlot(){
    QApplication::aboutQt();
}

void WikiMaker::keyPressEvent(QKeyEvent *e){
    e->ignore();
//    qDebug() << "a key pressed";
//    if (e->key() == Qt::Key_Control){
//        qDebug() << "command pressed";
//    }
}
