#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int a[n][m];

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int top = 0;
    int bottom = n - 1;
    int left = 0;
    int right = m - 1;

    printf("Spiral Order: ");

    while (top <= bottom && left <= right)
    {
        // Left to Right
        for (int j = left; j <= right; j++)
        {
            printf("%d ", a[top][j]);
        }
        top++;

        // Top to Bottom
        for (int i = top; i <= bottom; i++)
        {
            printf("%d ", a[i][right]);
        }
        right--;

        // Right to Left
        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                printf("%d ", a[bottom][j]);
            }
            bottom--;
        }

        // Bottom to Top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                printf("%d ", a[i][left]);
            }
            left++;
        }
    }

    return 0;
}