#include "Widget.h"

#include <iostream>
#include <sstream>

Widget::Widget(
    const std::string& title,
    Widget* parent)
    : m_title(title)
    , m_parent(parent)
    , m_isVisible(false)
{
    std::cout << toString() << " created" << std::endl;
}

Widget::~Widget()
{
    std::cout << toString() << " destroyed" << std::endl;
}

std::string Widget::title() const
{
    return m_title;
}

Widget* Widget::parent() const
{
    return m_parent;
}

std::string Widget::toString() const
{
    std::stringstream result;
    std::string parentTitle = m_parent == nullptr ? std::string("nullptr") : m_parent->title();
    result << "Widget " << m_title << " (parent " << parentTitle << ")";
    return result.str();
}

bool Widget::isVisible() const
{
    return m_isVisible;
}

void Widget::setVisible(bool isVisible)
{
    m_isVisible = isVisible;
}
