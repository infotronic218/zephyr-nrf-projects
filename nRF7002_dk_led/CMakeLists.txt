cmake_minimum_required(VERSION 3.20.0)

set(BOARD nrf7002dk_nrf5340_cpuapp_ns)



find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(led_project)

target_sources(app  PRIVATE src/main.c)

