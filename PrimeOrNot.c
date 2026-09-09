#include<stdio.h>
#include<stdlib.h>
int main() {
    int n,i=2;
    printf("Enter a number to be checked: ");
    scanf("%d",&n);
    if(n==1) {
        printf("1 is neither a PRIME nor a COMPOSITE number");
    }
    else if(n<=0) {
        printf("Enter a positive INTEGER");
    }
    else {
        while(i<=n/2) {
            if(n%i==0) {
                printf("NOT A PRIME NUMBER");
                exit(0);
            }
            i++;
        }
    }
    printf("PRIME NUMBER");
}