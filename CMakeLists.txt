cmake_minimum_required(VERSION 3.22)

add_library(sat_link 
            STATIC "src/sat_link.cpp")

target_include_directories(sat_link 
                           PUBLIC include)

target_link_libraries(sat_link abstract_link)
