#include <stdio.h>

int main() {
    int i, j, k;
    int start = 10; 

    for (i = 0; i < 5; i++) {
        for (j = 0; j < i; j++) {
            printf("  ");
        }

        for (k = start - i; k >= 6; k--) {
            printf("%d ", k);
        }

        printf(" \n");
    }

    return 0;
}
