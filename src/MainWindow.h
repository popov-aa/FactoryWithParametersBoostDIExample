#pragma once

class CustomWidget;

#include "Widget.h"

#include <boost/di.hpp>
#include <boost/di/extension/injections/factory.hpp>

class MainWindow : public Widget {
public:
    MainWindow(
        const boost::di::extension::ifactory<CustomWidget, std::string, Widget*>& customWidgetFactory);

    void onCustomDialogShowClicked();

private:
    const boost::di::extension::ifactory<CustomWidget, std::string, Widget*>& m_customWidgetFactory;
    int m_number;
};
