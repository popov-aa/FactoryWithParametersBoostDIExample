#include <boost/di.hpp>
#include <boost/di/extension/injections/factory.hpp>

#include "CustomWidget.h"
#include "MainWindow.h"
#include "Widget.h"

int main(int argc, char* argv[])
{
    auto injector = boost::di::make_injector(
        boost::di::bind<boost::di::extension::ifactory<CustomWidget, std::string, Widget*>>().to(boost::di::extension::factory<CustomWidget> {}),
        boost::di::bind<MainWindow>());

    auto mainWindow = boost::di::create<MainWindow>(injector);
    mainWindow.onCustomDialogShowClicked();
    mainWindow.onCustomDialogShowClicked();
    mainWindow.onCustomDialogShowClicked();

    return 0;
}
