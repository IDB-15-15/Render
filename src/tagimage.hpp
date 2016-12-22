#ifndef TAGIMAGE
#define TAGIMAGE

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"
#include <QPixmap>

namespace Render{

class TagImage: public QPixmap
{
    Q_OBJECT
public:
    TagImage(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
