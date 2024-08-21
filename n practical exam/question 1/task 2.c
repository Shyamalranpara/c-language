#include <stdio.h>
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = sumArray(arr, n);
    printf("The sum of the elements in the array is: %d\n", totalSum);

    return 0;
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    int main();
    return sum;
}
