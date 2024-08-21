#include <stdio.h>

struct Laptop {
    char company_name[100];
    char processor[100];
    float price;
};

int main() {
    int n;

    printf("Enter the number of laptops: ");
    scanf("%d", &n);
    getchar();  
    struct Laptop laptops[n]; 

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for laptop %d:\n", i + 1);
        inputLaptopDetails(&laptops[i]);
    }

    printf("\nLaptop details:\n");
    for (int i = 0; i < n; i++) {
        printLaptopDetails(&laptops[i], i + 1);
    }

    return 0;
}

void inputLaptopDetails(struct Laptop *laptop) {
    printf("Company Name: ");
    fgets(laptop->company_name, sizeof(laptop->company_name), stdin);
    laptop->company_name[strcspn(laptop->company_name, "\n")] = '\0'; 

    printf("Processor: ");
    fgets(laptop->processor, sizeof(laptop->processor), stdin);
    laptop->processor[strcspn(laptop->processor, "\n")] = '\0'; 

    printf("Price: ");
    scanf("%f", &laptop->price);
    getchar();  
}

void printLaptopDetails(const struct Laptop *laptop, int index) {
    printf("Laptop %d:\n", index);
    printf("Company Name: %s\n", laptop->company_name);
    printf("Processor: %s\n", laptop->processor);
    printf("Price: $%.2f\n\n", laptop->price);
}
