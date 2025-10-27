#include <stdio.h>
int main() {
    int img[4][4] = {
        {1,0,1,0},
        {0,1,0,1},
        {1,1,0,0},
        {0,0,1,1}
    };
    int inverted[4][4];
    int i, j, white = 0;

    printf("Original\tInverted\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(img[i][j] == 1)
                white++; // Count white pixels
            inverted[i][j] = 1 - img[i][j]; // Invert
            printf("%d ", img[i][j]);
        }
        printf("\t");
        for(j = 0; j < 4; j++) {
            printf("%d ", inverted[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal white pixels: %d\n", white);
    return 0;
}

