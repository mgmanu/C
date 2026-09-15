// #include <stdio.h>

// #define MAX 50

// /* Function Declarations */
// void readString(char str[]);
// void removeNewline(char str[]);
// int getLength(char str[]);
// int findPattern(char str[], char pat[], int start);
// int replacePattern(char str[], char pat[], char rep[], char result[]);
// void displayResult(int flag, char result[]);

// int main() {

//     char str[MAX], pat[MAX], rep[MAX], result[MAX];
//     int flag;

//     printf("Enter the string: ");
//     readString(str);
//     removeNewline(str);

//     printf("Enter the pattern: ");
//     readString(pat);
//     removeNewline(pat);

//     printf("Enter the replacement: ");
//     readString(rep);
//     removeNewline(rep);

//     flag = replacePattern(str, pat, rep, result);

//     displayResult(flag, result);

//     return 0;
// }

// /* Function to read string */
// void readString(char str[]) {
//     fgets(str, MAX, stdin);
// }

// /* Function to remove newline character */
// void removeNewline(char str[]) {

//     int i = 0;

//     while (str[i] != '\0') {

//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }

//         i++;
//     }
// }

// /* Function to find string length */
// int getLength(char str[]) {

//     int i = 0;

//     while (str[i] != '\0') {
//         i++;
//     }

//     return i;
// }

// /* Function to check pattern match */
// int findPattern(char str[], char pat[], int start) {

//     int i = 0;

//     while (pat[i] != '\0') {

//         if (str[start + i] != pat[i]) {
//             return 0;
//         }

//         i++;
//     }

//     return 1;
// }

// /* Function to replace pattern */
// int replacePattern(char str[], char pat[], char rep[], char result[]) {

//     int i = 0, j = 0, k;
//     int found = 0;

//     int patLen = getLength(pat);

//     while (str[i] != '\0') {

//         if (findPattern(str, pat, i)) {

            
//             found = 1;
//             k = 0;

//             while (rep[k] != '\0') {

//                 result[j] = rep[k];

//                 j++;
//                 k++;
//             }

//             i = i + patLen;
//         }

//         else {

//             result[j] = str[i];

//             j++;
//             i++;
//         }
//     }

//     result[j] = '\0';

//     return found;
// }

// /* Function to display result */
// void displayResult(int flag, char result[]) {

//     if (flag == 0)
//         printf("Pattern does not exist");

//     else {

//         printf("The main string after replacement is:\n");
//         printf("%s", result);
//     }
// }















// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct
// {
//     char name[100];
//     char language[50];
//     int year;
//     float rating;
// } Movie;

// int countMovies(char filename[]);
// Movie* allocateMemory(int count);
// void readMovies(char filename[], Movie *movies, int count);
// void displayMoviesFromFile(char filename[], int n);
// void sortMovies(Movie *movies, int count);
// void writeMovies(char filename[], Movie *movies, int count);
// void freeMemory(Movie **movies);

// int main()
// {
//     char inputFile[] = "IMDb_400_Movies1.csv";
//     char outputFile[] = "sorted_movies.csv";

//     int count, n;

//     count = countMovies(inputFile);

//     if(count == 0)
//     {
//         return 0;
//     }

//     Movie *movies = allocateMemory(count);

//     readMovies(inputFile, movies, count);

//     printf("Enter how many movie records to display: ");
//     scanf("%d", &n);

//     if(n > count)
//     {
//         n = count;
//     }

//     printf("\nBefore Sorting:\n\n");

//     displayMoviesFromFile(inputFile, n);

//     sortMovies(movies, count);

//     writeMovies(outputFile, movies, count);

//     printf("\nAfter Sorting:\n\n");

//     displayMoviesFromFile(outputFile, n);

//     printf("\nSorted movie data stored successfully in sorted_movies.csv\n");

//     freeMemory(&movies);

//     return 0;
// }

// int countMovies(char filename[])
// {
//     FILE *fp;
//     char line[300];
//     int count = 0;

//     fp = fopen(filename, "r");

//     if(fp == NULL)
//     {
//         printf("File cannot be opened\n");
//         return 0;
//     }

//     fgets(line, sizeof(line), fp);

//     while(fgets(line, sizeof(line), fp))
//     {
//         count++;
//     }

//     fclose(fp);

//     return count;
// }

// Movie* allocateMemory(int count)
// {
//     Movie *movies;

//     movies = (Movie*)malloc(count * sizeof(Movie));

//     if(movies == NULL)
//     {
//         printf("Memory allocation failed\n");
//         exit(1);
//     }

//     return movies;
// }

// void readMovies(char filename[], Movie *movies, int count)
// {
//     FILE *fp;
//     int i;
//     char line[300];

//     fp = fopen(filename, "r");

//     if(fp == NULL)
//     {
//         printf("File cannot be opened\n");
//         return;
//     }

//     fgets(line, sizeof(line), fp);

