#ifndef TAGIMAGE
#define TAGIMAGE

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"
#include <QLabel>
#include <QLayout>

namespace Render{

class TagImage: public QLabel
{
    Q_OBJECT
public:
    TagImage(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif
