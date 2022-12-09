#!/bin/sh

# Exit immediately if a command exits with a non-zero status
set -e

# the script must have one argument
if [ $# -ne 1 ]; then
    echo "Usage: $0 <day>"
    exit 1
fi

day=$(printf "day%02d" "$1") # %02d = performs decimal integer conversion 'd', formatted with zero padding '0', with width '2'

mkdir "$day"
cp template.cc "$day/$day.cc"
touch "$day/input.txt"