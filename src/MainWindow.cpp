#include "MainWindow.h"
#include "CustomWidget.h"

#include <sstream>

MainWindow::MainWindow(
    const boost::di::extension::ifactory<CustomWidget, std::string, Widget*>& customWidgetFactory)
    : Widget("Main Window", nullptr)
    , m_customWidgetFactory(customWidgetFactory)
    , m_number(0)
{
}

void MainWindow::onCustomDialogShowClicked()
{
    std::stringstream sstream;
    sstream << "Custom widget #" << m_number++;
    m_customWidgetFactory.create(sstream.str(), this)->setVisible(true);
}
