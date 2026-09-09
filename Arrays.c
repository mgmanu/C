#include<stdio.h>
int main() {
    typedef int arr[50];
    int n,i;
    arr a;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements in array:\n",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    printf("\nElements of array: \n");
    for(i=0;i<n;i++) {
        printf("%d\t",a[i]);
    }
}