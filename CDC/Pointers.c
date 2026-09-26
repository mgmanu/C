// #include <stdio.h>

// int main()
// {
//     int n;

//     printf("Enter size of array: ");
//     scanf("%d", &n);

//     int a[n];

//     printf("Enter array elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     // Store first element
//     int first = a[0];

//     // Shift elements to the left
//     for (int i = 0; i < n - 1; i++)
//     {
//         a[i] = a[i + 1];
//     }

//     // Put first element at the end
//     a[n - 1] = first;

//     printf("Array after left rotation by one position:\n");

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }














#include <stdio.h>

int main()
{
    int n, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Enter the digit to find frequency: ");
    scanf("%d", &digit);

    while (n > 0)
    {
        int rem = n % 10;

        if (rem == digit)
        {
            count++;
        }

        n = n / 10;
    }

    printf("Frequency = %d\n", count);

    return 0;
}
