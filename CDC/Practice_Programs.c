// #include <stdio.h>

// int main(){
//     int l,b;
//     scanf("%d %d",&l,&b);
//     int area = l*b;
//     int perimeter = 2*(l+b);
//     printf("Area = %d\n",area);
//     printf("Perimeter = %d\n",perimeter);
// }



// #include <stdio.h>

// int main(){
//     int a,b,temp;
//     scanf("%d %d",&a,&b);
//     printf("Before: a = %d, b = %d\n",a,b);
//     temp = a;
//     a = b;
//     b = temp;
//     printf("After: a = %d, b = %d\n",a,b);
// }






// #include <stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int sum = a+b+c;
//     float average = (float)sum/3;
//     printf("Sum = %d\n",sum);
//     printf("Average = %.2f\n",average);
// }





// #include <stdio.h>

// int main(){
//     int s;
//     scanf("%d",&s);
//     int hours = s/3600;
//     int minutes = hours*60;
//     printf("%d seconds = %d h %d m %d s\n",s,hours,minutes,s);
// }




// #include <stdio.h>

// int main(){
//     char c;
//     scanf(" %c",&c);
//     printf("Character : %c\n",c);
//     printf("ASCII code : %d\n",c);
//     printf("Next char : %c",c+1);
// }









// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     if(n%2==0 && n<0) printf("Even\nNegative");
//     else if(n%2==0 && n>0) printf("Even\nPositive");
//     else if(n%2!=0 && n<0) printf("Odd\nNegative");
//     else printf("Odd\nPositive");
// }






// #include <stdio.h>

// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b){
//         if(a>c) printf("Largest = %d\n",a);
//         else printf("Largest = %d\n",c);
//     }
//     else{
//         if(b>c) printf("Largest = %d\n",b);
//         else printf("Largest = %d\n",c);
//     }
// }







// #include <stdio.h>

// int main(){
//     int m;
//     scanf("%d",&m);
//     if(m>=90 && m<=100) printf("Grade S\n");
//     else if(m>=80 && m<=89) printf("Grade A\n");
//     else if(m>=70 && m<=79) printf("Grade B\n");
//     else if(m>=40 && m<=69) printf("Grade D\n");
//     else if(m>0 && m<40) printf("Fail\n");
//     else if(m<0 || m>100) printf("INVALID\n");
// }







// #include<stdio.h>

// int main()
// {
//     int year;
//     scanf("%d",&year);
//     if((year%4==0 && year%100!=0) || year%400==0) printf("%d is a leap year\n",year);
//     else printf("%d is not a leap year\n",year);
// }







// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<11;i++) printf("%d x %d = %d\n",n,i,n*i);
// }









// #include<stdio.h>

// int main(){
//     int N;
//     scanf("%d",&N);
//     int value,even=0,odd=0,evensum=0,oddsum=0;

//     for(int i=0;i<N;i++){
//         scanf("%d",&value);

//         if(value%2==0) {
//             even++;
//             evensum+=value;
//         }
//         else {
//             odd++;
//             oddsum+=value;
//         }
//     }
//     printf("Even count = %d, Even sum = %d\n",even,evensum);
//     printf("Odd count = %d, Odd sum = %d\n",odd,oddsum);
// }







// #include<stdio.h>

// int main(){
//     int N;
//     int sum=0;
//     long long fact = 1;
//     scanf("%d",&N);
//     for(int i=1;i<=N;i++) {
//         sum+=i;
//         fact*=i;
//     }
//     printf("Sum of first %d numbers = %d\n",N,sum);
//     printf("Factorial of %d = %lld\n",N,fact);

// }










// #include<stdio.h>

// int main(){
//     int n,temp,rem=0,rev=0;
//     scanf("%d",&n);
//     temp=n;
//     while(temp!=0){
//         rem = temp%10;
//         rev = rev*10+rem;
//         temp/=10;
//     }
//     printf("Reversed = %d\n",rev);
//     if(n==rev) printf("PALINDROME\n");
//     else printf("NOT PALINDROME\n");
// }









// #include<stdio.h>

