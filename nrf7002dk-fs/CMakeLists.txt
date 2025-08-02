cmake_minimum_required(VERSION 3.2.0)

set(BOARD   nrf7002dk/nrf5340/cpuapp)
#set(EXTRA_CONF_FILE mcumgr.conf)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(nrf7002dk-files-system)


target_sources(app PRIVATE src/main.c)