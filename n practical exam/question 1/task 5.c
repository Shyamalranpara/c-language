#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

void inputBookDetails(struct Book *b);
void printBookDetails(const struct Book *b);

int main() {
    int n;

    
    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar();  

  
    struct Book books[n];

   
    for(int i = 0; i < n; i++) {
        printf("\nEnter details for book %d:\n", i + 1);
        inputBookDetails(&books[i]);
    }

    
    printf("\nBook details:\n");
    for(int i = 0; i < n; i++) {
        printf("\nDetails of book %d:\n", i + 1);
        printBookDetails(&books[i]);
    }

    return 0;
}

void inputBookDetails(struct Book *b) {
    printf("Title: ");
    fgets(b->title, sizeof(b->title), stdin);
    b->title[strcspn(b->title, "\n")] = '\0'; 

    printf("Author: ");
    fgets(b->author, sizeof(b->author), stdin);
    b->author[strcspn(b->author, "\n")] = '\0'; 

    printf("Price: ");
    scanf("%f", &b->price);
    getchar();  
}


void printBookDetails(const struct Book *b) {
    printf("Title: %s\n", b->title);
    printf("Author: %s\n", b->author);
    printf("Price: $%.2f\n", b->price);
}
