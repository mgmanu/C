// #include<stdio.h>


// int main(){

//     int n,m;
//     printf("Enter size of both arrays: ");
//     scanf("%d %d",&n,&m);
//     int nums1[n],nums2[m],nums3[n+m];
//     printf("Enter array 1 elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&nums1[i]);
//     }
//     printf("Enter array 2 elements: ");
//     for(int i=0;i<m;i++){
//         scanf("%d",&nums2[i]);
//     }
//     int i=0,j=0,k=0;
//     while((i<n) && (j<m)){
//         if(nums1[i]<nums2[j]){
//             nums3[k]=nums1[i];
//             k++,i++;
//         }
//         else{
//             nums3[k]=nums2[j];
//             k++,j++;
//         }
//     }
//     while(i<n){
//         nums3[k]=nums1[i];
//         k++,i++;
//     }
//     while(j<m){
//         nums3[k]=nums2[j];
//         k++,j++;
//     }
//     printf("\nMerged Array\n");
//     for(int i=0;i<n+m;i++){
//         printf("%d ",nums3[i]);
//     }
// }


























#include <stdio.h>

void merge(int nums1[], int m, int nums2[], int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k] = nums1[i];
            i--;
        }
        else
        {
            nums1[k] = nums2[j];
            j--;
        }

        k--;
    }

    while (j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main()
{
    int m, n;
    int nums1[200], nums2[200];

    printf("Enter number of elements in first array: ");
    if (scanf("%d", &m) != 1 || m < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter number of elements in second array: ");
    if (scanf("%d", &n) != 1 || n < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    if (m + n > 200 || m + n == 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter elements of first sorted array: ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &nums1[i]);
    }

    printf("Enter elements of second sorted array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums2[i]);
    }

    for (int i = m; i < m + n; i++)
    {
        nums1[i] = 0;
    }

    merge(nums1, m, nums2, n);

    printf("Merged sorted array: ");

    for (int i = 0; i < m + n; i++)
    {
        printf("%d ", nums1[i]);
    }

    printf("\n");

    return 0;
}