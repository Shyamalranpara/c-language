#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int array[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int smallest = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);

    return 0;
}
