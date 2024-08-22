#include <stdio.h>

void countVowels(const char *str, int *vowelCounts) {
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    
    for (int i = 0; i < 5; i++) {
        vowelCounts[i] = 0;
    }

    while (*str) {
        char ch = tolower(*str); 
        for (int i = 0; i < 5; i++) {
            if (ch == vowels[i]) {
                vowelCounts[i]++;
                break;
            }
        }
        str++;
    }
}

int main() {
    char str[1000]; 
    int vowelCounts[5]; 

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    countVowels(str, vowelCounts);

    printf("Vowel counts:\n");
    printf("A: %d\n", vowelCounts[0]);
    printf("E: %d\n", vowelCounts[1]);
    printf("I: %d\n", vowelCounts[2]);
    printf("O: %d\n", vowelCounts[3]);
    printf("U: %d\n", vowelCounts[4]);

    return 0;
}