//     for(i = 0; i < count; i++)
//     {
//         fscanf(fp, "%99[^,],%49[^,],%d,%f\n", movies[i].name, movies[i].language, &movies[i].year, &movies[i].rating);
//     }

//     fclose(fp);
// }

// void displayMoviesFromFile(char filename[], int n)
// {
//     FILE *fp;
//     char name[100], language[50], line[300];
//     int year, i;
//     float rating;

//     fp = fopen(filename, "r");

//     if(fp == NULL)
//     {
//         printf("File cannot be opened\n");
//         return;
//     }

//     fgets(line, sizeof(line), fp);

//     for(i = 0; i < n; i++)
//     {
//         fscanf(fp, "%99[^,],%49[^,],%d,%f\n", name, language, &year, &rating);

//         printf("%s | %s | %d | %.1f\n", name, language, year, rating);
//     }

//     fclose(fp);
// }

// void sortMovies(Movie *movies, int count)
// {
//     int i, j;
//     Movie temp;

//     for(i = 0; i < count - 1; i++)
//     {
//         for(j = 0; j < count - i - 1; j++)
//         {
//             if(strcmp(movies[j].name, movies[j + 1].name) > 0)
//             {
//                 temp = movies[j];
//                 movies[j] = movies[j + 1];
//                 movies[j + 1] = temp;
//             }
//         }
//     }
// }

// void writeMovies(char filename[], Movie *movies, int count)
// {
//     FILE *fp;
//     int i;

//     fp = fopen(filename, "w");

//     if(fp == NULL)
//     {
//         printf("Cannot create output file\n");
//         return;
//     }

//     fprintf(fp, "Movie Name,Language,Year,Rating\n");

//     for(i = 0; i < count; i++)
//     {
//         fprintf(fp, "%s,%s,%d,%.1f\n", movies[i].name, movies[i].language, movies[i].year, movies[i].rating);
//     }

//     fclose(fp);
// }

// void freeMemory(Movie **movies)
// {
//     free(*movies);
//     *movies = NULL;
// }
































#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[100];
    char language[50];
    int year;
    float rating;

} Movie;

/* Function Prototypes */

int countMovies(char filename[]);
Movie* allocateMemory(int count);
void readMovies(char filename[], Movie *movies, int count);
void getSearchMovieName(char searchName[]);
void removeNewLine(char str[]);
int linearSearch(Movie *movies, int count, char searchName[]);
void displayMovie(Movie *movies, int position);
void freeMemory(Movie **movies);

/* Main Function */

int main()
{
    char filename[] = "IMDb_400_Movies1.csv";
    char searchName[100];

    int count, position;

    count = countMovies(filename);

    if(count == 0)
    {
        return 0;
    }

    Movie *movies = allocateMemory(count);

    readMovies(filename, movies, count);

    getSearchMovieName(searchName);

    position = linearSearch(movies, count, searchName);

    displayMovie(movies, position);

    freeMemory(&movies);

    return 0;
}

/* Function Definitions */

int countMovies(char filename[])
{
    FILE *fp;
    char line[300];
    int count = 0;

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 0;
    }

    fgets(line, sizeof(line), fp);

    while(fgets(line, sizeof(line), fp))
    {
        count++;
    }

    fclose(fp);

    return count;
}

Movie* allocateMemory(int count)
{
    Movie *movies;

    movies = (Movie*)malloc(count * sizeof(Movie));

    if(movies == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }

    return movies;
}

void readMovies(char filename[], Movie *movies, int count)
{
    FILE *fp;
    int i;
    char line[300];

    fp = fopen(filename, "r");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return;
    }

    fgets(line, sizeof(line), fp);

    for(i = 0; i < count; i++)
    {
        fscanf(fp, "%99[^,],%49[^,],%d,%f\n",
               movies[i].name,
               movies[i].language,
               &movies[i].year,
               &movies[i].rating);
    }

    fclose(fp);
}

void getSearchMovieName(char searchName[])
{
    printf("Enter movie name to search: ");

    fgets(searchName, 100, stdin);

    removeNewLine(searchName);
}

void removeNewLine(char str[])
{
//     int len;

//     len = strlen(str);

//     if(str[len - 1] == '\n')
//     {
//         str[len - 1] = '\0';
//     }
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        i++;
    }
}


int linearSearch(Movie *movies, int count, char searchName[])
{
    int i;

    for(i = 0; i < count; i++)
    {
        if(strcmp(movies[i].name, searchName) == 0)
        {
            return i;
        }
    }

    return -1;
}

void displayMovie(Movie *movies, int position)
{
    if(position == -1)
    {
        printf("\nMovie not found\n");
    }
    else
    {
        printf("\nMovie found at index %d in array and row %d in the file\n\n",
               position,
               position + 2);

        printf("Movie Name : %s\n", movies[position].name);
        printf("Language   : %s\n", movies[position].language);
        printf("Year       : %d\n", movies[position].year);
        printf("Rating     : %.1f\n", movies[position].rating);
    }
}

void freeMemory(Movie **movies)
{
    free(*movies);

    *movies = NULL;
}