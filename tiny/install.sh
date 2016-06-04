#!/bin/sh

MODULE=tiny

cd /
rm -rf /tmp/tiny >/dev/null 2>&1

cp -f /tmp/$MODULE/tinyproxy /koolshare/bin/
cp -f /tmp/$MODULE/tiny.sh /koolshare/scripts/
cp -f /tmp/$MODULE/tinyproxy.conf /koolshare/configs/

cd /koolshare/init.d/
rm -f ./S90tiny.sh
ln -sf /koolshare/scripts/tiny.sh ./S90tiny.sh 
cd /

rm -f /tmp/tiny* >/dev/null 2>&1
rm -rf /tmp/tiny >/dev/null 2>&1

chmod 755 /koolshare/bin/tinyproxy
chmod 755 /koolshare/scripts/tiny.sh

