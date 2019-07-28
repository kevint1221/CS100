CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)


ADD_EXECUTABLE(main
	calculator.cpp
)

ADD_EXECUTABLE(test
	unit_test.cpp
    addCommand.hpp
    divCommand.hpp
    double_factory.hpp 
    initialCommand.hpp 
    menu.hpp 
    multCommand.hpp 
    powCommand.hpp 
    precision_factory.hpp 
    scientific_factory.hpp 
    precision_op.hpp 
    precision_rand.hpp 
    rand.hpp  
    scientific_op.hpp 
    scientific_rand.hpp 
    subCommand.hpp 
    base.hpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
