#!/bin/bash

cat help-read.txt | while read lines
do
    echo $lines | wc -w
done