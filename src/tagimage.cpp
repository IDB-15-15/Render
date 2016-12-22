#include "tagimage.hpp"
#include "NETWORK.h"
#include <QDebug>

namespace Render{

TagImage::TagImage(const Parser::Tree::Tag &parsTag, QWidget* parent)
{
    const char* resarr;
    int len;
    auto adres = parsTag.attributes.at("img");
    try
    {
        auto res = Network::give_result(adres);
        resarr = res.res_arr;
        const unsigned char* data = reinterpret_cast<const unsigned char*>(resarr);
        len = res.size;
        loadFromData(data, len, nullptr, Qt::AutoColor);
    }
    catch (const std::exception &e)
    {
         qDebug() << "Image not found" << e.what();;
    }
    if (parent != nullptr && parent->layout() != nullptr)
        parent->layout()->addWidget(this);
}
}
