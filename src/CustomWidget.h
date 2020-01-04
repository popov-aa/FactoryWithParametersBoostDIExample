#pragma once

#include "Widget.h"

#include <string>

class CustomWidget : public Widget {
public:
    CustomWidget(const std::string& title, Widget* parent = nullptr);
};
