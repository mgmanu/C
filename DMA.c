
// #include <stdio.h>
// #include <stdlib.h>

// /* Function Prototypes */

// int *allocateUsingMalloc(int n);

// int *allocateUsingCalloc(int n);

// int *resizeArray(int *arr, int newSize);

// void readElements(int *arr, int start, int end);

// void printArray(int *arr, int n);

// void freeMemory(int *arr);

// int main()
// {
//     int n, new_n;
//     int *mallocArray;
//     int *callocArray;
//     int *resizedArray;

//     printf("Enter a positive integer n: ");
//     scanf("%d", &n);

//     if(n <= 0)
//     {
//         printf("Invalid input!\n");
//         return 1;
//     }

//     /* malloc */
//     mallocArray = allocateUsingMalloc(n);

//     if(mallocArray == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     printf("Enter %d elements:\n", n);
//     readElements(mallocArray, 0, n);

//     printf("Malloc array: ");
//     printArray(mallocArray, n);


//     /* calloc */
//     callocArray = allocateUsingCalloc(n);

//     if(callocArray == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         freeMemory(mallocArray);
//         return 1;
//     }

//     printf("Calloc array initially: ");
//     printArray(callocArray, n);

//     printf("Enter %d elements:\n", n);
//     readElements(callocArray, 0, n);

//     printf("Calloc array after input: ");
//     printArray(callocArray, n);


//     /* realloc */
//     printf("Enter new size: ");
//     scanf("%d", &new_n);

//     if(new_n <= 0)
//     {
//         printf("Invalid input!\n");
//         freeMemory(mallocArray);
//         freeMemory(callocArray);
//         return 1;
//     }

//     resizedArray = resizeArray(mallocArray, new_n);

//     if(resizedArray == NULL)
//     {
//         printf("Reallocation failed!\n");
//         freeMemory(mallocArray);
//         freeMemory(callocArray);
//         return 1;
//     }

//     mallocArray = resizedArray;

//     if(new_n > n)
//     {
//         printf("Enter %d additional elements:\n", new_n - n);
//         readElements(mallocArray, n, new_n);
//     }

//     printf("Array after realloc: ");
//     printArray(mallocArray, new_n);


//     /* Free memory */
//     freeMemory(mallocArray);
//     freeMemory(callocArray);

//     return 0;
// }


// int *allocateUsingMalloc(int n)
// {
//     return (int *)malloc(n * sizeof(int));
// }


// int *allocateUsingCalloc(int n)
// {
//     return (int *)calloc(n, sizeof(int));
// }


// int *resizeArray(int *arr, int newSize)
// {
//     return (int *)realloc(arr, newSize * sizeof(int));
// }


// void readElements(int *arr, int start, int end)
// {
//     int i;

//     for(i = start; i < end; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
// }


// void printArray(int *arr, int n)
// {
//     int i;

//     for(i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");
// }


// void freeMemory(int *arr)
// {
//     free(arr);
// }









// #include <stdio.h>
// #include <stdlib.h>

// /* Function Prototypes */

// int *allocateScores(int n);

// int *resizeScores(int *arr, int newSize);

// void readScores(int *arr, int start, int end);

// void printScores(int *arr, int n);

// float calculateAverage(int *arr, int n);

// int findMax(int *arr, int n);

// int findMin(int *arr, int n);

// int countAboveAverage(int *arr, int n, float average);

// void freeMemory(int *arr);


// int main()
// {
//     int n, new_n;
//     int *scores;
//     int *resized;
//     float average;

//     printf("Enter number of students: ");
//     scanf("%d", &n);

//     if(n <= 0)
//     {
//         printf("Invalid input!\n");
//         return 1;
//     }

//     /* Allocate memory */
//     scores = allocateScores(n);

//     if(scores == NULL)
//     {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }

//     /* Read scores */
//     printf("Enter %d scores:\n", n);
//     readScores(scores, 0, n);

//     /* Display scores */
//     printf("\nScores: ");
//     printScores(scores, n);

//     /* Analysis */
//     average = calculateAverage(scores, n);

//     printf("Average: %.2f\n", average);
//     printf("Highest: %d\n", findMax(scores, n));
//     printf("Lowest: %d\n", findMin(scores, n));
//     printf("Students above average: %d\n",
//            countAboveAverage(scores, n, average));


//     /* Read new size */
//     printf("\nEnter new number of students: ");
//     scanf("%d", &new_n);

//     if(new_n <= 0)
//     {
//         printf("Invalid input!\n");
//         freeMemory(scores);
//         return 1;
//     }

//     /* Resize array */
//     resized = resizeScores(scores, new_n);

//     if(resized == NULL)
//     {
//         printf("Memory reallocation failed!\n");
//         freeMemory(scores);
//         return 1;
//     }

//     scores = resized;

//     /* If size increases, read new scores */
//     if(new_n > n)
//     {
//         printf("Enter %d new scores:\n", new_n - n);
//         readScores(scores, n, new_n);
//     }

//     /* Display updated scores */
//     printf("\nUpdated Scores: ");
//     printScores(scores, new_n);

//     /* Updated analysis */
//     average = calculateAverage(scores, new_n);

//     printf("Updated Average: %.2f\n", average);
//     printf("Updated Highest: %d\n", findMax(scores, new_n));
//     printf("Updated Lowest: %d\n", findMin(scores, new_n));
//     printf("Updated Students above average: %d\n",
//            countAboveAverage(scores, new_n, average));

//     /* Free memory */
//     freeMemory(scores);

//     return 0;
// }


// int *allocateScores(int n)
// {
//     return (int *)malloc(n * sizeof(int));
// }


// int *resizeScores(int *arr, int newSize)
// {
//     return (int *)realloc(arr, newSize * sizeof(int));
// }


// void readScores(int *arr, int start, int end)
// {
//     int i;

//     for(i = start; i < end; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
// }


// void printScores(int *arr, int n)
// {
//     int i;

//     for(i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }

//     printf("\n");
// }


// float calculateAverage(int *arr, int n)
// {
//     int i;
//     int sum = 0;

//     for(i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }

//     return (float)sum / n;
// }


// int findMax(int *arr, int n)
// {
//     int i;
//     int max = arr[0];

//     for(i = 1; i < n; i++)
//     {
//         if(arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     return max;
// }


// int findMin(int *arr, int n)
// {
//     int i;
//     int min = arr[0];

//     for(i = 1; i < n; i++)
//     {
//         if(arr[i] < min)
//         {
//             min = arr[i];
//         }
//     }

//     return min;
// }


// int countAboveAverage(int *arr, int n, float average)
// {
//     int i;
//     int count = 0;

//     for(i = 0; i < n; i++)
//     {
//         if(arr[i] > average)
//         {
//             count++;
//         }
//     }

//     return count;
// }


// void freeMemory(int *arr)
// {
//     free(arr);
// }

























