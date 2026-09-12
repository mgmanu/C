// #include<stdio.h>
// #include <string.h>
// int main()
// {
//     char str1[50],str2[50];
//     printf("Enter string1");
//     gets(str1);
//     printf("Enter string2");
//     gets(str2);
//     printf("Concatenated string is :");
//     puts(strcat(str1,str2));
//     return 0;
// }








































// #include<stdio.h>
// int main() {
//     char str1[50],str2[50],str3[50];
//     int i,j;
//     printf("Enter first string(str1): ");
//     gets(str1);
//     printf("Enter second string(str2): ");
//     gets(str2);
//     for (i=0;str1[i]!='\0';i++) {
//         str3[i]=str1[i];        
//     }
//     for (j=0;str2[j]!='\0';j++) {
//         str3[i+j]=str2[j];
//     }
//     str3[i+j]='\0';
//     printf("%s",str3);
// }




// #include<stdio.h>
// int main() {
//     char str1[50],str2[50],str3[50];
//     int i,j;
//     printf("Enter first string(str1): ");
//     gets(str1);
//     printf("Enter second string(str2): ");
//     gets(str2);
//     for (i=0;str1[i]!='\0';i++) {
//         str3[i]=str1[i];        
//     }
//     for (j=0;str2[j]!='\0';(j++,i++)) {  //can also be written as simply j++,i++ and use comma(,) in between not semicolon(;)
//         str3[i]=str2[j]; 
//     }
//     str3[i]='\0';
//     printf("%s",str3);
// }