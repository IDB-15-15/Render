
#include "modulsystem.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    std::shared_ptr<std::string> input = std::make_shared<std::string>
        ("<html><head><title>KEKEKEKEEK</title></head><body text='aqua' font-size='5'>blabla<a href='ya.ru'>yandex</a>test</img></body></html>");
    Parser::Tree tree = Parser::parse(input);
    Parser::Tree::Tag root = boost::get<Parser::Tree::Tag>(tree.root);
    QApplication app(argc, argv);
    QWidget* get = Render::render(tree.root);
    get->show();

    return app.exec();
}

