#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100
#define MAX_ROLE_LENGTH 50

struct Employee {
    char name[MAX_NAME_LENGTH];
    char role[MAX_ROLE_LENGTH];
};

int main() {
    struct Employee employees[3]; 

   
    for (int i = 0; i < 3; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        inputEmployeeDetails(&employees[i]);
    }

  
    writeEmployeesToFile(employees, 3);

    printf("Employee details have been written to data.txt\n");

    return 0;
}


void inputEmployeeDetails(struct Employee *emp) {
    printf("Name: ");
    fgets(emp->name, MAX_NAME_LENGTH, stdin);
    emp->name[strcspn(emp->name, "\n")] = '\0'; 

    printf("Role (Designation): ");
    fgets(emp->role, MAX_ROLE_LENGTH, stdin);
    emp->role[strcspn(emp->role, "\n")] = '\0'; 
}

void writeEmployeesToFile(const struct Employee employees[], int count) {
    FILE *file = fopen("data.txt", "w");
    if (file == fopen) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "Employee %d:\n", i + 1);
        fprintf(file, "Name: %s\n", employees[i].name);
        fprintf(file, "Role (Designation): %s\n\n", employees[i].role);
    }

    fclose(file);
}
