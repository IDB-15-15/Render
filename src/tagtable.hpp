#ifndef TAGTABLE_H
#define TAGTABLE_H

#include <parser.h>
#include <QWidget>
#include "render.hpp"

namespace Render{

class TagTable: public QWidget
{
    Q_OBJECT
public:
    TagTable(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}


#endif
