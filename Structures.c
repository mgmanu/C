// #include <stdio.h>
// struct stud {
//     int rollno;
//     char name[100];
//     float marks;
// };
// int main() {
//     int n,i;
//     struct stud s[100];
//     printf("Enter number of students: ");
//     scanf("%d",&n);
//     for(i=0;i<n;i++) {
//         printf("Enter details of student %d:\n", i+1);
//         printf("Enter Roll Number: ");
//         scanf("%d",&s[i].rollno);
//         printf("Enter Name: ");
//         scanf("%s",s[i].name);
//         printf("Enter Marks: ");
//         scanf("%f",&s[i].marks);
//     }
//     printf("Printing all Student Details\n");
//     for(i=0;i<n;i++) {
//         printf("Details of student %d\n ", i+1);
//         printf("Roll Number : %d\n",s[i].rollno);
//         printf("Name : %s\n",s[i].name);
//         printf("Marks : %.2f\n",s[i].marks);
//     }
// }







#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[20];
    int year;
} Publisher;

typedef struct
{
    int id;
    char title[30];
    float price;
    Publisher pub;
} Book;


/* Function to print details of all books */
void printAllBooks(Book *books, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nBook %d Details:\n", i + 1);

        printf("ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Price: %.2f\n", books[i].price);
        printf("Publisher Name: %s\n", books[i].pub.name);
        printf("Publisher Year: %d\n", books[i].pub.year);
    }
}


/* Function to find the book with maximum price */
Book *findMaxBook(Book *books, int n)
{
    Book *maxBook = &books[0];

    for (int i = 1; i < n; i++)
    {
        if (books[i].price > maxBook->price)
        {
            maxBook = &books[i];
        }
    }

    return maxBook;
}


/* Function to find the book with minimum price */
Book *findMinBook(Book *books, int n)
{
    Book *minBook = &books[0];

    for (int i = 1; i < n; i++)
    {
        if (books[i].price < minBook->price)
        {
            minBook = &books[i];
        }
    }

    return minBook;
}


int main()
{
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    /* Dynamically allocate memory */
    Book *books = (Book *)malloc(n * sizeof(Book));

    if (books == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }


    /* Read details of each book */
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details for book %d:\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &books[i].id);

        printf("Enter title: ");
        scanf(" %[^\n]", books[i].title);

        printf("Enter price: ");
        scanf("%f", &books[i].price);

        printf("Enter publisher name: ");
        scanf(" %[^\n]", books[i].pub.name);

        printf("Enter publisher year: ");
        scanf("%d", &books[i].pub.year);
    }


    /* Print all books */
    printf("\n========== ALL BOOKS ==========\n");

    printAllBooks(books, n);


    /* Find maximum priced book */
    Book *maxBook = findMaxBook(books, n);

    printf("\n========== HIGHEST PRICED BOOK ==========\n");

    printf("ID: %d\n", maxBook->id);
    printf("Title: %s\n", maxBook->title);
    printf("Price: %.2f\n", maxBook->price);
    printf("Publisher Name: %s\n", maxBook->pub.name);
    printf("Publisher Year: %d\n", maxBook->pub.year);


    /* Find minimum priced book */
    Book *minBook = findMinBook(books, n);

    printf("\n========== LOWEST PRICED BOOK ==========\n");

    printf("ID: %d\n", minBook->id);
    printf("Title: %s\n", minBook->title);
    printf("Price: %.2f\n", minBook->price);
    printf("Publisher Name: %s\n", minBook->pub.name);
    printf("Publisher Year: %d\n", minBook->pub.year);


    /* Free dynamically allocated memory */
    free(books);

    printf("\nMemory successfully released using free().\n");

    return 0;
}




