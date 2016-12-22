#ifndef TAGDL
#define TAGDL

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagDl: public QWidget
{
    Q_OBJECT
public:
    TagDl(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
