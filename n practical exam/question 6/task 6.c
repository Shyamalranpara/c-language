#include <stdio.h>
#include <string.h>

struct Mobile {
    char company_name[50];
    char color[20];
    char model[50];
    float price;
};

void inputMobiles(struct Mobile mobiles[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for mobile %d:\n", i + 1);

        printf("Company Name: ");
        scanf("%s", mobiles[i].company_name);

        printf("Color: ");
        scanf("%s", mobiles[i].color);

        printf("Model: ");
        scanf("%s", mobiles[i].model);

        printf("Price: ");
        scanf("%f", &mobiles[i].price);

        printf("\n");
    }
}

void displayMobiles(struct Mobile mobiles[], int n) {
    printf("Mobile Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Mobile %d:\n", i + 1);
        printf("Company Name: %s\n", mobiles[i].company_name);
        printf("Color: %s\n", mobiles[i].color);
        printf("Model: %s\n", mobiles[i].model);
        printf("Price: %.2f\n", mobiles[i].price);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of mobiles: ");
    scanf("%d", &n);

    struct Mobile mobiles[n];

    inputMobiles(mobiles, n);

    displayMobiles(mobiles, n);

    return 0;
}
