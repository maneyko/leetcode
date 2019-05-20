#!/bin/bash

# Read from the file words.txt and output the word frequency list to stdout.

cat words.txt \
  | tr ' ' '\n' \
  | sort \
  | sed '/^$/d' \
  | uniq -c \
  | sort -r \
  | sed 's/^[^0-9]*//g' \
  | awk '{print $2, $1}'
