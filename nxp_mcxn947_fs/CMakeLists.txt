cmake_minimum_required(VERSION 3.2.0)

set(BOARD   frdm_mcxn947/mcxn947/cpu0)
#set(EXTRA_CONF_FILE mcumgr.conf)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(nrf7002dk-files-system)


target_sources(app PRIVATE src/main.c)