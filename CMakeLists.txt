cmake_minimum_required(VERSION 3.19)
project(my_cplus)

set(CMAKE_CXX_STANDARD 14)

# 遍历项目根目录下所有的 .cpp 文件
file (GLOB_RECURSE files *.cpp)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.cpp\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
#add_executable(my_cplus main.cpp prepare_eaxm/point_test/PointDefine.cpp prepare_eaxm/point_test/PointDefine.h)

