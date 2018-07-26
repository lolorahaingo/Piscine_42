#!/bin/sh
ldapsearch -x -LLL "uid=z*" cn -W | grep cn | cut -c 5- | sort -fr
