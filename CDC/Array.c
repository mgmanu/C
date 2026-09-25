#include<stdio.h>

int main(){
    // int size;
    // printf("Enter size : ");
    // scanf("%d",&size);
    // int arr[size];

    // for(int i=0;i<size;i++){
    //     scanf("%d",&arr[i]);
    // }
    // for(int i=0;i<size;i++){
    //     printf("%d ",arr[i]);
    // }
    // int max=0;
    // int min=0;
    // for(int i=1;i<size;i++){
    //     if(arr[i]>arr[max]) max=i;
    // }
    // for(int i=1;i<size;i++){
    //     if(arr[i]<arr[min]) min=i;
    // }

    // printf("\n%d\n",arr[max]);
    // printf("%d",arr[min]);

    // int sum=0;

    // for(int i=0;i<size;i++){
    //     sum+=arr[i];
    // }

    // int
    //  avg = sum/size;

    // printf("\nSUM: %d\n",sum);
    // printf("AVG: %d\n",avg);


    // int sm = arr[0];
    // for(int i=1;i<size;i++){
    //     if(arr[i]>sm && arr[i]!=arr[max]) sm=arr[i]; 
    // }
    // printf("%d",sm);

    // int first=0;
    // int second=0;
    // for(int i=1;i<size;i++){
    //     if(arr[i]>first){ 
    //         second=first;
    //         first=arr[i];
    //     }
    //     else if(arr[i]>second && arr[i]!=first){
    //         second=arr[i];
    //     }
    // }
    // printf("\n`%d\n",first);
    // printf("%d\n",second);
                
                
    // for(int i=0;i<size;i++){
    //     for(int j=i+1;j<size;j++){
    //         if(arr[i]>arr[j]){
    //             int temp = arr[i];
    //             arr[i]=arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }
    // printf("\n");
    // for(int i=0;i<size;i++){
    //     printf("%d ",arr[i]);
    // }



    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int max;
    for(int i=0;i<3;i++){
        max=arr[i][0];
        for(int j=1;j<3;j++){
            if(arr[i][j]>max) max=arr[i][j];
        } 
        printf("%d\n",max);
    }


    int min;
    for(int i=0;i<3;i++){
        min=arr[i][0];
        for(int j=1;j<3;j++){
            if(arr[i][j]<min) min=arr[i][j];
        } 
        printf("%d\n",min);
    }

    

}   