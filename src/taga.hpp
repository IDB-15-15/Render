#ifndef TAGA_H
#define TAGA_H

#include <parser.h>
#include <QWidget>
#include <QVBoxLayout>
#include "render.hpp"
#include "boost/lexical_cast.hpp"
#include <QLabel>

namespace Render{

class TagA: public QWidget
{
    Q_OBJECT
public:
    TagA(const Parser::Tree::Tag &parsTag, QWidget* parent);
};
}


#endif // TAGA_H
