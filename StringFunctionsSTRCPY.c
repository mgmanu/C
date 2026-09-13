//using strcpy()

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str1[50],str2[50];
//     printf("Enter a string(str1): ");
//     fgets(str1,sizeof(str1),stdin); 
//     printf("Original String:%s",str1);
//     printf("Copied String:%s\n",strcpy(str2,str1));
// }













//without using strcpy()

// #include<stdio.h>
// #include<string.h>
// int main() {
//     int i=0;
//     char str1[50],str2[50];
//     printf("Enter a string to be copied: ");
//     gets(str1);
//     while(str1[i]!='\0') {
//         str2[i]=str1[i];
//         i++;
//     }
//     str2[i]='\0';
//     printf("Copied String:%s\n",str2);
// }







#include<stdio.h>
#include<string.h>
int main() {
    int i=0;
    char str1[50],str2[50];
    printf("Enter a string to be copied: ");
    fgets(str1,sizeof(str1),stdin);
    while(str1[i]!='\n') {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("Copied String:%s\n",str2);
}