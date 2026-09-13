// #include<stdio.h>
// #include<string.h>
// int main()
// {
// char str[20], temp;
// int i=0,j;
// printf("Enter a string");
// gets(str);
// j=strlen(str)-1;
// while(i<j)
// {
// temp = str[i];
// str[i] = str[j];
// str[j] = temp;
// i++;
// j--;     
// }

// printf("\nThe reversed string is:");
// puts(str);

// }




#include<stdio.h>
int main()
{
char str[20], temp;
int i=0,j,length=0;
printf("Enter a string");
gets(str);
for(j=0;str[j]!='\0';j++) {
  length++;
}
j=length-1;
while(i<j)
{
temp = str[i];
str[i] = str[j];
str[j] = temp;
i++;
j--;     
}

printf("\nThe reversed string is:");
puts(str);

}





// #include<stdio.h>
// int main()
// {
// char str[20], temp;
// int i=0,j=0;
// printf("Enter a string");
// gets(str);
// while (str[j]!='\0') {
//   j++;
// }
// j-=1;
// while(i<j)
// {
// temp = str[i];
// str[i] = str[j];
// str[j] = temp;
// i++;
// j--;     
// }

// printf("\nThe reversed string is:");
// puts(str);

// }