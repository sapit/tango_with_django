#!/bin/bash

maina()
{
    for par in $@
    do
    	if [ -d $par ]; then
    		echo "$par is a directory"
    	fi
    
    	if [ -f $par ]; then
    		echo "$par is a regular file"
    	fi
    
    	if [ ! -e $par ]; then
    		echo "$par does not exist"
    	fi
    done
}
maina *