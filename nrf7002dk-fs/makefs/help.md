# Format the file system 
``` bash
lfs --block_size=4096 --block_count=8 --block_cycles=512 --read_size=16 --prog_size=16 --cache_size=64 --lookahead_size=32 --format /dev/loop13

```
# Export the fielesystem to binary
```bash
sudo dd if=/dev/loop13 of=FSImageOut.bin bs=4096 count=8 skip=0 | xxd -g1
```
# Mount the file system 
```bash
lfs --block_size=4096 --block_count=8 --block_cycles=512 --read_size=16 --prog_size=16 --cache_size=64 --lookahead_size=32 /dev/loop13 mount
```
# After this command we can use the __mount__ folder as any linux file system

# Save the content of the filesystem
```bash
sudo dd if=/dev/loop13 of=FSImageOut.bin bs=4096 count=8 skip=0 | xxd -g1
```
# Looking at this for sd card file system mounting 
https://github.com/noahbei/littlefs/tree/master
