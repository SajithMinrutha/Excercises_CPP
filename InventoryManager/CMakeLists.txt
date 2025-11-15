cmake_minimum_required(VERSION 3.10)
project(InventoryManager)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES 
    inventory_manager.cpp
    Inventory.cpp
    Menu.cpp
    Products.cpp
    Validity.cpp
)

add_executable(inventory_manager ${SOURCES})