// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int n,i,low,high,mid,key,fg=0;
//     printf("Enter size of an array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter %d elements in sorted order: ",n);
//     for(i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter key element to be searched: ");
//     scanf("%d",&key);
//     low=0;
//     high=n-1;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(key==arr[mid]) {
//             fg=1;
//             break;
//         }
//         else if(key>arr[mid]) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     if(fg==1) {
//         printf("Search Successfull and it is present at %d position.",mid+1);
//     }
//     else {
//         printf("Key not found");
//     }
// }



// #include<stdio.h>
// #include<stdlib.h>
// int main() {
//     int n,i,low,high,mid,key;
//     printf("Enter size of an array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter %d elements in sorted order: ",n);
//     for(i=0;i<n;i++) {
//         scanf("%d",&arr[i]);
//     }
//     printf("Enter key element to be searched: ");
//     scanf("%d",&key);
//     low=0;
//     high=n-1;
//     while(low<=high){
//         mid=(low+high)/2;
//         if(key==arr[mid]) {
//             printf("Search Successfull and it is present at %d position.",mid+1);
//             exit(0);
//         }
//         else if(key>arr[mid]) {
//             low = mid + 1;
//         }
//         else {
//             high = mid - 1;
//         }
//     }
//     printf("Key not found");
// }




