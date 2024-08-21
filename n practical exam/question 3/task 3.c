#include <stdio.h>

void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    char temp;

    while (str[end] != '\0') {
        end++;
    }
    end--; 
   
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
