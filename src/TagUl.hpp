#ifndef TAGUL
#define TAGUL

#include <parser.h>
#include <QWidget>
#include "render.hpp"


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
