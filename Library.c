#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int quantity;
};

void addBook(){
    scanf("%s",&.title);
}
void displayBooks(){
    
}
void searchBook();
void issueBook();
void returnBook();
void deleteBook();

int main() {
    int choice;
    
    while(1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search for a Book\n");
        printf("4. Issue a Book\n");
        printf("5. Return a Book\n");
        printf("6. Delete a Book\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                deleteBook();
                break;
            case 7:
                exit(0);
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }
    return 0;
}

void
