#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100
#define MAX_TITLE 100
#define MAX_AUTHOR 100
#define MAX_ISBN 20
#define FILENAME "library_data.txt"

typedef struct {
    char title[MAX_TITLE];
    char author[MAX_AUTHOR];
    char isbn[MAX_ISBN];
} Book;

Book library[MAX_BOOKS];
int book_count = 0;

void save_library() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fprintf(file, "%d\n", book_count);
    for (int i = 0; i < book_count; i++) {
        fprintf(file, "%s\n%s\n%s\n", library[i].title, library[i].author, library[i].isbn);
    }
    fclose(file);
}

void load_library() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) {
        printf("No existing library data found. Starting with an empty library.\n");
        return;
    }
    fscanf(file, "%d\n", &book_count);
    for (int i = 0; i < book_count; i++) {
        fgets(library[i].title, MAX_TITLE, file);
        library[i].title[strcspn(library[i].title, "\n")] = '\0'; // Remove newline character
        fgets(library[i].author, MAX_AUTHOR, file);
        library[i].author[strcspn(library[i].author, "\n")] = '\0'; // Remove newline character
        fgets(library[i].isbn, MAX_ISBN, file);
        library[i].isbn[strcspn(library[i].isbn, "\n")] = '\0'; // Remove newline character
    }
    fclose(file);
}

void add_book() {
    if (book_count >= MAX_BOOKS) {
        printf("Library is full.\n");
        return;
    }
    printf("Enter book title: ");
    scanf(" %[^\n]", library[book_count].title);
    printf("Enter book author: ");
    scanf(" %[^\n]", library[book_count].author);
    printf("Enter book ISBN: ");
    scanf(" %[^\n]", library[book_count].isbn);
    book_count++;
    printf("Book added to the library.\n");
}

void remove_book() {
    char isbn[MAX_ISBN];
    printf("Enter book ISBN to remove: ");
    scanf(" %[^\n]", isbn);
    for (int i = 0; i < book_count; i++) {
        if (strcmp(library[i].isbn, isbn) == 0) {
            for (int j = i; j < book_count - 1; j++) {
                library[j] = library[j + 1];
            }
            book_count--;
            printf("Book removed from the library.\n");
            return;
        }
    }
    printf("Book not found.\n");
}

void search_by_title() {
    char title[MAX_TITLE];
    printf("Enter book title to search: ");
    scanf(" %[^\n]", title);
    for (int i = 0; i < book_count; i++) {
        if (strstr(library[i].title, title) != NULL) {
            printf("Title: %s, Author: %s, ISBN: %s\n", library[i].title, library[i].author, library[i].isbn);
        }
    }
}

void search_by_author() {
    char author[MAX_AUTHOR];
    printf("Enter book author to search: ");
    scanf(" %[^\n]", author);
    for (int i = 0; i < book_count; i++) {
        if (strstr(library[i].author, author) != NULL) {
            printf("Title: %s, Author: %s, ISBN: %s\n", library[i].title, library[i].author, library[i].isbn);
        }
    }
}

int main() {
    load_library();
    int choice;
    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Remove Book\n");
        printf("3. Search Book by Author\n");
        printf("4. Search Book by Title\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book();
                break;
            case 2:
                remove_book();
                break;
            case 3:
                search_by_author();
                break;
            case 4:
                search_by_title();
                break;
            case 5:
                save_library();
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}