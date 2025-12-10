#include <stdio.h>
#include <stdio.h>
#include <string.h>

#define MAX 100  

struct Book {
    char title[50];
    char author[50];
    int year;
};


void addBook(struct Book books[], int *count);
void displayBooks(struct Book books[], int count);
void searchBook(struct Book books[], int count);

int main() {
    struct Book books[MAX];
    int count = 0;
    int choice;

    while (1) {
        printf("\n===== BOOK MANAGEMENT SYSTEM =====\n");
        printf("1. Add New Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;

            case 2:
                displayBooks(books, count);
                break;

            case 3:
                searchBook(books, count);
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}


void addBook(struct Book books[], int *count) {
    if (*count >= MAX) {
        printf("Book list is full!\n");
        return;
    }

    printf("Enter Book Title: ");
    fgets(books[*count].title, 50, stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0';

    printf("Enter Author Name: ");
    fgets(books[*count].author, 50, stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';

    printf("Enter Year of Publication: ");
    scanf("%d", &books[*count].year);
    getchar(); 

    (*count)++;
    printf("Book added successfully!\n");
}

void displayBooks(struct Book books[], int count) {
    if (count == 0) {
        printf("No books to display.\n");
        return;
    }

    printf("\n----- List of Books -----\n");
    for (int i = 0; i < count; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year  : %d\n", books[i].year);
    }
}


void searchBook(struct Book books[], int count) {
    char searchTitle[50];
    int found = 0;

    printf("Enter the title to search: ");
    fgets(searchTitle, 50, stdin);
    searchTitle[strcspn(searchTitle, "\n")] = '\0';

    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, searchTitle) == 0) {
            printf("\nBook Found:\n");
            printf("Title : %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year  : %d\n", books[i].year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found!\n");
    }
}
