add_library(Renderer STATIC
    src/renderer.cpp
    src/vulkan/vulkan_renderer.cpp

    include/renderer.hpp
    include/vulkan_renderer.hpp
)

target_compile_options(Renderer PRIVATE ${MY_COMMON_COMPILE_OPTIONS})

target_include_directories(Renderer PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)