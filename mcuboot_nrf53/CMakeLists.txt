cmake_minimum_required(VERSION 3.20.0)

#set(BOARD nrf7002dk_nrf5340_cpuapp)
set(BOARD nrf7002dk/nrf5340/cpuapp)

#set(BOARD nucleo_h743zi)

find_package(Zephyr)

project(mcuboot)


target_sources(app PRIVATE src/main.c)