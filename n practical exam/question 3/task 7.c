#include <stdio.h>

int main() {
    int i, j;
    int rows = 5; 

    for (i = 1; i <= rows; i++) {
        int value = i * i; 
        
        for (j = 1; j <= i; j++) {
            printf("%d ", value);
        }
        
        printf("\n");
    }
    return 0;
}
