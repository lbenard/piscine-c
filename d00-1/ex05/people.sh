#!/bin/sh
ldapsearch -xLLL uid="z*" | grep "cn: " | cut -c 5- | sort -fr
