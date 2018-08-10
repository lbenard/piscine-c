#!/bin/sh
ldapsearch -xLLL cn="z*" | grep "cn: " | cut -c 5- | sort -r
