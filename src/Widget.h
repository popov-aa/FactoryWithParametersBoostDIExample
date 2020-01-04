#pragma once

#include <string>

class Widget {
public:
    explicit Widget(
        const std::string& title,
        Widget* parent = nullptr);
    virtual ~Widget();

    std::string title() const;
    Widget* parent() const;

    virtual std::string toString() const;

    bool isVisible() const;
    void setVisible(bool isVisible);

private:
    std::string m_title;
    Widget* m_parent;
    bool m_isVisible;
};
