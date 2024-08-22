#include <stdio.h>

int countWords(const char *sentence) {
    int count = 0;
    int inWord = 0;

    while (*sentence) {
        if (isspace(*sentence) || ispunct(*sentence)) {
            inWord = 0;
        } else {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        }
        sentence++;
    }

    return count;
}

int main() {
    char sentence[1000]; 

    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int wordCount = countWords(sentence);

    printf("The number of words in the sentence is: %d\n", wordCount);

    return 0;
}
