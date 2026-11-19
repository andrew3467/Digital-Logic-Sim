cmake_minimum_required(VERSION 4.3)
project(Digital-Logic-Sim)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(SDL_ImGui_Template)

file(GLOB_RECURSE HEADERS src/*.h)
file(GLOB_RECURSE SRC src/*.cpp)

add_executable(
        Digital-Logic-Sim
        ${HEADERS}
        ${SRC}
)

target_link_libraries(
        Digital-Logic-Sim
        PRIVATE
        SDL_ImGui_Template
)

target_include_directories(
        Digital-Logic-Sim
        PRIVATE
        SDL_ImGui_Template
        src
)
