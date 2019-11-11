cmake_minimum_required(VERSION 3.14)
project(ClionSFML)


set(CMAKE_CXX_STANDARD 14)


include_directories(/Users/astra/Desktop/SFML/External\ Libraries/SFML)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(ClionSFML
        main.cpp
        packman.hpp
        packman.cpp
        field.hpp
        field.cpp

        gamescene.cpp
        gamescene.hpp
        ghost.cpp
        ghost.hpp
        utils.cpp
        utils.hpp

        #сore.hpp
        )

target_link_libraries(ClionSFML sfml-graphics sfml-audio sfml-network sfml-window sfml-system)