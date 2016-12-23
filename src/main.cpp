#include "modulsystem.hpp"
#include "tagbody.hpp"
#include "tagbodybcolor.hpp"
#include "tagimage.hpp"
#include "tagtable.hpp"
#include "render.hpp"
#include "text.hpp"
#include "taga.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    std::shared_ptr<std::string> input = std::make_shared<std::string>("<html><head><title>KEKEKEKEEK</title></head><body text='aqua' font-size='5'><img src='file://C:/Users/korvin/Pictures/bla/12529.jpg'>blabla<a href='ya.ru'>yandex</a>test</img></body></html>");
    Parser::Tree tree = Parser::parse(input);
    Parser::Tree::Tag root = boost::get<Parser::Tree::Tag>(tree.root);
    QApplication app(argc, argv);
    QWidget* get = render(tree.root);
    get->show();

    return app.exec();
}
