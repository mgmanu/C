#include<stdio.h>


int main(){

    int n,m;
    printf("Enter size of both arrays: ");
    scanf("%d %d",&n,&m);
    int nums1[n],nums2[m],nums3[n+m];
    printf("Enter array 1 elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums1[i]);
    }
    printf("Enter array 2 elements: ");
    for(int i=0;i<m;i++){
        scanf("%d",&nums2[i]);
    }
    int i=0,j=0,k=0;
    while((i<n) && (j<m)){
        if(nums1[i]<nums2[j]){
            nums3[k]=nums1[i];
            k++,i++;
        }
        else{
            nums3[k]=nums2[j];
            k++,j++;
        }
    }
    while(i<n){
        nums3[k]=nums1[i];
        k++,i++;
    }
    while(j<m){
        nums3[k]=nums2[j];
        k++,j++;
    }
    printf("\nMerged Array\n");
    for(int i=0;i<n+m;i++){
        printf("%d ",nums3[i]);
    }
}