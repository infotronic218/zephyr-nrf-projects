# LittleFs does not work with the external memory on the esp32s3
# I had to disable the storage partition in the board dts to have it working


# improving the design guide 

# deleted some information in the flah memory to enable the user read

# The user guide is not completed 

# I need to handle the software development


# Adding the MCUmgr function for flash uplaod 

## related link
https://docs.nordicsemi.com/bundle/ncs-2.6.0/page/zephyr/services/device_mgmt/mcumgr.html


# MCUmgr adding a connection in the list 
```bash
mcumgr conn add acm0 type="serial" connstring="dev=/dev/ttyACM0,baud=115200,mtu=512"
```

* Opening the port with MCUmgr

```bash
mcumgr -c amc0
```


```bash
# create a file system for a directory named config 
littlefs-python create config --block-size=4096 --block-count=8
```




