#ifndef TAGIMAGE
#define TAGIMAGE

#include <parser.hpp>
#include <QWidget>
#include "parsernode.hpp"

namespace Render{

class TagImage: public QWidget
{
    Q_OBJECT
public:
    TagImage(const ParserNode &parserNode, QWidget* parent);
};
}

#endif
