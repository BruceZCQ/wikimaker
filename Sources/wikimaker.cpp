#include "Headers/wikimaker.h"
#include "ui_wikimaker.h"
#include "Headers/about.h"
#include "Headers/preferences.h"

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
    //make wiki button action
    connect(ui->makeWikiBtn,SIGNAL(clicked()),
            this,SLOT(makeWikiActionSlot()));
    //about action reflect
    About *about = new About;
    connect(ui->actionAbout,SIGNAL(triggered()),
            about,SLOT(exec()));
     //qt about
    connect(ui->actionAboutQt,SIGNAL(triggered()),
            qApp,SLOT(aboutQt()));
    //preference action refect
    Preferences *preferences = new Preferences;
    connect(ui->actionPreferences,SIGNAL(triggered()),
            preferences,SLOT(exec()));
}

WikiMaker::~WikiMaker()
{
    delete ui;
}


void WikiMaker::openActionSlot(){
    qDebug() << "open action reflect";
}

void WikiMaker::makeWikiActionSlot(){
    qDebug() << " HTML Content" << endl
             <<ui->wikiContent->toHtml()<< endl
    << "Plain Text" << ui->wikiContent->toPlainText();
}

void WikiMaker::keyPressEvent(QKeyEvent *e){
    e->ignore();
    qDebug() << "a key pressed";
//    if (e->key() == Qt::Key_Control){
//        qDebug() << "command pressed";
//    }
}
