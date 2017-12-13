#!/bin/bash
#g++ -g -std=c++11 `mysql_config --cflags --libs` DataAccess.cpp -o DataAccess
g++  -std=c++11 `mysql_config --cflags --libs`  -c DataAccess.h DataAccess.cpp
ar crv  libdb.a DataAccess.o
