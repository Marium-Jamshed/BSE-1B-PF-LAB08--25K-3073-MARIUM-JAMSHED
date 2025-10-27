#include <stdio.h>
int main() {
    int temp[4][4] = {
        {12,15,10,9},
        {11,8,12,13},
        {14,13,9,7},
        {16,11,10,8}
    };
    int i, j;

    printf("Cold spots:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            int t = temp[i][j];
            int cold = 1;

            // Check all four directions (only if valid)
            if(i > 0 && t >= temp[i-1][j]) cold = 0;     // Up
            if(i < 3 && t >= temp[i+1][j]) cold = 0;     // Down
            if(j > 0 && t >= temp[i][j-1]) cold = 0;     // Left
            if(j < 3 && t >= temp[i][j+1]) cold = 0;     // Right

            if(cold)
                printf("Row %d, Col %d -> %d°C\n", i+1, j+1, t);
        }
    }

    return 0;
}

