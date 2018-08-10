#!/bin/sh
grep -i "Nicolas\tBauer" contacts_hard.txt | cut -f4 -d$'\t'
