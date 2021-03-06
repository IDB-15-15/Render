#include "modulsystem.hpp"

namespace Render{

template <class Tag>
QWidget* f(const Parser::Tree::Tag &parsTag, QWidget* parent)
{
    return new Tag(parsTag, parent);
}

ModulSystem::ModulSystem()
{
    modulSystem.emplace("body", f<TagBody>);
    modulSystem.emplace("bodybcolor", f<TagBodybColor>);
    modulSystem.emplace("img", f<TagImg>);
    modulSystem.emplace("table", f<TagTable>);
    modulSystem.emplace("a", f<TagA>);
}

QWidget* ModulSystem::generateTag(const Parser::Tree::Tag &parsTag, QWidget* parent)
{
    auto &fn = modulSystem.at(parsTag.name);
    QWidget* generate = fn(parsTag, parent);
    return generate;
}

QWidget* ModulSystem::generateText(std::string &parsText, QWidget* parent)
{
    QWidget* generate = new Text(parsText, parent);
    return generate;
}

}
