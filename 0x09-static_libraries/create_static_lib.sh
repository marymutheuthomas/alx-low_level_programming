#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile each .c file into a corresponding .o file
for c_file in $c_files
do
    object_file="${c_file%.c}.o"
    gcc -Wall -Werror -Wextra -pedantic -c "$c_file" -o "$object_file"
done

# Create the static library liball.a from all the .o files
ar rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up: remove the temporary .o files
rm -f *.o

echo "Static library liball.a has been created."

