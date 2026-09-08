#include<stdio.h>
int main() {
    int n,i,fact=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0) {
        printf("Factorial of negative number is NOT DEFINED!!!");
    }
    else {
        for(i=1;i<n+1;i++) {
            fact*=i;
        }
        printf("Factorial of %d is : %d",n,fact);
    }
}
