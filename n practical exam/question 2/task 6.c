#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 100
#define MAX_color_LENGTH 50

struct Employee {
    char name[MAX_NAME_LENGTH];
    char color[MAX_color_LENGTH];
};

int main() {
    struct fruits fruits[2]; 

   
    for (int i = 0; i < 3; i++) {
        printf("Enter details for fruits %d:\n", i + 1);
        inputfruitsDetails(&fruits[i]);
    }

  
    writefruitsToFile(fruits, 3);

    printf("frt details have been written to data.txt\n");

    return 0;
}


void inputEmployeeDetails(struct fruits *frt) {
    printf("Name: ");
    fgets(frt->name, MAX_NAME_LENGTH, stdin);
    frt->name[strcspn(frt->name, "\n")] = '\0'; 

    printf("Role (Designation): ");
    fgets(frt->color, MAX_color_LENGTH, stdin);
    frt->color[strcspn(frt->color, "\n")] = '\0'; 
}

void writefruitToFile(const struct fruit fruit[], int count) {
    FILE *file = fopen("data.txt", "w");
    if (file == fopen) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "fruit %d:\n", i + 1);
        fprintf(file, "Name: %s\n", fruits[i].name);
        fprintf(file, "Role (Designation): %s\n\n", fruits[i].color);
    }

    fclose(file);
}
