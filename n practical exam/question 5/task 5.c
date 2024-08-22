#include <stdio.h>

struct House {
    int roomQuantity;
    int establishedYear;
    char city[100];
};

void inputHouses(struct House houses[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for house %d:\n", i + 1);

        printf("Number of rooms: ");
        scanf("%d", &houses[i].roomQuantity);

        printf("Established year: ");
        scanf("%d", &houses[i].establishedYear);

        getchar();

        printf("City: ");
        fgets(houses[i].city, sizeof(houses[i].city), stdin);
        
        size_t len = strlen(houses[i].city);
        if (len > 0 && houses[i].city[len - 1] == '\n') {
            houses[i].city[len - 1] = '\0';
        }
    }
}

void displayHouses(struct House houses[], int n) {
    printf("\nHouse Details:\n");
    for (int i = 0; i < n; i++) {
        printf("House %d:\n", i + 1);
        printf("Number of rooms: %d\n", houses[i].roomQuantity);
        printf("Established year: %d\n", houses[i].establishedYear);
        printf("City: %s\n", houses[i].city);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of houses: ");
    scanf("%d", &n);

    struct House houses[n];

    inputHouses(houses, n);

    displayHouses(houses, n);

    return 0;
}
