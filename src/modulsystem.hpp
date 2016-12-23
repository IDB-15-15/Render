#ifndef MODULSYSTEM_H
#define MODULSYSTEM_H

#include <map>
#include <functional>
#include <memory>
#include <QWidget>
#include "render.hpp"


namespace Render{

class ModulSystem
{
public:
    ModulSystem();
    std::map <std::string, std::function <QWidget* (const Parser::Tree::Tag &, QWidget*)>> modulSystem;
    QWidget* generateTag(const Parser::Tree::Tag &parsTag, QWidget* parent);
    QWidget* generateText(const Parser::Tree::Text &parsText, QWidget* parent);
};
}

#endif // MODULSYSTEM_H
