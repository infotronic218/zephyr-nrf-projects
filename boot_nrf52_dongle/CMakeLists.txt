cmake_minimum_required(VERSION  3.20.0)

set(BOARD nrf52840dongle)

find_package(Zephyr)
project(nrf52_bootloader)

target_sources(app PRIVATE src/main.c)