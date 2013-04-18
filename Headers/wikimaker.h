#ifndef WIKIMAKER_H
#define WIKIMAKER_H

#include <QtCore>
#include <QtGui>
#include <QMainWindow>

namespace Ui {
class WikiMaker;
}

class WikiMaker : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit WikiMaker(QWidget *parent = 0);
    ~WikiMaker();
    void keyPressEvent(QKeyEvent *e);

 private slots:
    void openActionSlot();
    void perferencesActionSlot();
    void makeWikiActionSlot();
    void aboutQtActionSlot();
    
private:
    Ui::WikiMaker *ui;
    void reflectActions();
};

#endif // WIKIMAKER_H
