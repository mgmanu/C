// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n],rev[n];

//     printf("Enter array elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("Reverse :\n");

//     for(int i=0;i<n;i++){
//         rev[i]=arr[n-i-1];
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",rev[i]);
//     }
// }



// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     int sum=0;
//     printf("Enter array elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }

//     printf("SUM = %d\n",sum);
   
// }






// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     int max=0;
//     printf("Enter array elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=1;i<n;i++){
//         if(arr[max]<arr[i]){
//             max=i;
//         }
//     }

//     printf("%d",arr[max]);
// }



// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     int max=0;
//     printf("Enter array elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(int i=1;i<n;i++){
//         if(arr[max]<arr[i]){
//             max=i;
//         }
//     }

//     printf("%d",arr[max]);
// }






// #include <stdio.h>

// int main(){
//     int n;
//     printf("Enter size of array: ");
//     scanf("%d",&n);
//     int arr[n];

//     printf("Enter array elements: ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(arr[i]<0){
//             printf("%d ",arr[i]);
//         }
//     }
    
//     for(int i=0;i<n;i++){
//             if(arr[i]>0)
//                 printf("%d ",arr[i]);
//         }

//     for(int i=0;i<n;i++){
//             if(arr[i]==0)
//                 printf("%d ",arr[i]);
//         }
//     }










#include <stdio.h>

int main(){

    int arr[100],n,i,j;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(arr+i)>=0 && *(arr+j)<0){
                int temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(arr+i)==0 && *(arr+j)>0){
                int temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    printf("Rearranged Array\n");
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}












// #include<stdio.h>

// int main()
// {
//     int a=5;    
//     int *p=&a;
//     int arr[5]={1,2,3,4,5};
//     int *q=arr;

//     printf("%d\n",p);
//     printf("%d\n",*p);
//     printf("%d\n",a);
//     printf("%d\n",&a);
//     printf("%d\n",&p);
//     printf("\n");
//     printf("%d\n",*q);
//     printf("%d\n",&q);
//     printf("%d\n",q);
// }