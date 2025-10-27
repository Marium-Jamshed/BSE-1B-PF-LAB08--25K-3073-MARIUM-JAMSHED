#include <stdio.h>
int main() {
    int i, j, k;

    // Stars pyramid
    for(i = 1; i <= 5; i++) {
        for(k = 1; k <= 5 - i; k++)
            printf(" "); // spaces before stars
        for(j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    printf("\n");

    // Numbers pyramid
    for(i = 1; i <= 5; i++) {
        for(k = 1; k <= 5 - i; k++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("%d", j);
        printf("\n");
    }

    printf("\n");

    // Alphabets pyramid
    for(i = 1; i <= 5; i++) {
        for(k = 1; k <= 5 - i; k++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("%c", 'A' + j - 1);
        printf("\n");
    }

    return 0;
}

