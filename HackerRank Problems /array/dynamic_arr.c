#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
   int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    // Allocate memory for the number of books in each shelf
    total_number_of_books = (int*)calloc(total_number_of_shelves, sizeof(int));
    if (total_number_of_books == NULL) {
        fprintf(stderr, "Memory allocation failed for total_number_of_books\n");
        return 1;
    }
    
    // Allocate memory for the array of book page pointers
    total_number_of_pages = (int**)malloc(total_number_of_shelves * sizeof(int*));
    if (total_number_of_pages == NULL) {
        fprintf(stderr, "Memory allocation failed for total_number_of_pages\n");
        free(total_number_of_books);
        return 1;
    }

    // Initialize each shelf with a `NULL` pointer (no books initially)
    for (int i = 0; i < total_number_of_shelves; i++) {
        total_number_of_pages[i] = NULL;
    }

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            // Add a book to a shelf
            int x, y;
            scanf("%d %d", &x, &y);

            // Reallocate memory to store one more book
            int booksInShelf = total_number_of_books[x];
            int* new_allocation = (int*)realloc(total_number_of_pages[x], sizeof(int) * (booksInShelf + 1));
            if (new_allocation == NULL) {
                fprintf(stderr, "Memory allocation failed for shelf %d\n", x);
                continue;
            }

            total_number_of_pages[x] = new_allocation;
            total_number_of_pages[x][booksInShelf] = y;
            total_number_of_books[x] += 1;
            
        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

    if (total_number_of_books) {
        free(total_number_of_books);
    }
    
    for (int i = 0; i < total_number_of_shelves; i++) {
        if (*(total_number_of_pages + i)) {
            free(*(total_number_of_pages + i));
        }
    }
    
    if (total_number_of_pages) {
        free(total_number_of_pages);
    }
    
    return 0;
}
