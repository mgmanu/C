// #include<stdio.h>
// int main() {
//     int n,rev=0,org,rem;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     org=n;
//     while(n>0) {
//             rem=n%10;
//             rev=rev*10+rem;
//             n/=10;
//         }
//     if (org==rev) {
//         printf("PALINDROME");
//     }
//     else {
//         printf("NOT A PALINDROME");
//     }
// }



#include<stdio.h>
int main() {
    int n,rev=0,org,rem,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    org=n;
    while(n>0) {
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
            sum+=rem;
        }
    printf("ORIGINAL NUMBER : %d\n",org);
    printf("REVERSED NUMBER : %d\n",rev);
    printf("SUM OF INDIVIDUAL DIGITS : %d\n",sum);
}

    


 
