#ifndef TEXT_H
#define TEXT_H
#include <parser.h>
#include <QWidget>
#include "render.hpp"
#include <QLabel>
#include <string>

namespace Render{

class Text: public QLabel
{
    Q_OBJECT
public:
    Text(std::string &parsText, QWidget* parent);
};
}


#endif // TEXT_H
