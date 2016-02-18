#!/bin/bash

function maina()
{
    if [ ! -d $1 ]; then #checks if the folder doesnt exist and then creates it
        mkdir $1
    fi
    cd $1
}
maina gabi
# gabi is the folder given as a parameter
# any other folder can be used