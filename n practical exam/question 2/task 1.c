#include <stdio.h>

char determineGrade(float average);

int main() {
    float marks[5];
    float sum = 0.0;
    float average;
    char grade;


    printf("Enter marks for 5 subjects (out of 100 each):\n");
    for(int i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &marks[i]);
        
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark entered. Please enter a mark between 0 and 100.\n");
            return 1; 
        }
        
        sum += marks[i];
    }

    
    average = sum / 5;

    
    grade = determineGrade(average);

   
    printf("\nAverage Marks: %.2f\n", average);
    printf("Grade: %c\n", grade);

    return 0;
}

char determineGrade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}
