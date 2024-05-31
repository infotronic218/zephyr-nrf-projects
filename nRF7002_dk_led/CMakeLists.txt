cmake_minimum_required(VERSION 3.20.0)

set(BOARD nrf7002dk_nrf5340_cpuapp_ns)

project(led_project)

find_package(Zephyr)

target_sources(app  PRIVATE src/main.c)

