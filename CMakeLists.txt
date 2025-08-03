cmake_minimum_required(VERSION 4.0)
project(dsac)

set(source_files 
	./src/main.c
	./src/problems/basic_math.c
)

set(CMAKE_C_FLAGS_DEBUG "-g -Wall -Werror -Wextra -fsanitize=address")
set(CMAKE_C_FLAGS_RELEASE "-O3")
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_BUILD_TYPE Debug)

add_executable(${PROJECT_NAME} ${source_files})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/src/problems)