// int main(){
//     int n,temp,rem=0,digitcount=0,digitsum=0;
//     scanf("%d",&n);
//     temp=n;
//     if(temp<0){
//         temp = -temp;
//     }
//     if(temp==0){
//         printf("Digit count = 1\n"); 
//         printf("Digit sum = 0\n"); 
//     }
//     else{
//     while(temp>0){
//         rem = temp%10;
//         digitcount++;
//         digitsum+=rem;
//         temp/=10;
//     }
//     printf("Digit count = %d\n",digitcount); 
//     printf("Digit sum = %d\n",digitsum);
// }
// }








// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     int i=2,flag=0;
//     while(i<=N/2)
//     {
//     if(N%i==0)
//     {
//     flag=1;
//     break;
//     }
//     i++;
//     }
//     if(N<2)
//     printf("%d is not prime\n",N);
//     else if(flag==1)
//     printf("%d is not prime\n",N);
//     else
//     printf("%d is prime\n",N);
//     printf("Primes up to %d: ",N);
//     for(int num=2;num<=N;num++)
//     {
//     int j=2,isPrime=1;
//     while(j<=num/2)
//     {
//     if(num%j==0)
//     {
//     isPrime=0;
//     break;
//     }
//     j++;
//     }
//     if(isPrime==1)
//     printf("%d ",num);
//     }
//     printf("\n");
//     return 0;
// }










// #include <stdio.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);

//     int arr[N];

//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     int largest = arr[0];
//     int second = arr[0];

//     for (int i = 1; i < N; i++)
//     {
//         if (arr[i] > largest) largest = arr[i];
//     }
//     for (int i = 1; i < N; i++)
//     {
//         if (arr[i] > second && arr[i]!=largest) second = arr[i];  
//     }
    
//     printf("Largest = %d\n", largest);
//     printf("Second largest = %d\n", second);

    
// }








// #include<stdio.h>

// int main(){
//     int a=10,b=20;
//     int c = a++ + b++ + ++a + b++;
//     printf("%d",c);
// }









// #include <stdio.h>
// #include <stdbool.h>
// int main(){
//     int a = 10;
//     float b = 4.5;
//     char c = 'C';
//     bool d = true;
//     double e = 4.56565;
//     printf("Integer: %d\n",a);
//     printf("Decimal: %f\n",b);
//     printf("Character: %c\n",c);
//     printf("Bool: %d\n",d);
//     printf("Double: %lf\n",e);
// }







// #include<stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter 3 numbers to compare: ");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a>b){
//         if(a>c) printf("%d\n",a);
//         else printf("%d\n",c);
//     }
//     else{
//         if(b>c) printf("%d\n",b);
//         else printf("%d\n",c);
//     }
// }











// #include<stdio.h>

// int main(){
//     int a,b,c;
//     printf("Enter 3 numbers to compare: ");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a>b && a>c){
//         printf("%d\n",a);
//     }
//     else if(b>c){
//         printf("%d\n",b);
//     }
//     else{
//         printf("%d\n",c);
//     }
// }










// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int f_code;
//     int guests;
//     int days;

//     scanf("%d",&days);
//     scanf("%d",&f_code);
//     scanf("%d",&guests);

//     float base=0,rebate=0,guest_total=0,net=0;

//     if(days == 0) {
//         printf("NO CHARGE\n");
//         exit(0);
//     }
//     if(f_code>3) {
//         printf("INVALID PLAN\n");
//         exit(0);
//     }

//     if(f_code==1){
//         base = 110*days;
//     }
//     else if(f_code==2){
//         base=145*days;
//     }
//     else{
//         base=170*days;
//     }

//     if(days>=25){
//         rebate = 0.05*base;
//     }

//     guest_total = guests*90;

//     net = base-rebate+guest_total;

//     printf("Base (Rs): %.2f\n",base); 
//     printf("Rebate (Rs): %.2f\n",rebate); 
//     printf("Guest total (Rs): %.2f\n",guest_total); 
//     printf("Net (Rs): %.2f\n",net); 
// }
















// #include<stdio.h>

