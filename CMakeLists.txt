cmake_minimum_required(VERSION 3.5)

project(FactoryWithParametersBoostDIExample LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(
    src
    boost-di/include
    boost-di/extension/include
)

add_executable(
  FactoryWithParametersBoostDIExample
  src/main.cpp
  src/Widget.h
  src/Widget.cpp
  src/MainWindow.h
  src/MainWindow.cpp
  src/CustomWidget.h
  src/CustomWidget.cpp
)
target_link_libraries(FactoryWithParametersBoostDIExample)
