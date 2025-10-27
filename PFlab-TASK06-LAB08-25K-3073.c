#include <stdio.h>
int main() {
    int i, j;

    // Stars pattern
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    printf("\n"); // Separate columns visually

    // Numbers pattern
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }

    printf("\n");

    // Alphabets pattern
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("%c ", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}

