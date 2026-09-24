// #include <stdio.h>


// int main(){
//     int n;
//     scanf("%d",&n);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }














// #include <stdio.h>


// int main(){
//     int n;
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }














// #include <stdio.h>


// int main(){
//     int n;
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-1-i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }


















#include <stdio.h>


int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int k=1;k<=i-1;k++){
            printf("  ");
        }
        for(int j=1;j<=n-1-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}











