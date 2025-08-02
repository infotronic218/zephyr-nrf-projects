# First step on creating and using a flash binary

lfs --block_size=4096 --block_count=8 --block_cycles=100 --read_size=8 --prog_size=8 --cache_size=8 --lookahead_size=8 --format /dev/loop13

sudo dd if=/dev/loop13 of=FSImageOut.bin bs=4096 count=8 skip=0 | xxd -g1

# Mount the file system

mkdir mount
lfs --block_size=4096 --block_count=8 --block_cycles=100 --rea
d_size=8 --prog_size=8 --cache_size=8 --lookahead_size=8 /dev/loop13 mount


# Building and mounting a FileSystem Image 

1. Creating the file system image 

```bash 
dd if=/dev/zero bs=4096 count=8 | tr '\000' '\377' > FSImage
```

2. Using the losetup command to identify where to mount and format the FileSystem.

```bash
 sudo losetup -f
```

3. Give reading and writing access to the loopback device

```bash 
sudo chmod a+rw /dev/loop18
```

4. Assign the FileSystem image to /dev/loop18

```bash 
 sudo losetup /dev/loop18 FSImage
```

5. Format the loop device 

``` bash 
lfs --block_size=4096 --block_count=8 --block_cycles=512 --read_size=16 --prog_size=16 --cache_size=64 --lookahead_size=32 --format /dev/loop13
```

6. Export the FileSystem 

```bash
sudo dd if=/dev/loop18 of=FSImageOut.bin bs=4096 count=5 skip=0 | xxd -g1
```

7. Mount the FileSystem 


```bash 
mkdir mount 
```

```bash 
lfs --block_size=4096 --block_count=8 --block_cycles=512 --read_size=1+ --prog_size=16 --cache_size=64 --lookahead_size=32 /dev/loop6 mount
```


10. Export the file content to binary

```bash
sudo dd if=/dev/loop6 of=FSImageOut.bin bs=4096 count=8 skip=0 | xxd -g1

```
