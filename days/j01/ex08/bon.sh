#!/bin/sh
ldapsearch -Q -LLL "sn=*bon*" | grep "^cn:" | wc -l | bc
