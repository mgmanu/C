// #include<stdio.h>

// struct emp_det {
//     int id;
//     char name[20];
//     char degn[20];
//     char dept[20];
//     float salary;
//     int mob_no;
// };

// int main(){
//     struct emp_det emp[10];
//     int i;
//     float highest;
//     int pos=0;
//     for(i=0;i<3;i++) {
//         printf("Enter the details of %d employee.\n",i+1);
//         printf("Enter employee id: ");
//         scanf("%d",&emp[i].id);
//         printf("Enter employee name: ");
//         scanf("%s",emp[i].name);
//         printf("Enter employee designation: ");
//         scanf("%s",emp[i].degn);
//         printf("Enter employee department: ");
//         scanf("%s",emp[i].dept);
//         printf("Enter employee salary: ");
//         scanf("%f",&emp[i].salary);
//         printf("Enter employee mobile number: ");
//         scanf("%d",&emp[i].mob_no);
//     }
//     printf("\nPrinting details of all 3 employees\n");
//     for(i=0;i<3;i++) {
//         printf("Details of %d employee.\n",i+1);
//         printf("Emp id: %d\n",emp[i].id);
//         printf("Emp name: %s\n",emp[i].name);
//         printf("Emp designation: %s\n",emp[i].degn);
//         printf("Emp department: %s\n",emp[i].dept);
//         printf("Emp salary: %.2f\n",emp[i].salary);
//         printf("Emp mobile number: %d\n",emp[i].mob_no);
//     }
//     printf("\nDisplying the details of that employee who has HIGHEST SALARY.\n");
//     highest=emp[0].salary;
//     for(i=1;i<3;i++){
//         if(emp[i].salary>highest){
//             highest=emp[i].salary;
//             pos=i;
//         }
//     }
//     printf("Details of Emp %d\n",pos+1);
//     printf("Emp id: %d\n",emp[pos].id);
//     printf("Emp name: %s\n",emp[pos].name);
//     printf("Emp designation: %s\n",emp[pos].degn);
//     printf("Emp department: %s\n",emp[pos].dept);
//     printf("Emp salary: %.2f\n",emp[pos].salary);
//     printf("Emp mobile number: %d\n",emp[pos].mob_no);
// }













 // without pos

// #include <stdio.h>

// struct emp_det {
//     int id;
//     char name[20];
//     char degn[20];
//     char dept[20];
//     float salary;
//     int mob_no;
// };

// int main() {
//     struct emp_det emp[10];
//     int i;
//     float highest;

//     // Input (3 employees as per your code)
//     for(i = 0; i < 3; i++) {
//         printf("\nEnter details of %d employee\n", i + 1);

//         printf("Enter employee id: ");
//         scanf("%d", &emp[i].id);

//         printf("Enter employee name: ");
//         scanf("%s", emp[i].name);

//         printf("Enter employee designation: ");
//         scanf("%s", emp[i].degn);

//         printf("Enter employee department: ");
//         scanf("%s", emp[i].dept);

//         printf("Enter employee salary: ");
//         scanf("%f", &emp[i].salary);

//         printf("Enter employee mobile number: ");
//         scanf("%d", &emp[i].mob_no);
//     }

//     // Phase 1 → Find highest salary
//     highest = emp[0].salary;

//     for(i = 1; i < 3; i++) {
//         if(emp[i].salary > highest) {
//             highest = emp[i].salary;
//         }
//     }

//     // Phase 2 → Print employee(s) with highest salary
//     printf("\n\n===== Highest Paid Employee =====\n");

//     for(i = 0; i < 3; i++) {
//         if(emp[i].salary == highest) {
//             printf("\nDetails of Employee %d\n", i + 1);
//             printf("Emp id: %d\n", emp[i].id);
//             printf("Emp name: %s\n", emp[i].name);
//             printf("Emp designation: %s\n", emp[i].degn);
//             printf("Emp department: %s\n", emp[i].dept);
//             printf("Emp salary: %.2f\n", emp[i].salary);
//             printf("Emp mobile number: %d\n", emp[i].mob_no);
//         }
//     }

//     return 0;
// }














// #include <stdio.h>

// int main() {
//     int N, i;
//     int sum = 0;
//     float avg;

