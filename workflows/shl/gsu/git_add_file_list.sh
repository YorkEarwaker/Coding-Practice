#!/bin/bash

# loop through file with lines of file addresses and add to git staged

while IFS= read -r file; do
  if [ -f "$file" ]; then
    git add "$file"
  fi
done < file_list.txt
