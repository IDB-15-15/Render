#ifndef TAGIMAGE
#define TAGIMAGE

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"
#include <QLabel>
#include <QLayout>

namespace Render{

class TagImg: public QLabel
{
    Q_OBJECT
public:
    TagImg(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
