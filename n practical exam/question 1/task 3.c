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

    reverseArray(arr, n);
    printf("Reversed array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    int totalSum = sumArray(arr, n);
    printf("The sum of the elements in the array is: %d\n", totalSum);

    return 0;
}

void reverseArray(int arr[], int size) {
    int on = 0;
    int off = size - 1;
    while (on < off) {
        int temp = arr[on];
        arr[on] = arr[off];
        arr[off] = temp;
        on++;
        off--;
    }
}

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
