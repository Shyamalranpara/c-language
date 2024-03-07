#include <stdio.h>

int main() {
    int p, q, r;

    printf("Enter the two angles of triangle::\n");
    scanf("%d%d", &p, &q);

    r = 180 - (p + q);

    printf("\nThird angle of the triangle = %d", r);
    
}