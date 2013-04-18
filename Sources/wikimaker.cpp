#include "Headers/wikimaker.h"
#include "ui_wikimaker.h"

WikiMaker::WikiMaker(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WikiMaker)
{
    ui->setupUi(this);
    connect(ui->actionOpen,SIGNAL(triggered()),this,SLOT(open()));
}

WikiMaker::~WikiMaker()
{
    delete ui;
}


void WikiMaker::open(){
    qDebug() << "open action reflect";
}

void WikiMaker::keyPressEvent(QKeyEvent *e){
    qDebug() << "a key pressed";
    if (e->key() == Qt::Key_Control){
        qDebug() << "command pressed";
    }
}
