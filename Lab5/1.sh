dd of=rand.bin if=/dev/urandom bs=1M count=128
for fs in ext4 ext3 ntfs;
do
    echo "___Fs is $fs";
    dd if=/dev/zero of=$fs.bin bs=1M count=512;
    mkfs -t $fs -F $fs.bin;
    mkdir -p m/$fs;
    mount $fs.bin m/$fs;
    cp rand.bin m/$fs;
    cd m/$fs;
    time echo rand.bin > /dev/null;
    time cp rand.bin testcp.bin;
    time rm rand.bin;
    cd ..
    unmount $fs;
    cd ..
    rm -rf $fs;
    rm -rf $fs.bin;
done
rm rand.bin
