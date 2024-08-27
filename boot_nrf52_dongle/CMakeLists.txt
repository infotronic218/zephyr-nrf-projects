cmake_minimum_required(VERSION  3.20.0)

set(BOARD nrf52840dongle)
#set(BOARD nrf52840dongle_nrf52840)
#set(BOARD nrf7002dk_nrf5340_cpuapp)

find_package(Zephyr)
project(nrf52_bootloader)

target_sources(app PRIVATE src/main.c)

