# Configurring the FS SHELL with Zephyr RTOS 
* Enable flash
* Enable the SHELL
* Enable the File System
* Enable the File System Shell
```
CONFIG_LOG=y
CONFIG_SHELL=y
CONFIG_FLASH=y
CONFIG_FLASH_MAP=y
CONFIG_FILE_SYSTEM=y
CONFIG_FILE_SYSTEM_SHELL=y
CONFIG_FILE_SYSTEM_LITTLEFS=y

# Add 256 bytes to accommodate upload command (lfs_stat overflows)
CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE=2304

# Enable file system commands
# CONFIG_MCUMGR_GRP_FS=y
CONFIG_FLASH_PAGE_LAYOUT=y
CONFIG_FS_LOG_LEVEL_DBG=y
CONFIG_HEAP_MEM_POOL_SIZE=16384
CONFIG_SHELL_LOG_LEVEL_INF=y
CONFIG_SHELL_LOG_LEVEL_DBG=y

CONFIG_DEBUG=y
```
## Enable the the flash 
## Select the storage for little FS




## Use the mount point to access to mount the file system 
``` code
fs mount littlefs /lfs1
```

## Format the FILE System 
``` yaml
CONFIG_APP_WIPE_STORAGE=y
``