#ifndef TAGBODY_H
#define TAGBODY_H

#include <parser.h>
#include <QWidget>
#include <QVBoxLayout>
#include "render.hpp"
#include "boost/lexical_cast.hpp"

namespace Render{

class TagBody: public QWidget
{
    Q_OBJECT
public:
    TagBody(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}

#endif // TAGBODY_H
