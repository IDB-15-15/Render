#ifndef TAGLI
#define TAGLI

#include <parser.h>
#include <QWidget>
#include "render.hpp"

namespace Render
{
     class TagLi: public QWidget
     {
         Q_OBJECT
     public:
         TagLi(const Parser::Tree::Tag &parsTag,QWidget* parent);
     };
}

#endif
