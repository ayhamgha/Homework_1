#!/usr/bin/env bash
echo "c++ -c -Iinclude/ src/sum.cpp -o build/sum.o"
echo "c++ -c -Iinclude/ src/subtract.cpp -o build/subtract.o"
echo "ar rcs build/libipb_arithmetic.a build/sum.o build/subtract.o"