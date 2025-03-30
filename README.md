# asciart
Requirements

GCC Compiler (or any C compiler)

ImageMagick (for image conversion)

Netpbm tools (to ensure the correct PGM format)

Install dependencies on Ubuntu:

sudo apt install build-essential imagemagick netpbm

How to Use

Step 1: Clone this repository

git clone <repository-url>
cd <repository-directory>

Step 2: Convert your image to PGM format

Convert your image (jpg, png, etc.) into a plain ASCII PGM format (P2):

convert your_image.jpg -resize 100x100 -colorspace Gray image.pgm
pnmtoplainpnm image.pgm > ascii_image.pgm

Step 3: Compile the code

Compile the C program:

gcc ascii_art.c -o ascii_art

Step 4: Run the ASCII Art generator

Run the program by providing your converted PGM file:

./ascii_art ascii_image.pgm

Your ASCII art will be printed directly to the terminal.

File Structure

ascii_art.c: C source code for generating ASCII art from PGM files.

.gitignore: Git configuration file to exclude unnecessary files.

Example Usage

./ascii_art ascii_image.pgm

Contributing

Feel free to fork this repository, improve the code, and submit pull requests!

License

MIT License - Feel free to use and modify this project
