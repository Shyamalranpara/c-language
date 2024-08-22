#include <stdio.h>

#define MAX_LENGTH 1000 
int main() {
    FILE *file1, *file2;
    char sentence[MAX_LENGTH];

    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        perror("Error opening file1.txt");
        return 1;
    }

    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        perror("Error opening file2.txt");
        fclose(file1); 
        return 1; 
    }
   

    while (fgets(sentence, sizeof(sentence), file1) != NULL) {
        fprintf(file2, "%s", sentence);
    }

    fclose(file1);
    fclose(file2);

    printf("The content has been copied from file1.txt to file2.txt.\n");

    return 0;
}
