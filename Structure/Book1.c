#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

struct book {
    int bno;
    char name[100];
    char author[100];
    int price;
};

int main() {
    int a;
    char buf[100];
    printf("Enter the number of books (1-1000): ");
    while (scanf("%d", &a) != 1 || a < 1 || a > 1000) {
        printf("Invalid. Enter 1-1000: ");
        while (getchar() != '\n');
    }
    getchar();

    struct book *books = malloc(a * sizeof(struct book));
    if (!books) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < a; i++) {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Enter book Number: ");
        while (scanf("%d", &books[i].bno) != 1 || books[i].bno < 1) {
            printf("Invalid. Enter positive integer: ");
            while (getchar() != '\n');
        }
        getchar();

        printf("Enter the Name of book: ");
        fgets(books[i].name, sizeof(books[i].name), stdin);
        books[i].name[strcspn(books[i].name, "\n")] = 0;
        if (!*books[i].name) {
            printf("Cannot be empty. Try again: ");
            fgets(books[i].name, sizeof(books[i].name), stdin);
            books[i].name[strcspn(books[i].name, "\n")] = 0;
        }

        printf("Enter name of author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;
        if (!*books[i].author) {
            printf("Cannot be empty. Try again: ");
            fgets(books[i].author, sizeof(books[i].author), stdin);
            books[i].author[strcspn(books[i].author, "\n")] = 0;
        }

        printf("Enter the price: ");
        while (scanf("%d", &books[i].price) != 1 || books[i].price < 0) {
            printf("Invalid. Enter non-negative integer: ");
            while (getchar() != '\n');
        }
        getchar();
    }

    printf("\nBook Details:\n");
    for (int i = 0; i < a; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Book Number: %d\n", books[i].bno);
        printf("Name of book: %s\n", books[i].name);
        printf("Name of author: %s\n", books[i].author);
        printf("Price of book: %d\n", books[i].price);
    }

    free(books);
    return 0;
}
