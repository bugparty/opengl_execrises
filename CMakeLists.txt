cmake_minimum_required(VERSION 3.23)
project(openglsample1)

set(CMAKE_CXX_STANDARD 20)
find_package(glfw3  REQUIRED)
find_package(glad CONFIG REQUIRED)

add_executable(tutorial01 tutorial01.cpp)
target_link_libraries(tutorial01 PRIVATE glad::glad glfw)

add_executable(02hello_triangles 02hello_triangles.cpp)
target_link_libraries(02hello_triangles PRIVATE glad::glad glfw)

add_executable(03homework 03homework.cpp)
target_link_libraries(03homework PRIVATE glad::glad glfw)

add_executable(04homework 04homework.cpp)
target_link_libraries(04homework PRIVATE glad::glad glfw)

add_executable(05homework 05homework.cpp)
target_link_libraries(05homework PRIVATE glad::glad glfw)

add_executable(06shader 06shader.cpp)
target_link_libraries(06shader PRIVATE glad::glad glfw)


add_executable(07shader_ex 07shader_ex.cpp)
target_link_libraries(07shader_ex PRIVATE glad::glad glfw)

add_executable(08shader_ex 08shader_ex.cpp)
target_link_libraries(08shader_ex PRIVATE glad::glad glfw)

add_executable(09shader_ex 09shader_ex.cpp)
target_link_libraries(09shader_ex PRIVATE glad::glad glfw)

find_path(STB_INCLUDE_DIRS "stb_image.h")

add_executable(10texture 10texture.cpp std_image.cpp)
target_link_libraries(10texture PRIVATE glad::glad glfw)
target_include_directories(10texture PRIVATE ${STB_INCLUDE_DIRS})

add_executable(11texture_ex 11texture_ex.cpp std_image.cpp)
target_link_libraries(11texture_ex PRIVATE glad::glad glfw)
target_include_directories(11texture_ex PRIVATE ${STB_INCLUDE_DIRS})

add_executable(12texture_ex 12texture_ex.cpp std_image.cpp)
target_link_libraries(12texture_ex PRIVATE glad::glad glfw)
target_include_directories(12texture_ex PRIVATE ${STB_INCLUDE_DIRS})

add_executable(13texture_ex 13texture_ex.cpp std_image.cpp)
target_link_libraries(13texture_ex PRIVATE glad::glad glfw)
target_include_directories(13texture_ex PRIVATE ${STB_INCLUDE_DIRS})

add_executable(14texture_ex 14texture_ex.cpp std_image.cpp)
target_link_libraries(14texture_ex PRIVATE glad::glad glfw)
target_include_directories(14texture_ex PRIVATE ${STB_INCLUDE_DIRS})

find_package(glm CONFIG REQUIRED)

add_executable(15glm 15glm.cpp)
target_link_libraries(15glm PRIVATE glm::glm)

add_executable(16glm_texture 16glm_texture.cpp std_image.cpp)
target_link_libraries(16glm_texture PRIVATE glad::glad glfw glm::glm)
target_include_directories(16glm_texture PRIVATE ${STB_INCLUDE_DIRS})

add_executable(17glm_texture_ex 17glm_texture_ex.cpp std_image.cpp)
target_link_libraries(17glm_texture_ex PRIVATE glad::glad glfw glm::glm)
target_include_directories(17glm_texture_ex PRIVATE ${STB_INCLUDE_DIRS})

add_executable(18glm_texture_ex 18glm_texture_ex.cpp std_image.cpp)
target_link_libraries(18glm_texture_ex PRIVATE glad::glad glfw glm::glm)
target_include_directories(18glm_texture_ex PRIVATE ${STB_INCLUDE_DIRS})

add_executable(19coordinateSystem 19coordinateSystem.cpp std_image.cpp)
target_link_libraries(19coordinateSystem PRIVATE glad::glad glfw glm::glm)
target_include_directories(19coordinateSystem PRIVATE ${STB_INCLUDE_DIRS})

add_executable(20coordinateSystemMoreCubes 20coordinateSystemMoreCubes.cpp std_image.cpp)
target_link_libraries(20coordinateSystemMoreCubes PRIVATE glad::glad glfw glm::glm)
target_include_directories(20coordinateSystemMoreCubes PRIVATE ${STB_INCLUDE_DIRS})

add_executable(21coordinateSystemMoreCubes_ex 21coordinateSystemMoreCubes_ex.cpp std_image.cpp)
target_link_libraries(21coordinateSystemMoreCubes_ex PRIVATE glad::glad glfw glm::glm)
target_include_directories(21coordinateSystemMoreCubes_ex PRIVATE ${STB_INCLUDE_DIRS})