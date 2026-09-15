#include <stdio.h>
int main() {
    int r1,c1,r2,c2,i,j,k;
    printf("Enter rows and columns for first matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d",&r2,&c2);
    int A[r1][c1],B[r2][c2],C[r1][c2];
    if (c1!=r2) {
        printf("MATRIX MULTIPLICATION NOT POSSIBLE!!!");
    }
    else {
        printf("Enter elements of first matrix A:\n");
        for(i=0;i<r1;i++) {
            for(j=0;j<c1;j++) {
                printf("Enter a%d%d: ",i,j);
                scanf("%d",&A[i][j]);
            }
        }
        printf("Enter elements of second matrix B:\n");
        for(i=0;i<r2;i++) {
            for(j=0;j<c2;j++) {
                printf("Enter b%d%d: ",i,j);
                scanf("%d",&B[i][j]);
            }
        }
        for (i=0;i<r1;i++) {
            for (j=0;j<c2;j++) {
                C[i][j]=0;
                for (k=0;k<c1;k++) {
                    C[i][j]+=A[i][k]*B[k][j];
                }
            }
        }
        printf("Printing Result: \n");
        for (i=0;i<r1;i++) {
            for (j=0;j<c2;j++) {
                printf("%d\t",C[i][j]);
                }
            printf("\n");
        }
    }


    
    
}