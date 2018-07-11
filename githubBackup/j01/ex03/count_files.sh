#!/bin/sh
find . -type f -print -o -type d -print | wc -l | bc
