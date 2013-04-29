#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <QDialog>
#include "Common/wikimakerinterface.h"

namespace Ui {
class Preferences;
}

class Preferences : public QDialog,WikiMakerInterface
{
    Q_OBJECT
    
public:
    explicit Preferences(QWidget *parent = 0);
    ~Preferences();
    
private:
    Ui::Preferences *ui;
    void reflectActions();

private slots:

};

#endif // PREFERENCES_H
