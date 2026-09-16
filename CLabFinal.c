// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int key,i,n,mid,low,high;
//     printf("Enter the size of Array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter %d elements into Array: ",n);
//     for(i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter key element to be searched: ");
//     scanf("%d",&key);
//     low=0;
//     high=n-1;
//     while(low<=high) {
//         mid=(low+high)/2;
//         if(arr[mid]==key) {
//             printf("SEARCH SUCCESSFUL!!! and element found at %d position",mid+1);
//             exit(0);            
//         }
//         if(arr[mid]>key) {
//             high=mid-1;
//         }
//         else {
//             low=mid+1;
//         }
//     }
//     printf("ELEMENT NOT FOUND");
// }


// #include<stdio.h>
// int main() {
//     int key,i,n,mid,low,high,fg=1;
//     printf("Enter the size of Array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter %d elements into Array: ",n);
//     for(i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter key element to be searched: ");
//     scanf("%d",&key);
//     low=0;
//     high=n-1;
//     while(low<=high) {
//         mid=(low+high)/2;
//         if(arr[mid]==key) {
//             fg=1;
//             break;            
//         }
//         if(arr[mid]>key) {
//             high=mid-1;
//         }
//         else {
//             low=mid+1;
//         }
//     }
//     if(fg==1) {
//         printf("SEARCH SUCCESSFUL!!! and element found at %d position",mid+1);
//     }
//     else {
//         printf("ELEMENT NOT FOUND");
//     }
// }




// #include<stdio.h>
// int main() {
//     int n,i=2,fg=1;
//     printf("Enter a number to be checked: ");
//     scanf("%d",&n);
//     if(n<=1) {
//         printf("Neither a prime nor a composite number");
//     }
//     else {
//         while(i<=n/2) {
//             if(n%i==0) {
//                 fg=0;
//                 break;
//             }
//         i++;
//         }
//     }
//     if(fg==1) {
//         printf("PRIME NUMBER");
//     }
//     else {
//         printf("NOT A PRIME NUMBER");
//     }
// }





// #include<stdio.h>
// int main() {
//     int i=0,vol=0,con=0;
//     char ch,str[50];
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     while(str[i]!='\0' && str[i]!='\n') {
//         ch=str[i];
//         if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' 
//             || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
//                 vol++;
//             }
//         else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')) {
//             con++;
//         }
//     i++;
//     }
//     printf("VOWELS COUNT = %d\n",vol);
//     printf("CONSONENTS COUNT = %d",con);
// }







// #include<stdio.h>
// #include<math.h>
// typedef struct dist{
//     float x;
//     float y;
// }P;
// int main() {
//     P p1,p2;
//     float dis;
//     printf("Enter the co-ordinates of first point(x1,y1): ");
//     scanf("%f%f",&p1.x,&p1.y);
//     printf("Enter the co-ordinates of second point(x2,y2): ");
//     scanf("%f%f",&p2.x,&p2.y);
//     dis=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
//     printf("DISTANCE = %.2f",dis);
// }





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
    int n1,n2,ch;
    while(1){
    printf("\nSIMPLE CALCULATOR\n");
    printf("1.ADDITION\n");
    printf("2.SUBTRACTION\n");
    printf("3.MULTIPLICATION\n");
    printf("4.DIVISION\n");
    printf("5.MODULUS\n");
    printf("6.EXIT CALCULATOR\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch (ch) {
        case 1:
        printf("PERFORMING ADDITION.....\n");
        printf("Enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        printf("RESULT = %d\n",add(n1,n2));
        break;

        case 2:
        printf("PERFORMING SUBTRACTION.....\n");
        printf("Enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        printf("RESULT = %d\n",sub(n1,n2));
        break;

        case 3:
        printf("PERFORMING MULTIPLICATION.....\n");
        printf("Enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        printf("RESULT = %d\n",mul(n1,n2));
        break;

        case 4:
        printf("PERFORMING DIVITION.....\n");
        printf("Enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        if(n2!=0){
            printf("RESULT = %.2f\n",divi(n1,n2));
        }
        else {
            printf("DIVISION NOT POSSIBLE\n");
        }
        break;

        case 5:
        printf("PERFORMING MODULUS.....\n");
        printf("Enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        if(n2!=0){
            printf("RESULT = %d\n",mod(n1,n2));
        }
        else {
            printf("MODULUS NOT POSSIBLE\n");
        }
        break;

        case 6:
        printf("EXITED\n");
        exit(0);
        
        default :
        printf("INVALID CHOICE!!! TRY AGAIN\n");
        
    }
}
    

}