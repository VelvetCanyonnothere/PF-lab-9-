
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomPixelValues(int pixelGrid[8][8]);

void increaseBrightness(int pixelGrid[8][8]);

void displayGrid(int pixelGrid[8][8]);

int main() {
    int pixelGrid[8][8];
    srand(time(0));

    generateRandomPixelValues(pixelGrid);

    printf("Pixel Grid before increasing brightness:\n");
    displayGrid(pixelGrid);

    increaseBrightness(pixelGrid);
    printf("Pixel Grid after increasing brightness:\n");
    displayGrid(pixelGrid);

    return 0;
}

void generateRandomPixelValues(int pixelGrid[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            pixelGrid[i][j] = rand() % 256;
        }
    }
}

void increaseBrightness(int pixelGrid[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            pixelGrid[i][j] += 20;
            if (pixelGrid[i][j] > 255) {
                pixelGrid[i][j] = 255;
            }
        }
    }
}

void displayGrid(int pixelGrid[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d\t", pixelGrid[i][j]);
        }
        printf("\n");
    }
}

