#include <stdio.h>
int main() {
    int marks[3][4] = {
        {85, 92, 78, 90},
        {88, 76, 95, 84},
        {90, 85, 88, 92}
    };
    
    int i, j;
    float avg;

    for(i = 0; i < 3; i++) {
        int sum = 0;
        for(j = 0; j < 4; j++) {
            sum += marks[i][j]; // Add marks
        }
        avg = sum / 4.0; // Find average
        printf("Average of Class %d = %.2f\n", i + 1, avg);
    }

    return 0;
}

