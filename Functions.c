#include<stdio.h>
#include<stdlib.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int mul(int a,int b){
    return a*b;
}
float divi(int a,int b){
    return (float)a/b;
}
int mod(int a,int b){
    return a%b;
}

int main() {
    int ch,n1,n2;
    while(1) {
        printf("Simple Calculator Using Functions\n");
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Modulus\n");
        printf("6.EXIT\n");
        printf("Enter your CHOICE: ");
        scanf("%d",&ch);
        switch(ch) {
            case 1:
            printf("Enter two numbers: ");
            scanf("%d%d",&n1,&n2);
            printf("Result: %d\n" ,add(n1,n2));
            break;

            case 2:
            printf("Enter two numbers: ");
            scanf("%d%d",&n1,&n2);
            printf("Result: %d\n" ,sub(n1,n2));
            break;

            case 3:
            printf("Enter two numbers: ");
            scanf("%d%d",&n1,&n2);
            printf("Result: %d\n" ,mul(n1,n2));
            break;

            case 4:
            printf("Enter two numbers: ");
            scanf("%d%d",&n1,&n2);
            if(n2!=0) {
                printf("Result: %.2f\n" , divi(n1,n2)); 
            }
            else {
                printf("Error\n");
            }
            break;

            case 5:
            printf("Enter two numbers: ");
            scanf("%d%d",&n1,&n2);
            if(n2!=0) {
                printf("Result: %d\n" , mod(n1,n2)); 
            }
            else {
                printf("Error\n");
            }
            break;

            case 6:
            printf("Exited");
            exit(0);

            default :
            printf("Invalid Choice try One more time!!");
        }
    }
}

