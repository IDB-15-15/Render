#ifndef TAGUL
#define TAGUL

#include <parser.h>
#include <QWidget>
#include "render.hpp"
#include <QtWidgets/QMainWindow>

namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    public:
       explicit MainWindow(QWidget *parent = 0);
   
       ~MainWindow();
    private:
    Ui::MainWindow *ui;
};    

namespace Render
{
     class TagUl: public QWidget
     {
         Q_OBJECT
     public:
         TagUl(const Parser::Tree::Tag &parsTag,QWidget* parent);
     };
}

#endif
