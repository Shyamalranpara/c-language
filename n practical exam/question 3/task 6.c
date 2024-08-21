#include <stdio.h>

typedef struct {
    char name[100];
    char course[100];
} Student;

void inputStudentDetails(Student *student) {
    printf("Enter student's name: ");
    scanf(" %[^\n]%*c", student->name); 

    printf("Enter student's course: ");
    scanf(" %[^\n]%*c", student->course); 
}

void writeToFile(const Student students[], int count) {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "Student %d\n", i + 1);
        fprintf(file, "Name: %s\n", students[i].name);
        fprintf(file, "Course: %s\n\n", students[i].course);
    }

    fclose(file);
    printf("Data has been written to data.txt\n");
}

int main() {
    int numStudents = 3; 
    Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        inputStudentDetails(&students[i]);
    }

    writeToFile(students, numStudents);

    return 0;
}
