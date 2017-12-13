#!/bin/bash
g++ -std=c++11 `mysql_config --cflags --libs` DataAccess.cpp -o DataAccess
