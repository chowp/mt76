cd mt76-2016-03-04 && git pull
cd ..
rm mt76*.tar.xz
XZ_OPT=-9 tar -cJf mt76-2016-03-04-7059cc27df894a4b845b6deb7c51425ffb4b7c5c.tar.xz mt76-2016-03-04
cd ..
make package/mt76/{clean,compile} V=99
scp  bin/ramips/packages/kernel/kmod-mt76_4.4.7+2016-03-04-1_ramips_1004kc.ipk peich14@peidan.me:~/mt76.ipk
