#!/bin/bash

#input $1 or just enter
#	if i'm declar $1
#
#		make $1
#	else 
#
#		make the pruvese file 


read -p " select file.c " file 
read -p "nameit"name
clang -o $name $file


#make $1
#./$1
