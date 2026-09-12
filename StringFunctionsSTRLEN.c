//using strlen()

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[50];
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin); //counts extra \n
//     printf("%d",strlen(str));
// }

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[50];
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin); 
//     printf("%d",strlen(str)-1); //rectifies the size (solution for the above code)
// }

// #include<stdio.h>
// #include<string.h>
// int main() {
//     char str[50];
//     printf("Enter a string: ");
//     gets(str); //counts the size correctly 
//     printf("%d",strlen(str));
// }










// without using strlen()

// #include<stdio.h>
// int main() {
//     char str[50],i,length=0;   
//     printf("Enter a string: ");
//     gets(str);
//     for(i=0;str[i]!='\0' && str[i]!='\n';i++) {
//         length+=1;
//     }
//     printf("%d",length);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i,length=0;   
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     for(i=0;str[i]!='\0' && str[i]!='\n';i++) {
//         length+=1;
//     }
//     printf("%d",length);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i,length=0;   
//     printf("Enter a string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++) {
//         length+=1;
//     }
//     printf("%d",length);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i,length=0;   
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     for(i=0;str[i]!='\n';i++) {
//         length+=1;
//     }
//     printf("%d",length);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i=0;   
//     printf("Enter a string: ");
//     gets(str);
//     while (str[i]!='\0') {
//         i++;
//     }
//     printf("%d",i);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i=0;   
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     while (str[i]!='\n') {
//         i++;
//     }
//     printf("%d",i);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i=0;
//     printf("Enter a string: ");
//     gets(str);
//     while(str[i]!='\0' && str[i]!='\n') {
//         i++;
//     }
//     printf("%d",i);
// }


// #include<stdio.h>
// int main() {
//     char str[50],i=0;
//     printf("Enter a string: ");
//     fgets(str,sizeof(str),stdin);
//     while(str[i]!='\0' && str[i]!='\n') {
//         i++;
//     }
//     printf("%d",i);
// }






