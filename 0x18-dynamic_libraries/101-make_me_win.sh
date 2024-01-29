#!/bin/bash
wget -p .. https://github.com/Persky08/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libtest.so
export LD_PRELOAD="$PWD/../libtest.so"
