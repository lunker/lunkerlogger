cmake_minimum_required(VERSION 3.6)
project(lunkerlogger)

set(CMAKE_CXX_STANDARD 14)

# Import Boost Libs
set(Boost_USE_STATIC_LIBS OFF) 
set(Boost_USE_MULTITHREADED ON)  
set(Boost_USE_STATIC_RUNTIME OFF)
#find_package(Boost 1.64.0 COMPONENTS log)
find_library (LIBSTDCXX NAMES stdc++)

if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

# Set boost is usable in OSX

# cxxflags="-std=c++0x"
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std -c++0x")

set(SOURCE_FILES main.cpp src/severity/s_logger.hpp src/severity/s_logger.cpp src/channel/c_logger.cpp src/channel/c_logger.hpp src/channel_severity/m_looger.cpp src/channel_severity/m_looger.hpp)
add_executable(lunkerlogger ${SOURCE_FILES})
add_compile_options(-stdlib=libstdc++)
target_link_libraries(lunkerlogger ${LIBSTDCXX} ${Boost_LIBRARIES})