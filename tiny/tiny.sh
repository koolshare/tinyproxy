#!/bin/sh

source /koolshare/scripts/base.sh

start_http(){
	sleep 1
	tinyproxy -c /koolshare/configs/tinyproxy.conf
}

case $ACTION in
start)
    start_http
    ;;
stop | kill )
    killall tinyproxy
    ;;
restart)
    killall tinyproxy
    sleep 1
    start_http
    ;;
*)
    echo "Usage: $0 (start|stop|restart)"
    exit 1
    ;;
esac
