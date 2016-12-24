#ifndef MODULSYSTEM_H
#define MODULSYSTEM_H

#include <map>
#include <functional>
#include <memory>
#include <QWidget>
#include "render.hpp"
#include "tagbody.hpp"
#include "tagbodybcolor.hpp"
#include "tagimage.hpp"
#include "tagtable.hpp"
#include "text.hpp"
#include "taga.hpp"
#include <string>

namespace Render{

class ModulSystem
{
public:
    ModulSystem();
    std::map <std::string, std::function <QWidget* (const Parser::Tree::Tag &, QWidget*)>> modulSystem;
    QWidget* generateTag(const Parser::Tree::Tag &parsTag, QWidget* parent);
    QWidget* generateText(std::string &parsText, QWidget* parent);
};
}

#endif // MODULSYSTEM_H
