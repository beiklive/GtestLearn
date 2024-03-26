#!/bin/bash
cmake -Bbuild
cmake --build build
cd build
./test_main
