#include "text.hpp"

#include <QLayout>

namespace Render{

Text::Text(std::string &parsText, QWidget* parent)
{
//    std::string text = parsText.value;
    QString value = QString::fromStdString(parsText);
    setText(value);
    if (parent != nullptr && parent->layout() != nullptr)
        parent->layout()->addWidget(this);
}
}
