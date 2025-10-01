# C File Compressor 🔧

A simple command-line file compressor in C using Run-Length Encoding (RLE).  
It compresses consecutive repeated characters into counts.

## Features
- Compresses text files using RLE
- Handles any text file
- Outputs compressed file

## How to Run
1. Compile the program:
gcc file_compressor.c -o compressor
2. Run the program:
./compressor
3. Enter input file name and output file name when prompted.

## Example
Input file content: aaaabbcc  
Compressed file content: a4b2c2