// int main(){
//     char c;
//     scanf(" %c",&c);

//     if(c>='a' && c<='z') printf("Lower Case\n");
//     else if(c>='A' && c<='Z') printf("Upper Case\n");
//     else if(c>='0' && c<='9') printf("Number\n");
//     else printf("Special Character\n");
// }












// #include <stdio.h>

// int main(){
//     int N;
//     int val;
//     float sum=0;
//     scanf("%d",&N);

//     for(int i=1;i<=N;i++){
//         scanf("%d",&val);

//         sum+=val;

//     }
//     float avg = (float)sum/N;

//     printf("Total: %.2f\n",sum);
//     printf("AVG: %.2f\n",avg);
// }       













// #include<stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);

//     while(a%b!=0){
//         int c=a%b;
//         a=b;
//         b=c;
//     }
//     printf("\nHCF: %d\n",b);
// }












// #include<stdio.h>


// int main(){
//     int n,rem=0,rev=0;
//     scanf("%d",&n);
//     int org=n;
//     while(n!=0){
//         rem=n%10;
//         rev=rev*10+rem;
//         n/=10;
//     }
    
//     if(org==rev) printf("Palindrome\n");
//     else printf("Not a Palindrome");
// }









// #include<stdio.h>
// #include<math.h>

// int main(){
//     int n,rem=0,rev=0;
//     scanf("%d",&n);
//     int org=n;
//     int temp=n;
//     int count=0;
//     while(n!=0){
//         rem=n%10;
//         count++;
//         n/=10;
//     }
//     int sum=0;

//     while(temp!=0){
//         rem=temp%10;
//         sum+=pow(rem,count);
//         temp/=10;
//     }
//     if(sum==org) printf("Armstrong\n");
//     else printf("Not an Armstrong\n");
// }










// #include<stdio.h>

// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int hcf;
//     int small;
//     if(a<b) small=a;
//     else small=b;
//     for(int i=1;i<=small;i++){
//         if(a%i==0 && b%i==0){
//             hcf = i;            
//         }
//     }
//     printf("\nHCF: %d\n",hcf);
// }











// #include<stdio.h>
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     int i=2,flag=0;
//     while(i<=N/2){
//         if(N%i==0){
//             flag=1;
//             break;
//         }
//         i++;
//     }

//     if(N<2) printf("%d is not prime\n",N);
//     else if(flag==1) printf("%d is not prime\n",N);
//     else printf("%d is prime\n",N);

//     printf("Primes up to 100: ");
//     for(int num=2;num<=100;num++){
//         int j=2,isPrime=1;
//         while(j<=num/2){
//             if(num%j==0){
//                 isPrime=0;
//                 break;
//             }
//             j++;
//         }

//     if(isPrime==1) printf("%d ",num);
//     }
//     printf("\n");
//     return 0;
// }



























// #include<stdio.h>


// void print(int n){
//     if(n==0) return;
//     printf("%d ",n);
//     print(n-1);
//     if(n==1) return;
//     printf("%d ",n);
// }

// int main(){
//     print(10);
// }










// #include<stdio.h>


// int cdigits(int n){
//     if(n==0) return 0;
//     return 1+cdigits(n/10);
// }

// int main(){
//     int ans = cdigits(12345);
//     printf("%d",ans);
// }













// #include <stdio.h>

// int reverse(int n, int rev)
// {
//     if (n == 0) return rev;
//     return reverse(n / 10, rev * 10 + n % 10);
// }
// int main()
// {
//     int n, result;

//     result = reverse(12312, 0);

//     printf("Reverse = %d", result);
// }












// #include <stdio.h>

// int func(int n){
//     int sum=0;
//     if (n==0) return 0; 
//     sum = sum + func(n-1);
//     return sum; 
// }
// int main(){
//     int ans = func(5);
//     printf("%d",ans);
// }









// #include<stdio.h>

// int fib(int n){
//     if(n<=0) return 0;
//     return fib(n-1)+fib(n-2);
// }



// int main(){


//     int ans = fib(5);
//     printf("%d",ans);
// }











