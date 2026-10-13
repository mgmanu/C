// #include <stdio.h>
// #include <stdlib.h>

// typedef struct
// {
//     char name[20];
//     int year;
// } Publisher;

// typedef struct
// {
//     int id;
//     char title[30];
//     float price;
//     Publisher pub;
// } Book;


// /* Function to print details of all books */
// void printAllBooks(Book *books, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nBook %d Details:\n", i + 1);

//         printf("ID: %d\n", books[i].id);
//         printf("Title: %s\n", books[i].title);
//         printf("Price: %.2f\n", books[i].price);
//         printf("Publisher Name: %s\n", books[i].pub.name);
//         printf("Publisher Year: %d\n", books[i].pub.year);
//     }
// }


// /* Function to find the book with maximum price */
// Book *findMaxBook(Book *books, int n)
// {
//     Book *maxBook = &books[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (books[i].price > maxBook->price)
//         {
//             maxBook = &books[i];
//         }
//     }

//     return maxBook;
// }


// /* Function to find the book with minimum price */
// Book *findMinBook(Book *books, int n)
// {
//     Book *minBook = &books[0];

//     for (int i = 1; i < n; i++)
//     {
//         if (books[i].price < minBook->price)
//         {
//             minBook = &books[i];
//         }
//     }

//     return minBook;
// }


// int main()
// {
//     int n, i;

//     printf("Enter number of books: ");
//     scanf("%d", &n);

//     /* Dynamically allocate memory */
//     Book *books = (Book *)malloc(n * sizeof(Book));

//     if (books == NULL)
//     {
//         printf("Memory allocation failed.\n");
//         return 1;
//     }


//     /* Read details of each book */
//     for (i = 0; i < n; i++)
//     {
//         printf("\nEnter details for book %d:\n", i + 1);

//         printf("Enter ID: ");
//         scanf("%d", &books[i].id);

//         printf("Enter title: ");
//         scanf(" %[^\n]", books[i].title);

//         printf("Enter price: ");
//         scanf("%f", &books[i].price);

//         printf("Enter publisher name: ");
//         scanf(" %[^\n]", books[i].pub.name);

//         printf("Enter publisher year: ");
//         scanf("%d", &books[i].pub.year);
//     }


//     /* Print all books */
//     printf("\n========== ALL BOOKS ==========\n");

//     printAllBooks(books, n);


//     /* Find maximum priced book */
//     Book *maxBook = findMaxBook(books, n);

//     printf("\n========== HIGHEST PRICED BOOK ==========\n");

//     printf("ID: %d\n", maxBook->id);
//     printf("Title: %s\n", maxBook->title);
//     printf("Price: %.2f\n", maxBook->price);
//     printf("Publisher Name: %s\n", maxBook->pub.name);
//     printf("Publisher Year: %d\n", maxBook->pub.year);


//     /* Find minimum priced book */
//     Book *minBook = findMinBook(books, n);

//     printf("\n========== LOWEST PRICED BOOK ==========\n");

//     printf("ID: %d\n", minBook->id);
//     printf("Title: %s\n", minBook->title);
//     printf("Price: %.2f\n", minBook->price);
//     printf("Publisher Name: %s\n", minBook->pub.name);
//     printf("Publisher Year: %d\n", minBook->pub.year);


//     /* Free dynamically allocated memory */
//     free(books);

//     printf("\nMemory successfully released using free().\n");

//     return 0;
// }













#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char contact[15];
} Supplier;

typedef struct {
    int id;
    char name[30];
    int quantity;
    float price;
    Supplier supplier;
} Product;

Product *allocateProducts(int n);
void readProducts(Product *products, int n);
void printAllProducts(Product *products, int n);
float computeTotalInventoryValue(Product *products, int n);
Product *findProductByID(Product *products, int n, int id);
void printProduct(Product *p);
void freeProducts(Product *products);

int main()
{
    int n;

    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid number of products.\n");
        return 1;
    }

    Product *products = allocateProducts(n);

    if (products == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    readProducts(products, n);

    printAllProducts(products, n);

    float totalValue = computeTotalInventoryValue(products, n);
    printf("Total inventory value: %.2f\n", totalValue);

    int searchId;

    if (scanf("%d", &searchId) != 1)
    {
        printf("Invalid ID value.\n");
        freeProducts(products);
        return 1;
    }

    Product *found = findProductByID(products, n, searchId);

    if (found != NULL)
    {
        printf("Product found.\n");
        printProduct(found);
    }
    else
    {
        printf("Product with ID %d not found.\n", searchId);
    }

    freeProducts(products);

    return 0;
}

Product *allocateProducts(int n)
{
    Product *products = (Product *)malloc(n * sizeof(Product));
    return products;
}

void readProducts(Product *products, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &products[i].id) != 1)
            return;

        if (scanf("%29s", products[i].name) != 1)
            return;

        if (scanf("%d", &products[i].quantity) != 1)
            return;

        if (scanf("%f", &products[i].price) != 1)
            return;

        if (scanf("%19s", products[i].supplier.name) != 1)
            return;

        if (scanf("%14s", products[i].supplier.contact) != 1)
            return;
    }
}

void printProduct(Product *p)
{
    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);
    printf("Quantity: %d\n", p->quantity);
    printf("Price: %.2f\n", p->price);
    printf("Supplier Name: %s\n", p->supplier.name);
    printf("Supplier Contact: %s\n", p->supplier.contact);
    printf("Product Value: %.2f\n", p->quantity * p->price);
}

void printAllProducts(Product *products, int n)
{
    for (int i = 0; i < n; i++)
    {
        printProduct(&products[i]);
    }
}

float computeTotalInventoryValue(Product *products, int n)
{
    float total = 0.0f;

    for (int i = 0; i < n; i++)
    {
        total += products[i].quantity * products[i].price;
    }

    return total;
}

Product *findProductByID(Product *products, int n, int id)
{
    for (int i = 0; i < n; i++)
    {
        if (products[i].id == id)
            return &products[i];
    }

    return NULL;
}

void freeProducts(Product *products)
{
    free(products);
}