
#include "modulsystem.hpp"
#include <QApplication>

int main(int argc, char *argv[])
{
    Network::NetworkRes res;
    res = Network::give_result("http://opennet.ru/");
    Parser::Tree tree = Parser::parse(&res);
    Parser::Tree::Tag root = boost::get<Parser::Tree::Tag>(tree.root);
    QApplication app(argc, argv);
    QWidget* get = Render::render(tree.root);
    get->show();

    return app.exec();
}

