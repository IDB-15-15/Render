#ifndef TAGLI
#define TAGLI

#include <parser.h>
#include <QWidget>
#include "render.hpp"

namespace Render
{
     class TagUl: public QWidget
     {
         Q_OBJECT
     public:
         TagDl(const Parser::Tree::Tag &parsTag,QWidget* parent);
     };
}

#endif
