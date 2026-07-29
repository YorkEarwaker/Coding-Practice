#!/bin/bash

# loop through file with lines of file addresses and make each file non executable
# so file is 100644  , with command chmod-x
# order of operations
# read the next line file address
# if the file exists then
# display the file executable permission a number and string wrx-
# change file to non executable show file executable permission num str

# while loops ignore white space and special characters in file names and paths where for loops do not
# apparently. find definitive source for this claim.

while IFS= -r file; do
  if [ -f "$file" ]; then
    stat -c "%a" "%A" "$file" # debug, comment out in prod, set log flag 
    chmod -x "$file"          # make file non executable for everyone
    stat -c "%a" "%A" "$file" # debug, comment out in prod, set log flag
  fi
done < file_list.txt


# $ stat -c "%a" rpi-pi/cpa/README.md
# 755
# $ chmod -x rpi-pi/cpa/README.md
# $ stat -c "%a" rpi-pi/cpa/README.md
# 644
