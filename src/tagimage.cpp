#include "tagimage.hpp"
#include "NETWORK.h"
#include <QDebug>

namespace Render{

TagImg::TagImg(const Parser::Tree::Tag &parsTag, QWidget* parent)
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
        QPixmap pixmap;
        pixmap.loadFromData(data, len, nullptr, Qt::AutoColor);
        QLabel* image = new QLabel();
        image->setPixmap(pixmap);
    }
    catch (const std::exception &e)
    {
         qDebug() << "Image not found" << e.what();;
    }
    if (parent != nullptr && parent->layout() != nullptr)
        parent->layout()->addWidget(this);
}
}
