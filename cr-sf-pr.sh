#!/bin/bash

mkdir $1
cd $1

mkdir ./build         # for compiled files
mkdir ./src           # for cpp files
mkdir ./include       # for hpp files
mkdir ./resources     # for external files that will be used

cp ~/create-sfml-prj/app.cpp .
cp ~/create-sfml-prj/unity.cpp .
cp ~/create-sfml-prj/Makefile .

cd ..
