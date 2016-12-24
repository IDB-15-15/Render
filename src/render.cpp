#include "render.hpp"
#include <queue>
#include <map>
#include "modulsystem.hpp"
#include <QDebug>

namespace Render{

QWidget* render(boost::variant<Parser::Tree::Tag, Parser::Tree::Text> root)
{
    Render::ModulSystem modulsystem;
    std::queue<std::pair<boost::variant<Parser::Tree::Tag, Parser::Tree::Text>, QWidget*>> queue;
    QWidget* parent;
    QWidget* ret = nullptr;

    if (root.which() == 0)
    {
        const Parser::Tree::Tag &firstNode = boost::get<Parser::Tree::Tag>(root);

        if (firstNode.name == "html")
        {
            for (const auto &childs : firstNode.children)
            {
                if (childs.which() == 0)
                {
                    const Parser::Tree::Tag &firstTag = boost::get<Parser::Tree::Tag>(childs);

                    if (firstTag.name == "body")
                    {
                        queue.push(std::make_pair(childs, nullptr));
                        while (!queue.empty())
                        {
                            std::pair<boost::variant<Parser::Tree::Tag, Parser::Tree::Text>, QWidget*> pair = queue.front();
                            queue.pop();

                            if (pair.first.which() == 0)
                            {
                                Parser::Tree::Tag &tag = boost::get<Parser::Tree::Tag>(pair.first);

                                try
                                {
                                    parent = modulsystem.generateTag(tag, pair.second);
                                }
                                catch (const std::out_of_range &)
                                {
                                    Parser::Tree::Text toText = tag.to_text();
                                    std::string textString(toText.value, toText.size);
                                    parent = modulsystem.generateText(textString, pair.second);
                                }

                                if (pair.second == nullptr)
                                    ret = parent;
                                for (const auto &child : tag.children)
                                    queue.push(std::make_pair(child, parent));
                            }
                            else
                            {
                                const Parser::Tree::Text &text = boost::get<Parser::Tree::Text>(pair.first);
                                std::string textString(text.value, text.size);
                                parent = modulsystem.generateText(textString, pair.second);
                            }
                        }
                    }
                }
            }
        }
    }

    else
    {
       // all page to text

        const Parser::Tree::Tag &text = boost::get<Parser::Tree::Tag>(root);
        ret = modulsystem.generateTag(text, nullptr);
    }

    return ret;
}

}
