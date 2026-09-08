#include <stdio.h>
int main() {
    int n,a=0,b=1,i,c;
    printf("Enter number of terms to be generated : ");
    scanf("%d",&n);
    if (n<0) {
        printf("Terms cannot be negative\n");
    }
    else if(n==1) {
        printf("%d",a);
    }
    else {
        printf("Fibonacci Series upto %d terms :\n",n);
        printf("%d\t%d\t",a,b);
        for (i=2;i<n;i++) {
            c = a+b;
            printf("%d\t",c);
            a=b;
            b=c;
        }
    }
}