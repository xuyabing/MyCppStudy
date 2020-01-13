cmake_minimum_required(VERSION 3.15)
project(cppStudy)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCES
        lession1/*h  //*号对应具体文件名
        lession1/*.cpp)
add_executable(cppStudy1 lession1/main.cpp ${SOURCES} lession7_生产消费/main.cpp)

file(GLOB SOURCES2
        lession2/*h
        lession2/*.cpp)
add_executable(cppStudy2 lession2/main2.cpp ${SOURCES2})

# *号对应具体文件名
file(GLOB SOURCES3
        lession3/*h
        lession3/*.cpp)
add_executable(cppStudy3 lession3/main.cpp ${SOURCES3})

file(GLOB SOURCES4
        lession4_file/*h
        lession4_file/*.cpp)
add_executable(cppStudy4 lession4_file/main.cpp ${SOURCES4})

file(GLOB SOURCES5
        lession5_xiancheng/*h
        lession5_xiancheng/*.cpp)
add_executable(cppStudy_xiancheng lession5_xiancheng/main.cpp ${SOURCES5})

file(GLOB SOURCES6
        lession6_duoxiancheng/*h
        lession6_duoxiancheng/*.cpp)
add_executable(cppStudy_duoxiancheng lession6_duoxiancheng/main.cpp ${SOURCES6})

file(GLOB SOURCES7
        lession7_生产消费/*h
        lession7_生产消费/*.cpp)
add_executable(cppStudy7_sc_xf lession7_生产消费/main.cpp ${SOURCES7})