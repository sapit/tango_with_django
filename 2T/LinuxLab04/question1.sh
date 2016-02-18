#!/bin/bash
for f in *
do
if [ ! -s $f ]; then
    echo "Do you want to delete $f? y/n"
    read ans
    if [ $ans == 'y' ]; then
        rm $f
    fi
fi
done
