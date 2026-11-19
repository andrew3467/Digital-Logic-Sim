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

add_custom_command(TARGET Digital-Logic-Sim POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        $<TARGET_FILE:SDL3::SDL3>
        $<TARGET_FILE_DIR:Digital-Logic-Sim>
)
