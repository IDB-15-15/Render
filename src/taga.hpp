#ifndef TAGA_H
#define TAGA_H

#include <parser.h>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagA: public QWidget
{
    Q_OBJECT
public:
    TagA(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}


#endif // TAGA_H
