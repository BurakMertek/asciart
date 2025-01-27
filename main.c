#include <stdio.h>
#include <stdlib.h>

#define HEIGHT = 100
#define WIDTH = 100

const char *ASCII_CHARS = "@%#*+=-:. ";

void convert_to_ascii(const char *filename)
{
    FILE *file = fopen(filename,"r");
    if (!file){
        printf("Error opening file! \n");
        return;
    }

    char header[3];
    int width, height, maxVal;

    // Read PGM header (P2 format)
    fscanf(file, "%s", header);
    if (header[0] != 'P' || header[1] != '2') {
        printf("Invalid PGM format!\n");
        fclose(file);
        return;
    }
    fscanf(file, "%d %d %d", &width, &height, &maxVal);

    int pixel;
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            fscanf(file, "%d", &pixel);
            int ascii_index = (pixel * 9) / maxVal;  // Map brightness to ASCII
            printf("%c", ASCII_CHARS[ascii_index]);
        }
        printf("\n");
    }

    fclose(file);

}

int main(void)
{
    convert_to_ascii("ascii_image.pgm");
    return 0;
}