//     printf("Enter value of N: ");
//     scanf("%d", &N);

//     for(i = 1; i <= N; i++) {
//         sum = sum + i;
//     }

//     avg = (float)sum / N;

//     printf("Sum = %d\n", sum);
//     printf("Average = %.2f\n", avg);

//     return 0;
// }

















// #include <stdio.h>
// #include <math.h>

// int main() {
//     float a, b, c;
//     float D, root1, root2, realPart, imagPart;

//     printf("Enter coefficients a, b, c: ");
//     scanf("%f %f %f", &a, &b, &c);

//     if (a == 0) {
//         printf("Not a quadratic equation.\n");
//         return 0;
//     }

//     else {
//         D = b*b - 4*a*c;

//         if (D > 0) {
//             root1 = (-b + sqrt(D)) / (2*a);
//             root2 = (-b - sqrt(D)) / (2*a);

//             printf("Roots are real and distinct.\n");
//             printf("Root1 = %.2f\n", root1);
//             printf("Root2 = %.2f\n", root2);
//         }
//         else if (D == 0) {
//             root1 = -b / (2*a);

//             printf("Roots are real and equal.\n");
//             printf("Root1 = Root2 = %.2f\n", root1);
//         }
//         else {
//             realPart = -b / (2*a);
//             imagPart = sqrt(-D) / (2*a);

//             printf("Roots are complex and imaginary.\n");
//             printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
//             printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
//         }

//     return 0;
//     }
// }

























// #include<stdio.h>
// struct student {
//     char name[20];
//     struct DOB {
//         int day;
//         int month;
//         int year
//     }d;

// }s;

// int main() {
//     printf("Enter your name: ");
//     scanf("%s",s.name);
//     printf("Enter your birth day: ");
//     scanf("%d",&s.d.day);
//     printf("Enter your birth month: ");
//     scanf("%d",&s.d.month);
//     printf("Enter your birth year: ");
//     scanf("%d",&s.d.year);
    
//     printf("NAME: %s\n",s.name);
//     printf("DOB: %d-%d-%d\n",s.d.day,s.d.month,s.d.year);    
// }






//call by value , pass by value

// #include<stdio.h>

// void swap(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
// }

// int main(){
//     int n1=100,n2=200;
//     printf("Before swapping: ");
//     printf("\n n1 is %d and n2 is %d\n",n1,n2);
//     swap(n1,n2);
//     printf("After swapping: ");
//     printf("\n n1 is %d and n2 is %d\n",n1,n2);
// }







//call by reference , call by address , pass by address

// #include<stdio.h>

// void swap(int *a, int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main(){
//     int n1=100,n2=200;
//     printf("Before swapping: ");
//     printf("\n n1 is %d and n2 is %d\n",n1,n2);
//     swap(&n1,&n2);
//     printf("After swapping: ");
//     printf("\n n1 is %d and n2 is %d\n",n1,n2);
// }

























// #include <stdio.h>

// int main() {
//     char ch;

//     printf("Enter a character: ");
//     scanf(" %c", &ch);

//     switch(ch) {
//         case 'a': case 'e': case 'i': case 'o': case 'u':
//         case 'A': case 'E': case 'I': case 'O': case 'U':
//             printf("It is a VOWEL\n");
//             break;

//         default:
//             printf("It is NOT a vowel\n");
//     }

//     return 0;
// }















// #include<stdio.h>

// int main() {
//     float age;
//     printf("Enter your age: ");
//     scanf("%f",&age);
//     age>=18?printf("Eligible"):printf("Not Eligible");
// }







// #include<stdio.h>

// int main() {
//     float age;
//     char r;
//     printf("Enter your age: ");
//     scanf("%f",&age);
//     r=age>=18?'Y':'N';
//     if(r=='Y') {
//         printf("Eligible");
//     }
//     else {
//         printf("Not Eligible");
// }
// }


















// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[20];
//     printf("Enter a string: ");
//     gets(str);
//     printf("Length = %d",strlen(str));
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20],str2[20];
//     printf("Enter a string: ");
//     gets(str1);
//     printf("Before Copying = %s\n",str1);
//     printf("After Copying = %s\n",strcpy(str2,str1));
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20],str2[20];
//     int r=0;
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);
//     r=strcmp(str1,str2);
//     if(r>0){
//         printf("%s is greater than %s\n",str1,str2);
//     }
//     else if(r<0){
//         printf("%s is greater than %s\n",str2,str1);
//     }
//     else {
//         printf("%s and %s are equal\n",str1,str2);
//     }
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[20];
//     printf("Enter a string: ");
//     gets(str);
//     printf("Reverse = %s",strrev(str));
// }



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[20],str2[20];
//     printf("Enter first string: ");
//     gets(str1);
//     printf("Enter second string: ");
//     gets(str2);
//     printf("Concatenated String = %s\n",strcat(str1,str2));
// }













// #include <stdio.h>

// int main() {
//     char str[20];
//     int i=0;
//     printf("Enter a string: ");
//     gets(str);
//     while(str[i]!='\0'){
//         i++;
//     }
//     printf("Length = %d",i);
// }
// #include <stdio.h>

// int main() {
//     char str[20];
//     int i,len=0;
//     printf("Enter a string: ");
//     gets(str);
//     for(i=0;str[i]!='\0';i++){
//         len+=1;
//     }
//     printf("Length = %d",len);
// }




















// #include <stdio.h>

// int main() {
//     char str1[20],str2[20];
//     int i=0;
//     printf("Enter a string: ");
//     gets(str1);
//     while(str1[i]!='\0'){
//         str2[i]=str1[i];
//         i++;
//     }
//     str2[i]='\0';
//     printf("Copied String = %s",str2);
// }


















// #include <stdio.h>

// int main() {
//     char str1[20],str2[20],str3[20];
//     int i=0,j=0;
//     printf("Enter a string: ");
//     gets(str1);
//     printf("Enter a string: ");
//     gets(str2);
//     while(str1[i]!='\0'){
//         str3[i]=str1[i];
//         i++;
//     }
//     while(str2[j]!='\0'){
//         str3[i+j]=str2[j];
//         j++;
//     }
//     str3[i+j]='\0';
    
//     printf("Concatinated String = %s",str3);
// }



// #include <stdio.h>

// int main() {
//     char str1[20],str2[20],str3[20];
//     int i=0,j=0;
//     printf("Enter a string: ");
//     gets(str1);
//     printf("Enter a string: ");
//     gets(str2);
//     while(str1[i]!='\0'){
//         str3[i]=str1[i];
//         i++;
//     }
//     while(str2[j]!='\0'){
//         str3[i]=str2[j];
//         i++,j++;
//     }
//     str3[i]='\0';
    
//     printf("Concatinated String = %s",str3);
// }
































// #include <stdio.h>

// int main() {
//     char str1[20],str2[20];
//     int i=0,j=0,r=0;
//     printf("Enter a string: ");
//     gets(str1);
//     printf("Enter a string: ");
//     gets(str2);
//     while(str1[i]!='\0' && str2[i]!='\0'){
//         if(str1[i]!=str2[i]) {
//             break;
//         }
//         i++;
//     }
//     r=str1[i]-str2[i];
//     if(r>0){
//         printf("%s is greater than %s\n",str1,str2);
//     }
//     else if(r<0){
//         printf("%s is greater than %s\n",str2,str1);
//     }
//     else {
//         printf("%s and %s are equal\n",str1,str2);
//     }
// }






// #include <stdio.h>

// int main() {
//     char str1[20],str2[20];
//     int i=0,j=0,r=0;
//     printf("Enter a string: ");
//     gets(str1);
//     printf("Enter a string: ");
//     gets(str2);
//     while(str1[i]!='\0' && str2[j]!='\0'){
//         if(str1[i]!=str2[j]) {
//             break;
//         }
//         i++,j++;
//     }
//     r=str1[i]-str2[j];
//     if(r>0){
//         printf("%s is greater than %s\n",str1,str2);
//     }
//     else if(r<0){
//         printf("%s is greater than %s\n",str2,str1);
//     }
//     else {
//         printf("%s and %s are equal\n",str1,str2);
//     }
// }



























#include<stdio.h>
int main()
{
char str[20], temp;
int i=0,j=0;
printf("Enter a string");
gets(str);
while (str[j]!='\0') {
  j++;
}
j-=1;
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