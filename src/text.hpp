#ifndef TEXT_H
#define TEXT_H
#include <parser.h>
#include <QWidget>
#include "render.hpp"
#include <QLabel>

namespace Render{

class Text: public QLabel
{
    Q_OBJECT
public:
    Text(const Parser::Tree::Text &parsText, QWidget* parent);
};
}


#endif // TEXT_H
