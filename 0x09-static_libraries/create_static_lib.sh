#!/bin/bash

# Compiler settings
CC=gcc
CFLAGS="-c -Wall"

# Library name
LIB_NAME=all

# Build the object files
echo "Compiling source files..."
for SRC_FILE in *.c; do
  $CC $CFLAGS "$SRC_FILE" -o "${SRC_FILE%.c}.o"
done

# Create the static library
echo "Creating static library..."
ar rcs "lib${LIB_NAME}.a" *.o

echo "Library $LIB_NAME is ready."
