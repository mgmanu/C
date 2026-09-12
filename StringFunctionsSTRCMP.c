// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[50],str2[50];
//     int n;
//     printf("Enter string1");
//     gets(str1);
//     printf("Enter string2");
//     gets(str2);
//     printf("%d",strcmp(str1,str2));
// }


























































#include<stdio.h>
int main() {
    char str1[50],str2[50];
    int i,r;
    printf("Enter first string(str1): ");
    gets(str1);
    printf("Enter second string(str2): ");
    gets(str2);
    for(i=0;str1[i]!='\0' && str2[i]!='\0';i++) {
        if (str1[i]==str2[i]) {
            continue;
        }
        else {
            break;
        }
    }
    r=str1[i]-str2[i];
    if(r==0) {
        printf("Equal");
    }
    else if(r<0) {
        printf("str1<str2");
    }
    else {
        printf("str1>str2");
    }   
}



// #include<stdio.h>
// int main() {
//     char str1[50],str2[50];
//     int i,r=0;
//     printf("Enter first string(str1): ");
//     gets(str1);
//     printf("Enter second string(str2): ");
//     gets(str2);
//     for(i=0;str1[i]!='\0' && str2[i]!='\0';i++) {
//         if (str1[i] != str2[i]) {
//             break;
//         }
//     }
//     r=str1[i]-str2[i];
//     if(r==0){
//         printf("Equal");
//     }
//     else if(r<0) {
//         printf("str1<str2");
//     }
//     else {
//         printf("str1>str2");
//     }
// }
