######
# 指定 cmake 最低编译版本
CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

#Project Name
#PROJECT (Test03_Hello)
#PROJECT (SayHello03)
PROJECT (Test03)
#SET(PROJECT_NAME "${PROJECT}")

# add file list, SET(SRC_LIST tested03.c testates03.c)
#FILE(GLOB SRC_LIST "${PROJECT_SOURCE_DIR}/src/*.c" "${PROJECT_SOURCE_DIR}/src/*.cpp" "${PROJECT_SOURCE_DIR}/src/*.s ${PROJECT_SOURCE_DIR}/libs/*/src/*.c" "${PROJECT_SOURCE_DIR}/libs/*src/*.cpp" "${PROJECT_SOURCE_DIR}/libs/*src/*.s")
FILE(GLOB SRC_LIST
  "${PROJECT_SOURCE_DIR}/test/src/*.c"
  "${PROJECT_SOURCE_DIR}/test/src/*.cpp"
  "${PROJECT_SOURCE_DIR}/test/src/*.s"
  "${PROJECT_SOURCE_DIR}/libs/*/src/*.c"
  "${PROJECT_SOURCE_DIR}/libs/*/src/*.cpp"
  "${PROJECT_SOURCE_DIR}/libs/*/src/*.s")
###### print SRC_LIST for debug
##### MESSAGE(STATUS ${SRC_LIST})

#add the shared source code of the file path
FILE(GLOB SRC_SHARED_LIST
  "${PROJECT_SOURCE_DIR}/libs/shared/src/*.c"
  "${PROJECT_SOURCE_DIR}/libs/shared/src/*.cpp"
  "${PROJECT_SOURCE_DIR}/libs/shared/src/*.s")
###### MESSAGE(STATUS ${SRC_SHARED_LIST})

# include path for project
#INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/libs/*/header)
INCLUDE_DIRECTORIES(
  ${PROJECT_SOURCE_DIR}/test/header
  ${PROJECT_SOURCE_DIR}/libs/practice/header
#TODO#  ${PROJECT_SOURCE_DIR}/libs/*/header
  ${PROJECT_SOURCE_DIR}/libs/say_hello/header)
# include path for shared
INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/libs/shared/header)

# 指定输出 .so 动态库的目录位置
#SET(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/libShared)
SET(LIBRARY_OUTPUT_PATH ./libShared)

# 指定生成动态库
#ADD_LIBRARY(SayHello03 SHARED ${SRC_LIST})

ADD_LIBRARY(Test03Shared SHARED ${SRC_SHARED_LIST})
#ADD_LIBRARY(Test03Shared STATIC ${SRC_SHARED_LIST})
#ADD_LIBRARY(Test03Shared MODULE ${SRC_SHARED_LIST})

###### 指定生成静态库
#####ADD_LIBRARY(SayHello03 ${SRC_LIST})


#print check the variable content in env
MESSAGE(STATUS "This is PROJECT             " ${PROJECT})
MESSAGE(STATUS "This is PROJECT_NAME        " ${PROJECT_NAME})
MESSAGE(STATUS "This is CMAKE_PROJECT_NAME  " ${CMAKE_PROJECT_NAME})
# 输出打印构建目录
MESSAGE(STATUS "This is HELLO_BINARY_DIR " ${HELLO_BINARY_DIR})
# 输出打印资源目录
MESSAGE(STATUS "This is HELLO_SOURCE_DIR " ${HELLO_SOURCE_DIR})
# 输出打印资源目录，与HELLO_SOURCE_DIR 一样
MESSAGE(STATUS "This is PROJECT_SOURCE_DIR " ${PROJECT_SOURCE_DIR})
# 输出打印 CMake 资源目录，与 PROJECT_SOURCE_DIR 一样
MESSAGE(STATUS "This is CMAKE_SOURCE_DIR " ${CMAKE_SOURCE_DIR})

# 生成可执行文件 hello ，${SRC_LIST}是引用变量，也就是源文件 hello.cpp
# gen ext file, list the dependancy file here
#ADD_EXECUTABLE("${PROJECT_NAME}" ${SRC_LIST} ${SRC_SHARED_LIST})
ADD_EXECUTABLE(
#  Test03
  ${PROJECT_NAME}
  ${SRC_LIST}
  ${SRC_SHARED_LIST})
