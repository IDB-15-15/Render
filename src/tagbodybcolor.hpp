#ifndef TAGBODYBCOLOR
#define TAGBODYBCOLOR

#include <parser.h>
#include <QWidget>
#include "render.hpp"

namespace Render{

class TagBodybColor: public QWidget
{
    Q_OBJECT
public:
    TagBodybColor(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}


#endif
