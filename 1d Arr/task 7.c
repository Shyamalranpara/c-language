#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("The min value in the array is %d\n", min);
    return 0;
}