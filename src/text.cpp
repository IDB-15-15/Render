#include "text.hpp"

#include <QLayout>

namespace Render{

Text::Text(const Parser::Tree::Text &parsText, QWidget* parent)
{
    std::string text = parsText.value;
    QString value = QString::fromStdString(text);
    setText(value);
    if (parent != nullptr && parent->layout() != nullptr)
        parent->layout()->addWidget(this);
}
}
