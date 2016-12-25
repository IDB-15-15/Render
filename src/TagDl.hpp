#ifndef TAGDL
#define TAGDL

#include <parser.h>
#include <QWidget>
#include "render.hpp"

    
namespace Render
{

class TagDl: public QWidget
{
    Q_OBJECT
public:
    TagDl(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
