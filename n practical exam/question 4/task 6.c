#include <stdio.h>

struct Movie {
    char title[100];
    char genre[50];
    char language[50];
};

void inputMovies(struct Movie movies[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter details for movie %d:\n", i + 1);

        printf("Title: ");
        fgets(movies[i].title, sizeof(movies[i].title), stdin);

        size_t len = strlen(movies[i].title);
        if (len > 0 && movies[i].title[len - 1] == '\n') {
            movies[i].title[len - 1] = '\0';
        }

        printf("Genre: ");
        fgets(movies[i].genre, sizeof(movies[i].genre), stdin);

        len = strlen(movies[i].genre);
        if (len > 0 && movies[i].genre[len - 1] == '\n') {
            movies[i].genre[len - 1] = '\0';
        }

        printf("Language: ");
        fgets(movies[i].language, sizeof(movies[i].language), stdin);

        len = strlen(movies[i].language);
        if (len > 0 && movies[i].language[len - 1] == '\n') {
            movies[i].language[len - 1] = '\0';
        }
    }
}

void displayMovies(struct Movie movies[], int n) {
    printf("\nMovie Details:\n");
    for (int i = 0; i < n; i++) {
        printf("Movie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the number of movies: ");
    scanf("%d", &n);

    struct Movie movies[n];

    inputMovies(movies, n);

    displayMovies(movies, n);

    return 0;
}
