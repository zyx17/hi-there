cmake_minimum_required( VERSION 2.8 )
project( hi-there )

set( CMAKE_BUILD_TYPE "Debug" )
#set( CMAKE_BUILD_TYPE "Release" )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g") 


# opencv 
set(OpenCV_DIR "/home/xuan/software/opencv-3.1.0/build")
find_package(CUDA REQUIRED)
find_package(OpenCV 3.1 REQUIRED )
find_package(Boost COMPONENTS filesystem REQUIRED)
find_package(VTK REQUIRED)
find_package(PCL REQUIRED)

include_directories(./include/)
include_directories( ${OpenCV_INCLUDE_DIRS} )
include_directories( ${Boost_INCLUDE_DIRS} )
include_directories( ${PCL_INCLUDE_DIRS})
include_directories( ${VTK_INCLUDE_DIRS})

aux_source_directory(./src DIR_SRCS)
add_executable( ${PROJECT_NAME} ${DIR_SRCS} )

target_link_libraries( ${PROJECT_NAME}
  ${OpenCV_LIBS} 
  ${Boost_LIBS}
  ${VTK_LIBS}
  ${PCL_LIBRARIES}
   
  #glog
)
