cmake_minimum_required(VERSION 3.15) 
PROJECT ( main )



include_directories(${PROJECT_SOURCE_DIR})


file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/*.cpp"
        )

add_executable(  ${PROJECT_NAME} ${all_SRCS})
        
