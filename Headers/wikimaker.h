#ifndef WIKIMAKER_H
#define WIKIMAKER_H

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
    
private:
    Ui::WikiMaker *ui;
};

#endif // WIKIMAKER_H
