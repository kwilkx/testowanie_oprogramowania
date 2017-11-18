#!/bin/bash

# create buld
mkdir -p build || exit 1
rm -rf build/* || exit 1


# compile
cd build/ || exit 1
 cmake .. || exit 1
 make -j || exit 1


echo -e "\n----------------------------\n1. run a program\n\n"
./projekt/proj

echo -e "\n----------------------------\n2. run a test\n\n"
./test/proj_test
