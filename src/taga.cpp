#include "taga.hpp"

namespace Render{

TagA::TagA(const Parser::Tree::Tag &parsTag, QWidget* parent)
{
    new QVBoxLayout(this);
    if (parent != nullptr && parent->layout() != nullptr)
        parent->layout()->addWidget(this);
}
}

