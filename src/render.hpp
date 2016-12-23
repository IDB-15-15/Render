#ifndef PARSERNODE_H
#define PARSERNODE_H
#include <iostream>
#include <tree.h>
#include <parser.h>
#include "boost/variant.hpp"
#include <QWidget>

namespace Render{

QWidget* render(boost::variant<Parser::Tree::Tag, Parser::Tree::Text> root);

}
#endif // PARSERNODE_H
