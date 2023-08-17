cmake_minimum_required(VERSION 3.13)

include(pico_sdk_import.cmake)

project(force_webconfig)

pico_sdk_init()

add_executable(force_webconfig force_webconfig.c)
target_link_libraries(force_webconfig pico_stdlib pico_multicore)
pico_add_extra_outputs(force_webconfig)
pico_set_binary_type(force_webconfig no_flash)
