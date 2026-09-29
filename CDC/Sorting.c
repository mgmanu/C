// #include <stdio.h>

// int main() {
//     int a[100], n;
//     int i, j, temp;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < n - 1; i++) {

//         for (j = 0; j < n - 1 - i; j++) {

//             if (a[j] > a[j + 1]) {
//                 temp = a[j];
//                 a[j] = a[j + 1];
//                 a[j + 1] = temp;
//             }
//         }
//     }

//     printf("Sorted array:\n");

//     for (i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }




















// #include <stdio.h>

// int main() {
//     int a[100], n;
//     int i, j, min, temp;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter elements:\n");
//     for (i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < n - 1; i++) {

//         min = i;

//         for (j = i + 1; j < n; j++) {

//             if (a[j] < a[min]) {
//                 min = j;
//             }
//         }

//         temp = a[i];
//         a[i] = a[min];
//         a[min] = temp;
//     }

//     printf("Sorted array:\n");

//     for (i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }






























#include <stdio.h>

int main() {
    int a[100], n;
    int i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++) {

        key = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > key) {

            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}