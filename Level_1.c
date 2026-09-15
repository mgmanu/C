// #include<stdio.h>

// void input(float *length,float *width) {
//     printf("Enter length: ");
//     scanf("%f",length);
//     printf("Enter width: ");
//     scanf("%f",width);
// }
// float area(float l,float b){
//     float ar;
//     ar=l*b;
//     return ar;
// }
// void display(float are) {
//     printf("Result = %.2f",are);
// }

// int main() {
//     float length,width,are;
//     input(&length,&width);
//     are=area(length,width);
//     display(are);
// }






// #include<stdio.h>

// float input() {
//     float v;
//     printf("Enter value: ");
//     scanf("%f",&v);
//     return v;
// }
// float area(float l,float b){
//     return l*b;
// }
// void display(float are) {
//     printf("Result = %.2f",are);
// }

// int main() {
//     float i,j,ar;
//     i=input();
//     j=input();
//     ar=area(i,j);
//     display(ar);
// }
















// #include <stdio.h>
// int main(){
//     float l,b,ar;
//     printf("Enter length: ");
//     scanf("%f",&l);
//     printf("Enter breadth: ");
//     scanf("%f",&b);
//     ar=l*b;
//     printf("AREA=%.2f\n",ar);
// }




// #include <stdio.h>
// float area(float len,float brd){
//     float ar;
//     ar=len*brd;
//     return ar;
// }
// int main(){
//     float l,b,r;
//     printf("Enter length: ");
//     scanf("%f",&l);
//     printf("Enter breadth: ");
//     scanf("%f",&b);
//     r=area(l,b);
//     printf("AREA=%.2f\n",r);
// }









// #include<stdio.h>

// int input(){
//     int x;
//     printf("Enter the value: ");
//     scanf("%d",&x);
//     return x;
// }
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int output(int a,int b){
//     printf("After swapping a & b are: %d %d",a,b);
// }

// int main(){
//     int n1,n2;
//     n1=input();
//     n2=input();
//     printf("Before swapping a & b are: %d %d",n1,n2);
//     swap(&n1,&n2);
//     output(n1,n2);
// }
    












// #include <stdio.h>

// /* Function prototypes */
// void input(int *a, int *b);
// void swap(int *a, int *b);
// void output(int *a, int *b);

// int main() {
//     int num1, num2;

//     /* Call input function */
//     input(&num1, &num2);

//     printf("Before swapping in main: %d %d\n", num1, num2);

//     /* Call swap function */
//     swap(&num1, &num2);

//     printf("After swapping in main: %d %d\n", num1, num2);

//     /* Call output function */
//     output(&num1, &num2);

//     return 0;
// }

// void input(int *a, int *b) {
//     printf("Enter first number:\n");
//     scanf("%d", a);

//     printf("Enter second number:\n");
//     scanf("%d", b);
// }

// void swap(int *a, int *b) {
//     int temp;

//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void output(int *a, int *b) {
//     printf("Final swapped values: %d %d\n", *a, *b);
// }





















// #include <stdio.h>

// /* Function prototypes */
// void input(int *units, float *rate);
// float calculate_bill(int units, float rate);
// void output(float total_bill);

// int main() {
//     int u;
//     float r, bill;

//     input(&u, &r);

//     bill = calculate_bill(u, r);

//     output(bill);

//     return 0;
// }

// void input(int *units, float *rate) {
//     printf("Enter total units consumed:\n");
//     scanf("%d", units);

//     printf("Enter rate per unit:\n");
//     scanf("%f", rate);
// }

// float calculate_bill(int units, float rate) {
//     float tot_bill;
//     tot_bill = units * rate;
//     return tot_bill;
// }

// void output(float total_bill) {
//     printf("Total electricity bill is: %.2f\n", total_bill);
// }























// #include <stdio.h>

// typedef struct {
//     float l;
//     float w;
//     float ar;
// } Rectangle;

// void input(int n,Rectangle rects[n]){
//     int i;
//     for(i=0;i<n;i++) {
//         printf("Enter the len and wid of rectangle : %d\n",i+1);
//         scanf("%f%f",&rects[i].l,&rects[i].w);
//     }
// }

// void calculate_area(int n, Rectangle rects[n]){
//     int i;
//     for(i=0;i<n;i++) {
//         printf("AREA OF RECTANGLE: %d\n",i+1);
//         rects[i].ar = rects[i].l*rects[i].w;
//         printf("%.2f\n",rects[i].ar);
//     }
// }

// int findLargestArea(int n, Rectangle rects[n]) {
//     int i;
//     int large = rects[0].ar;
//     for(i=1;i<n;i++) {
//         if(rects[i].ar>large){
//             large=rects[i].ar;
//         }
//     }
//     return i+1;
// }

// void output(int largestIndex, Rectangle rects[]);
// int main() {
//     int n;
//     int lg;
//     printf("Enter the number of rectangles: ");
//     scanf("%d",&n);
//     Rectangle rects[n];
//     input(n,rects);
//     calculate_area(n,rects);
//     lg = findLargestArea(n,rects);

// }














// #include<stdio.h>
// #include<math.h>

// struct point{
//     float x;
//     float y;
// };

// struct point input() {
//     struct point p;
//     printf("Enter co-ordinates(x,y): ");
//     scanf("%f%f",&p.x,&p.y);
//     return p;
// }

// float distance(struct point p1,struct point p2) {
//     float d;
//     d = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
//     return d;
// }

// void display(float r,struct point p1,struct point p2){
//     printf("Distance between (%f,%f) to (%f,%f) is : %.2f\n",p1.x,p1.y,p2.x,p2.y,r);
// }
// int main() {
//     struct point p1,p2;
//     float r;
//     p1=input();
//     p2=input();
//     r=distance(p1,p2);
//     display(r,p1,p2);    

// }






// #include<stdio.h>
// #include<math.h>

// struct point{
//     float x;
//     float y;
// };

// void input(struct point *p) {
//     printf("Enter co-ordinates(x,y): ");
//     scanf("%f%f",&p->x,&p->y);
// }

// float distance(struct point p1,struct point p2) {
//     float d;
//     d = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
//     return d;
// }

// void display(float r,struct point p1,struct point p2){
//     printf("Distance between (%f,%f) to (%f,%f) is : %.2f\n",p1.x,p1.y,p2.x,p2.y,r);
// }
// int main() {
//     struct point p1,p2;
//     float r;
//     input(&p1);
//     input(&p2);

//     r=distance(p1,p2);
//     display(r,p1,p2);    

// }































// #include <stdio.h>
// #include <string.h>

// typedef struct {
//     int flight_number;
//     char destination[50];
//     int available_seats;
// } Flight_t;

// void readFlights(int n, Flight_t f[]);
// void searchByDestination(int n, Flight_t f[], char searchDest[]);

// int main() {
//     int n;
//     char searchDest[20];
//     printf("Enter the number of flights: ");
//     scanf("%d",&n);
//     Flight_t flights[n];
//     readFlights(n, flights);

//     printf("Enter the destination: ");
//     scanf("%s",searchDest);
//     searchByDestination(n, flights, searchDest);

//     return 0;
// }

// void readFlights(int n, Flight_t f[]) {
//     int i;
//     for(i=0;i<n;i++){
//         printf("Enter the details of Flight %d:\n",i+1);
//         printf("Enter flight number: ");
//         scanf("%d",&f[i].flight_number);
//         printf("Enter flight destination: ");
//         scanf("%s",f[i].destination);
//         printf("Enter available seats: ");
//         scanf("%d",&f[i].available_seats);
//     }
// }

// void searchByDestination(int n, Flight_t f[], char searchDest[]) {
//     int i,found=0;
//     for(i=0;i<n;i++) {
//         if((strcmp(f[i].destination,searchDest)==0)){
//     printf("Flight available: %d\n",f[i].flight_number);
//     found=1;
//         }
//     }
//     if(found==0){
//     printf("No flight available");
//     }

// }









// #include <stdio.h>

// /* Function Prototypes */
// void input(int n, float arr[n]);
// int find_max_index(int n, float arr[n]);
// void output(float arr[], int max_index);

// int main() {

//     int n, ind;

//     printf("Enter the number of elements: \n");
//     scanf("%d",&n);

//     if (n <= 0) {
//         printf("Invalid number of elements.");
//         return 0;
//     }

//     float array[n];

//     printf("Enter the array elements:\n");
//     input(n,array);

//     ind = find_max_index(n,array);

//     output(array,ind);

//     return 0;
// }

// void input(int n, float arr[n]) {

//     int i;

//     for(i=0;i<n;i++){
//         printf("Element %d: ",i);
//         scanf("%f",&arr[i]);
//     }
//     printf("\n");

// }

// int find_max_index(int n, float arr[n]) {

//     int i,max=0;

//     for(i=1;i<n;i++){
//         if(arr[i] > arr[max]){
//             max=i;
//         }
//     }

//     return max;
// }

// void output(float arr[], int max_index) {

//     printf("Maximum element is %.2f\n", arr[max_index]);
//     printf("Index of maximum element is %d\n", max_index);

// }



















// #include <stdio.h>

// typedef struct { 
//      char name[50]; 
//      float length; 
//      float width; 
//      float area; 
// } Rectangle; 


// /* Function Prototypes */
// Rectangle input();
// float calculate_area(Rectangle rect);
// void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3);

// int main()
// {
//     Rectangle r1,r2,r3;
//     float ar1,ar2,ar3;

//     printf("Enter details of Rectangle 1\n");
//     r1 = input();

//     printf("\nEnter details of Rectangle 2\n");
//     r2=input();

//     printf("\nEnter details of Rectangle 3\n");
//     r3= input();
    
//     r1.area = calculate_area(r1);
//     r2.area = calculate_area(r2);
//     r3.area = calculate_area(r3);
//     printf("Area of RECTANGLE !: %.2f\n",r1.area);
//     printf("Area of RECTANGLE 2: %.2f\n",r2.area);
//     printf("Area of RECTANGLE 3: %.2f\n",r3.area);

//     compare_areas(r1,r2,r3);

//     return 0;
// }

// /* Function to read rectangle details */
// Rectangle input()
// {
//     Rectangle r;
//     printf("Enter length: ");
//     scanf("%f",&r.length);
//     printf("Enter breadth: ");
//     scanf("%f",&r.width);
//     return r;
// }

// /* Function to calculate area */
// float calculate_area(Rectangle rect)
// {

//     return rect.length*rect.width;

// }

// /* Function to compare areas using else-if ladder */
// void compare_areas(Rectangle r1, Rectangle r2, Rectangle r3)
// {
//     if((r1.area>r2.area) && (r1.area>r3.area)){
//         printf("r1");
//     }
//     else if((r2.area>r1.area) && (r2.area>r3.area)){
//         printf("r2");
//     }
//     else if((r3.area>r1.area) && (r3.area>r2.area)){
//         printf("r3");
//     }
//     else{
//         printf("all equal");
//     }
// }












// #include <stdio.h>

// void read_array(int n, int arr[]);
// void print_array(int n, int arr[]);
// void swap_array(int n, int a[n], int b[n]);

// int main() {
//     int n,N;
//     printf("Enter the size of first array: ");
//     scanf("%d",&n);
//     printf("Enter the size of second array: ");
//     scanf("%d",&N);
//     if(n<=0 || N<=0){
//         printf("Invalid size\n");
//         return 0;
//     }
//     int arr[n];
//     int array[N];
    
//     // Read first array
//     printf("Enter the elements of first array:\n");
//     read_array(n,arr);
    
//     // Read second array
//     printf("Enter the elements of second array:\n");
//     read_array(N,array);
    
//     printf("Printing elements of first array:\n");
//     print_array(n,arr);
//     printf("\nPrinting elements of second array:\n");
//     print_array(N,array);

//     // Swap arrays
//     swap_array(n,arr,array);

//     // Print swapped arrays
//     printf("\nSwapped Array 1st:\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nSwapped Array 2st:\n");
//     for(int i=0;i<N;i++){
//         printf("%d ",array[i]);
//     }
//     return 0;
// }

// void read_array(int n, int arr[]) {
//     // Write code here to read n elements into the array
//     int i;
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
// }

// void print_array(int n, int arr[]) {
//     // Write code here to print array elements separated by space
//     int i;
//     for(i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
// }

// void swap_array(int n, int a[n], int b[n]) {
//     // Write code here to swap elements of arrays a and b
//     int i,temp;
//     for(i=0;i<n;i++){
//         temp=a[i];
//         a[i]=b[i];
//         b[i]=temp;
//     }
// }
























// #include <stdio.h>

// // Function Prototypes
// void inputStrings(char str1[], char str2[]);
// int compareStrings(char str1[], char str2[]);
// void output(int result);

// int main() {
//     char str1[20],str2[20];
//     int r;
//    // Call the function to input the two strings
//     inputStrings(str1,str2);
//    // Call the function to compare the two strings and store the returned value
//    r = compareStrings(str1,str2);
//    // Call the function to display the result
//    output(r);

//     return 0;
// }

// void inputStrings(char str1[], char str2[]) {
//     // Write code to read both strings
//     printf("Enter first string:\n");
//     scanf("%s",str1);
//     printf("Enter second string:\n");
//     scanf("%s",str2);
// }

// int compareStrings(char str1[], char str2[]) {
//     // Write code to compare two strings and return 0, 1, or -1
//     int i=0;
//     while(str1[i]!='\0' && str2[i]!='\0'){
//         if(str1[i]>str2[i]){
//             return 1;
//         }
//         else if(str1[i]<str2[i]){
//             return -1;
//         }
//         i++;
//     }
//     if(str1[i] == '\0' && str2[i] == '\0')
//         return 0;
//     else if(str1[i] == '\0')
//         return -1;
//     else 
//         return 1;

// }

// void output(int result) {
//     printf("%d\n", result);
    
// }

















// #include <stdio.h>

// // Function Prototypes
// void input(char *str);
// void concatenate_strings(char *str1, char *str2);
// void display(char *str);

// int main() {
    
//     char str1[20],str2[20];
//     input(str1);
//     input(str2);
//     concatenate_strings(str1,str2);
//     display(str1);
//     return 0;
// }

// void input(char *str) {
//     // Write code to read the string
//     printf("Enter string:\n");
//     scanf("%s",str);
// }

// void concatenate_strings(char *str1, char *str2) {
//     // Write code to concatenate str2 to str1 using while/do while
//     char str3[20];
//     int i=0,j=0;
//     for( i=0;str1[i]!='\0';i++){
//         str3[i]=str1[i];
//     }
//     for( j=0;str2[j]!='\0';j++){
//         str3[i+j]=str2[j];
//     }
//     str3[ i + j]='\0';
//     i=0;
//     while(str3[i]!='\0'){
//         str1[i]=str3[i];
//         i++;
//     }
//     str1[i]='\0';
// }

// void display(char *str) {
//     printf("Concatenated string:%s\n",str);
//     // Write code to display the string
// }











// #include <stdio.h>

// /* Structure Definition */
// typedef struct{
//     int length;
//     int width;
//     int area;
// }Rectangle;

// /* Function Prototypes */
// void input_rectangles(int n, Rectangle rects[n]);
// void calculate_areas(int n, Rectangle rects[n]);
// void display_areas(int n, Rectangle rects[n]);
// int find_max_index(int n, Rectangle rects[n]);
// void display_max(Rectangle rects[], int max_index);

// int main()
// {
//     int n,res;
    
//     printf("Enter number of rectangles: ");
//     scanf("%d",&n);
//     if(n<=0)
//     {
//         printf("Invalid number of rectangles\n");
//         return 0;
       
//     }
//     Rectangle r[n];
//     input_rectangles(n,r);
//     calculate_areas(n, r);
//     display_areas(n, r);
//     res = find_max_index(n, r);
//     display_max(r,res);


//     return 0;
// }

// /* Function to input rectangle details */
// void input_rectangles(int n, Rectangle rects[n])
// {
//         int i;
//         for(i=0;i<n;i++){
//         printf("Enter length of rectangle %d: ", i+1);
//         // write code
//         scanf("%d",&rects[i].length);

//         printf("Enter width of rectangle %d: ", i+1);
//         // write code
//         scanf("%d",&rects[i].width);
//         }   
//     }

// /* Function to calculate areas */
// void calculate_areas(int n, Rectangle rects[n])
// {
//         // write code to compute area
//         int i;
//         for(i=0;i<n;i++){
//             rects[i].area=rects[i].length*rects[i].width;
//         }
// }

// /* Function to display all areas */
// void display_areas(int n, Rectangle rects[n])
// {
//     printf("\nAreas of rectangles:\n");
//     int i;
//     for(i=0;i<n;i++){

//         printf("Rectangle %d area = %d\n",i+1,rects[i].area);
//     }
// }

// /* Function to find index of rectangle with maximum area */
// int find_max_index(int n, Rectangle rects[n])
// {
   
//         // write condition to update max_index
//         int i,max=0;
//         for(i=1;i<n;i++){
//             if(rects[i].area>rects[max].area){
//                 max=i;
//             }
//         }
//         return max;
   
// }

// /* Function to display rectangle with maximum area */
// void display_max(Rectangle rects[], int max_index)
// {
//     printf("\nRectangle %d has the largest area = %d\n",max_index+1,rects[max_index].area );
// }







































// #include <stdio.h>
// #include <string.h>

// /* Structure Definition */
// typedef struct
// {
//     int flight_number;
//     char destination[50];
//     int available_seats;
// } Flight;

// /* Function Prototypes */
// void input_flights(int n, Flight flights[n]);
// int search_flights(int n, Flight flights[n], char destination[], int result[]);
// void display(int count, int result[], Flight flights[]);

// int main()
// {
//     int n;

//     printf("Enter number of flights: ");
//     scanf("%d", &n);

//     Flight flights[n];

//     input_flights(n, flights);

//     char destination[50];
//     int result[n];

//     printf("\nEnter destination to search: ");
//     scanf("%s", destination);

//     int count = search_flights(n, flights, destination, result);

//     display(count, result, flights);

//     return 0;
// }

// /* Function to input flight details */
// void input_flights(int n, Flight flights[n])
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("\nEnter details of flight %d\n", i + 1);

//         printf("Enter flight number: ");
//         scanf("%d", &flights[i].flight_number);

//         printf("Enter destination: ");
//         scanf("%s", flights[i].destination);

//         printf("Enter available seats: ");
//         scanf("%d", &flights[i].available_seats);
//     }
// }

// /* Function to search flights */
// int search_flights(int n, Flight flights[n], char destination[], int result[])
// {
//     int count = 0;

//     for (int i = 0; i < n; i++)
//     {
//         if (strcmp(flights[i].destination, destination) == 0)
//         {
//             result[count] = i;   // store index
//             count++;
//         }
//     }

//     return count;
// }

// /* Function to display result */
// void display(int count, int result[], Flight flights[])
// {
//     if (count == 0)
//     {
//         printf("No flight available to the given destination\n");
//     }
//     else
//     {
//         printf("Flights available:\n");

//         for (int i = 0; i < count; i++)
//         {
//             int index = result[i];

//             printf("Flight Number: %d\n", flights[index].flight_number);
//             printf("Destination: %s\n", flights[index].destination);
//             printf("Available Seats: %d\n\n", flights[index].available_seats);
//         }
//     }
// }

















































// #include <stdio.h>

// /* Function Prototypes (Pointer version) */
// void read_array(int n, int *arr);
// void swap_arrays(int n, int *arr1, int *arr2);
// void display_arrays(int n, int *arr1, int *arr2);

// int main()
// {
//     int n,i;
//     printf("Enter number of elements: ");
//     scanf("%d",&n);

//     if(n<=0)
//     {
//         printf("Invalid array size\n");
      
//     }
//     int arr1[n];
//     int arr2[n];

//     printf("Enter elements of array 1:\n");
//     read_array(n,arr1);
//     printf("Enter elements of array 2:\n");
//     read_array(n,arr2);
//     /* Before swapping */
//     printf("\nBefore swapping:\n");
//     printf("Array 1:\n");
//     for(i=0;i<n;i++){
//         printf("%d ",arr1[i]);
//     }
//     printf("\nArray 2:\n");
//     for(i=0;i<n;i++){
//         printf("%d ",arr2[i]);
//     }
//     /* Call swap function */
//     // write code
//     swap_arrays(n, arr1, arr2);
    
//     /* After swapping */
//     printf("\nAfter swapping:\n");
//     display_arrays( n,arr1, arr2);
//     return 0;
// }

// /* Function to input array elements */
// void read_array(int n, int *arr)
// {
//     int i;
//     for(i=0;i<n;i++){
//         printf("Enter element at index %d: ",i );
//         scanf("%d",&arr[i]);
// }
// }

// /* Function to swap arrays */
// void swap_arrays(int n, int *arr1, int *arr2)
// {
//     int i,temp;
//     for(i=0;i<n;i++){
//         temp=arr1[i];
//         arr1[i]=arr2[i];
//         arr2[i]=temp;
//     }
// }

// /* Function to display arrays */
// void display_arrays(int n, int *arr1, int *arr2)
// {
//     int i;
//     printf("Array 1:\n");
//     for(i=0;i<n;i++){
//     printf("%d ",arr1[i] );  
// }
//     printf("\nArray 2:\n");
//     for(i=0;i<n;i++){   
//     printf("%d ", arr2[i]);
//     }

// }









































// #include <stdio.h>

// /* Structure Definition */
// typedef struct {
//     int length;
//     int width;
//     int area;
// } Rectangle;

// /* Function Prototypes */
// void input_rectangles(int n, Rectangle rects[]);
// void calculate_areas(int n, Rectangle rects[]);
// int find_max_index(int n, Rectangle rects[]);
// void display(Rectangle rects[], int n, int max_index);

// int main()
// {
//     int n;

//     printf("Enter number of rectangles: ");
//     scanf("%d", &n);

//     /* Input validation */
//     if(n <= 0)
//     {
//         printf("Invalid number of rectangles\n");
//         return 0;
//     }

//     /* Array of structures */
//     Rectangle rects[n];

//     /* Function calls */
//     input_rectangles(n, rects);
//     calculate_areas(n, rects);

//     int max_index = find_max_index(n, rects);

//     display(rects, n, max_index);

//     return 0;
// }

// /* Function to input rectangle details */
// void input_rectangles(int n, Rectangle rects[])
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("Enter length of rectangle %d: ", i + 1);
//         scanf("%d", &rects[i].length);

//         printf("Enter width of rectangle %d: ", i + 1);
//         scanf("%d", &rects[i].width);
//     }
// }

// /* Function to calculate areas */
// void calculate_areas(int n, Rectangle rects[])
// {
//     for(int i = 0; i < n; i++)
//     {
//         rects[i].area = rects[i].length * rects[i].width;
//     }
// }

// /* Function to find index of rectangle with maximum area */
// int find_max_index(int n, Rectangle rects[])
// {
//     int max_index = 0;

//     for(int i = 1; i < n; i++)
//     {
//         if(rects[i].area > rects[max_index].area)
//         {
//             max_index = i;
//         }
//     }

//     return max_index;
// }

// /* Function to display results */
// void display(Rectangle rects[], int n, int max_index)
// {
//     printf("\nAreas of rectangles:\n");

//     for(int i = 0; i < n; i++)
//     {
//         printf("Rectangle %d area = %d\n", i + 1, rects[i].area);
//     }

//     /* Count rectangles with maximum area */
//     int count = 0;

//     for(int i = 0; i < n; i++)
//     {
//         if(rects[i].area == rects[max_index].area)
//         {
//             count++;
//         }
//     }

//     /* If multiple rectangles have same max area */
//     if(count > 1)
//     {
//         printf("\nRectangles with maximum area (%d):\n", rects[max_index].area);

//         for(int i = 0; i < n; i++)
//         {
//             if(rects[i].area == rects[max_index].area)
//             {
//                 printf("Rectangle %d -> Length = %d, Width = %d, Area = %d\n",
//                        i + 1,
//                        rects[i].length,
//                        rects[i].width,
//                        rects[i].area);
//             }
//         }

//         printf("\nFirst rectangle was considered.\n");
//     }
//     else
//     {
//         printf("\nRectangle %d has the largest area\n", max_index + 1);
//         printf("Length = %d, Width = %d, Area = %d\n",
//                rects[max_index].length,
//                rects[max_index].width,
//                rects[max_index].area);
//     }
// }


























// #include <stdio.h>

// /* Structure Definition */
// typedef struct {
//     int length;
//     int width;
//     int area;
// } Rectangle;

// /* Function Prototypes */
// void input_rectangles(int n, Rectangle rects[]);
// void calculate_areas(int n, Rectangle rects[]);
// int find_max_index(int n, Rectangle rects[]);
// void display(Rectangle rects[], int n, int max_index);

// int main()
// {
//     int n;

//     printf("Enter number of rectangles: ");
//     scanf("%d", &n);

//     /* Input validation */
//     if(n <= 0)
//     {
//         printf("Invalid number of rectangles\n");
//         return 0;
//     }

//     /* Array of structures */
//     Rectangle rects[n];

//     /* Function calls */
//     input_rectangles(n, rects);
//     calculate_areas(n, rects);

//     int max_index = find_max_index(n, rects);

//     display(rects, n, max_index);

//     return 0;
// }

// /* Function to input rectangle details */
// void input_rectangles(int n, Rectangle rects[])
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("Enter length of rectangle %d: ", i + 1);
//         scanf("%d", &rects[i].length);

//         printf("Enter width of rectangle %d: ", i + 1);
//         scanf("%d", &rects[i].width);
//     }
// }

// /* Function to calculate areas */
// void calculate_areas(int n, Rectangle rects[])
// {
//     for(int i = 0; i < n; i++)
//     {
//         rects[i].area = rects[i].length * rects[i].width;
//     }
// }

// /* Function to find index of rectangle with maximum area */
// int find_max_index(int n, Rectangle rects[])
// {
//     int max_index = 0;

//     for(int i = 1; i < n; i++)
//     {
//         if(rects[i].area > rects[max_index].area)
//         {
//             max_index = i;
//         }
//     }

//     return max_index;
// }

// /* Function to display results */
// void display(Rectangle rects[], int n, int max_index)
// {
//     printf("\nAreas of rectangles:\n");

//     for(int i = 0; i < n; i++)
//     {
//         printf("Rectangle %d area = %d\n", i + 1, rects[i].area);
//     }

//     /* Count rectangles with maximum area */
//     int count = 0;

//     for(int i = 0; i < n; i++)
//     {
//         if(rects[i].area == rects[max_index].area)
//         {
//             count++;
//         }
//     }

//     /* If duplicates exist */
//     if(count > 1)
//     {
//         printf("\nMultiple rectangles have the same maximum area.\n");

//         printf("Rectangle %d -> Length = %d, Width = %d, Area = %d\n",
//                max_index + 1,
//                rects[max_index].length,
//                rects[max_index].width,
//                rects[max_index].area);

//         printf("First rectangle was considered.\n");
//     }
//     else
//     {
//         printf("\nRectangle %d has the largest area\n", max_index + 1);
//         printf("Length = %d, Width = %d, Area = %d\n",
//                rects[max_index].length,
//                rects[max_index].width,
//                rects[max_index].area);
//     }
// }











































// #include <stdio.h>

// // Function prototypes
// void readString(char *str, int size);
// void removeNewline(char *str);
// int compareStrings(char *str1, char *str2);
// void displayResult(int result);

// int main() {
//     char str1[100], str2[100];
//     int result;

//     // Input
//     printf("Enter first string: ");
//     readString(str1, 100);

//     printf("Enter second string: ");
//     readString(str2, 100);

//     // Pre-processing
//     removeNewline(str1);
//     removeNewline(str2);

//     // Processing
//     result = compareStrings(str1, str2);

//     // Output
//     displayResult(result);

//     return 0;
// }

// // Reads input
// void readString(char *str, int size) {
//     fgets(str, size, stdin);
// }

// // Removes newline
// void removeNewline(char *str) {
//     int i = 0;

//     while (str[i] != '\0') {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//         i++;
//     }
// }

// // Compare two strings (without using strcmp)
// int compareStrings(char *str1, char *str2) {
//     int i = 0;

//     while (str1[i] != '\0' && str2[i] != '\0') {
        
//         if (str1[i] > str2[i]) {
//             return 1;   // str1 greater
//         }
//         else if (str1[i] < str2[i]) {
//             return -1;  // str2 greater
//         }

//         i++;
//     }

//     // If both ended → equal
//     if (str1[i] == '\0' && str2[i] == '\0') {
//         return 0;
//     }
//     // If str1 still has characters → greater
//     else if (str1[i] != '\0') {
//         return 1;
//     }
//     // Else str2 has characters → greater
//     else {
//         return -1;
//     }
// }

// // Displays result
// void displayResult(int result) {
//     if (result == 0)
//         printf("Both strings are equal.\n");
//     else if (result == 1)
//         printf("First string is lexicographically greater.\n");
//     else
//         printf("Second string is lexicographically greater.\n");
// }


































// #include <stdio.h>

// // Function prototypes
// void readString(char *str, int size);
// void removeNewline(char *str);
// void removeLeadingSpaces(char *str);
// int compareStrings(char *str1, char *str2);
// void displayResult(int result);

// int main() {
//     char str1[100], str2[100];
//     int result;

//     // Input
//     printf("Enter first string: ");
//     readString(str1, 100);

//     printf("Enter second string: ");
//     readString(str2, 100);

//     // Pre-processing
//     removeNewline(str1);
//     removeNewline(str2);

//     // Remove leading spaces (IMPORTANT FIX)
//     removeLeadingSpaces(str1);
//     removeLeadingSpaces(str2);

//     // Processing
//     result = compareStrings(str1, str2);

//     // Output
//     displayResult(result);

//     return 0;
// }

// // Reads input
// void readString(char *str, int size) {
//     fgets(str, size, stdin);
// }

// // Removes newline character
// void removeNewline(char *str) {
//     int i = 0;

//     while (str[i] != '\0') {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//         i++;
//     }
// }

// // Removes leading spaces
// void removeLeadingSpaces(char *str) {
//     int i = 0, j = 0;

//     // Skip spaces
//     while (str[i] == ' ') {
//         i++;
//     }

//     // Shift string
//     while (str[i] != '\0') {
//         str[j++] = str[i++];
//     }

//     str[j] = '\0';
// }

// // Compare two strings manually
// int compareStrings(char *str1, char *str2) {
//     int i = 0;

//     while (str1[i] != '\0' && str2[i] != '\0') {

//         if (str1[i] > str2[i]) {
//             return 1;   // first string greater
//         }
//         else if (str1[i] < str2[i]) {
//             return -1;  // second string greater
//         }

//         i++;
//     }

//     // Check remaining characters
//     if (str1[i] == '\0' && str2[i] == '\0')
//         return 0;
//     else if (str1[i] != '\0')
//         return 1;
//     else
//         return -1;
// }

// // Displays result
// void displayResult(int result) {
//     if (result == 0)
//         printf("Both strings are equal.\n");
//     else if (result == 1)
//         printf("First string is lexicographically greater.\n");
//     else
//         printf("Second string is lexicographically greater.\n");
// }
















































// #include <stdio.h>

// /* Structure Definition */
// typedef struct {
//     int length;
//     int width;
//     int area;
// } Rectangle;

// /* Function Prototypes */
// void input_rectangles(int n, Rectangle rects[]);
// void calculate_areas(int n, Rectangle rects[]);
// int find_max_index(int n, Rectangle rects[]);
// void display(Rectangle rects[], int n, int max_index);

// int main()
// {
//     int n;

//     printf("Enter number of rectangles: ");
//     scanf("%d", &n);

//     if(n <= 0)
//     {
//         printf("Invalid number of rectangles\n");
//         return 0;
//     }

//     Rectangle rects[n];

//     input_rectangles(n, rects);
//     calculate_areas(n, rects);

//     int max_index = find_max_index(n, rects);

//     display(rects, n, max_index);

//     return 0;
// }

// /* Input function */
// void input_rectangles(int n, Rectangle rects[])
// {
//     for(int i = 0; i < n; i++)
//     {
//         printf("Enter length of rectangle %d: ", i + 1);
//         scanf("%d", &rects[i].length);

//         printf("Enter width of rectangle %d: ", i + 1);
//         scanf("%d", &rects[i].width);
//     }
// }

// /* Area calculation */
// void calculate_areas(int n, Rectangle rects[])
// {
    //     for(int i = 0; i < n; i++)
//     {
//         rects[i].area = rects[i].length * rects[i].width;
//     }
// }

// /* Find max index */
// int find_max_index(int n, Rectangle rects[])
// {
//     int max_index = 0;

//     for(int i = 1; i < n; i++)
//     {
//         if(rects[i].area > rects[max_index].area)
//         {
    //             max_index = i;
//         }
//     }

//     return max_index;
// }

// /* Display function (using i != max_index logic) */
// void display(Rectangle rects[], int n, int max_index)
// {
//     printf("\nAreas of rectangles:\n");

//     for(int i = 0; i < n; i++)
//     {
//         printf("Rectangle %d area = %d\n", i + 1, rects[i].area);
//     }

//     int same = 0;

//     /* Check duplicates using i != max_index */
//     for(int i = 0; i < n; i++)
//     {
//         if(i != max_index && rects[i].area == rects[max_index].area)
//         {
    //             same = 1;
//             break;
//         }
//     }

//     if(same == 1)
//     {
//         printf("\nMultiple rectangles have the same maximum area.\n");

//         printf("Rectangle %d -> Length = %d, Width = %d, Area = %d\n",
//                max_index + 1,
//                rects[max_index].length,
//                rects[max_index].width,
//                rects[max_index].area);

//         printf("First rectangle was considered.\n");
//     }
//     else
//     {
//         printf("\nRectangle %d has the largest area\n", max_index + 1);

//         printf("Length = %d, Width = %d, Area = %d\n",
//                rects[max_index].length,
//                rects[max_index].width,
//                rects[max_index].area);
//     }
// }


































































// #include <stdio.h>
// #include <stdlib.h>

// /* Function Prototypes */
// int* create_array(int n);
// void initialize_array(int *arr, int n);
// void print_array(int *arr, int n);
// int* add_array(int* arr1,int *arr2,int n);
// void delete_array(int **arr);

// int main()
// {
//     int n;
//     int *arr1;
//     int *arr2;
//     printf("Enter number of elements: ");
//     scanf("%d",&n);
//     if(n<=0){ 
//     printf("Invalid size\n");
//     return 0;
//     }
//     arr1=create_array(n);
//     arr2=create_array(n);
//     /* Allocate memory */
//     if(arr1==NULL || arr2==NULL){ 
//     printf("Memory allocation failed\n");
//     return 0;
//     }

//     /* Initialize array */
//     printf("Enter elements of array 1:\n");
//     initialize_array(arr1,n);
//     printf("\nEnter elements of array 1:\n");
//     initialize_array(arr2,n);

//     /* Print array */
//     printf("\nArray elements 1:\n");
//     print_array(arr1,n);
//     printf("\nArray elements 2:\n");
//     print_array(arr2,n);
    
//     int *result = add_array(arr1,arr2,n);
//     printf("\nArray elements result:\n");
//     print_array(result,n);

//     /* Delete array */
//     delete_array(&arr1);
//     delete_array(&arr2);
//     return 0;
// }

// /* Function to allocate memory */
// int* create_array(int n)
// {
//     int *arr;
//     arr=(int *)malloc(n * sizeof(int));
//     return arr;
// }

// /* Function to initialize array */
// void initialize_array(int *arr, int n)
// {
//     for(int i=0;i<n;i++){ 
//         printf("Enter element at index %d: ", i);
//         scanf("%d",&arr[i]);
//     }
// }

// /* Function to print array */
// void print_array(int *arr, int n)
// {
//     for(int i=0;i<n;i++){ 
//         printf("%d ",arr[i] );
//     }
// }

// int* add_array(int* arr1,int* arr2,int n){
//     int *result=(int *)malloc(n * sizeof(int));
//     for(int i=0;i<n;i++){ 
//         result[i]=arr1[i]+arr2[i];
//     }
//     return result;
// }

// /* Function to delete array */
// void delete_array(int **arr)
// {
//     free(*arr);
//     *arr=NULL;
// }















































































// #include <stdio.h>

// // Function prototypes
// void readString(char *str, int size);
// void removeNewline(char *str);
// void removeLeadingSpaces(char *str);
// int compareStrings(char *str1, char *str2);
// void displayResult(int result);

// int main() {
//     char str1[100], str2[100];
//     int result;

//     // Input
//     printf("Enter first string: ");
//     readString(str1, 100);

//     printf("Enter second string: ");
//     readString(str2, 100);

//     // Pre-processing
//     removeNewline(str1);
//     removeNewline(str2);

//     removeLeadingSpaces(str1);
//     removeLeadingSpaces(str2);

//     // Processing
//     result = compareStrings(str1, str2);

//     // Output
//     displayResult(result);

//     return 0;
// }

// // Read string (with spaces)
// void readString(char *str, int size) {
//     fgets(str, size, stdin);
// }

// // Remove newline '\n'
// void removeNewline(char *str) {
//     int i = 0;
//     while (str[i] != '\0') {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//         i++;
//     }
// }

// // Remove leading spaces
// void removeLeadingSpaces(char *str) {
//     int i = 0, j = 0;

//     while (str[i] == ' ')
//         i++;

//     while (str[i] != '\0') {
//         str[j] = str[i];
//         i++;
//         j++;
//     }

//     str[j] = '\0';
// }

// // Compare strings manually
// int compareStrings(char *str1, char *str2) {
//     int i = 0;

//     while (str1[i] != '\0' && str2[i] != '\0') {

//         if (str1[i] > str2[i])
//             return 1;

//         else if (str1[i] < str2[i])
//             return -1;

//         i++;
//     }

//     // After loop → check equality or length
//     if (str1[i] == '\0' && str2[i] == '\0')
//         return 0;

//     else if (str1[i] != '\0')
//         return 1;

//     else
//         return -1;
// }

// // Display result
// void displayResult(int result) {
//     if (result == 0)
//         printf("Both strings are equal.\n");
//     else if (result == 1)
//         printf("First string is lexicographically greater.\n");
//     else
//         printf("Second string is lexicographically greater.\n");
// }












































































































// #include <stdio.h>

// // Function Prototypes
// void input(char *str);
// void removeNewline(char *str);
// void concatenate_strings(char *str1, char *str2);
// void display(char *str);

// int main() {
//     char str1[100], str2[100];

//     printf("Enter the first string:\n");
//     input(str1);

//     printf("Enter the second string:\n");
//     input(str2);

//     // Remove newline (important)
//     removeNewline(str1);
//     removeNewline(str2);

//     // Concatenate
//     concatenate_strings(str1, str2);

//     // Display result
//     display(str1);

//     return 0;
// }

// // Input function
// void input(char *str) {
//     fgets(str, 100, stdin);
// }

// // Remove newline
// void removeNewline(char *str) {
//     int i = 0;
//     while (str[i] != '\0') {
//         if (str[i] == '\n') {
//             str[i] = '\0';
//             break;
//         }
//         i++;
//     }
// }

// // Concatenate str2 to str1
// void concatenate_strings(char *str1, char *str2) {
//     int i = 0, j = 0;

//     // Move i to end of str1
//     while (str1[i] != '\0') {
//         i++;
//     }

//     // Copy str2 into str1
//     while (str2[j] != '\0') {
//         str1[i] = str2[j];
//         i++;
//         j++;
//     }

//     // Add null character
//     str1[i] = '\0';
// }

// // Display function
// void display(char *str) {
//     printf("Concatenated Result:%s\n", str);
// }






































































// #include <stdio.h>

// // Function prototypes
// void readString(char *str);
// void removeNewline(char *str);
// void removeLeadingSpaces(char *str);
// int compareStrings(char *str1, char *str2); // to be implemented
// void displayResult(int result);

// int main() {

//     int n=100;
//     char str1[n],str2[n];
//     // Input
//     printf("Enter first string: ");
//     readString(str1);
//     printf("Enter second string: ");
//     readString(str2);

//     // Pre-processing
//     removeNewline(str1);
//     removeNewline(str2);

//     removeLeadingSpaces(str1);
//     removeLeadingSpaces(str2);
//     // Processing

//     int result = compareStrings(str1,str2);
//     // Output

//     displayResult(result);

//     return 0;
// }

// // Reads input
// void readString(char *str) {
//     fgets(str,100,stdin);
// }

// // Removes newline
// void removeNewline(char *str) {
//     int i=0;
//     while(str!='\0'){
//         if(str[i]=='\n'){
//             str[i]='\0';
//             break;
//         }
//         i++;
//     }
// }

// void removeLeadingSpaces(char *str) {
//     int i=0;
//     int j=0;
//     while(str[i]==' '){
//         i++;
//     }
//     while(str[i]!='\0'){
//         str[j]=str[i];
//         i++;
//         j++;
//     }
//     str[j]='\0';

// }

// int compareStrings(char *str1, char *str2) {
//     // Write your logic here
//     int i=0;
//     while(str1[i]!='\0' && str2[i]!='\0'){
//         if(str1[i]>str2[i]){
//             return 1;
//         }
//         else if(str1[i]<str2[i]){
//             return -1;
//         }
//         i++;
//     }
//     if(str1[i]!='\0'){
//         return 1;
//     }
//     else if(str2[i]!='\0'){
//         return -1;
//     }
//     else {
//         return 0;
//     }

// }

// // Displays result
// void displayResult(int result) {
    
//     if(result==0){ 
//         printf("Both strings are equal.\n");
//     }
//     else if(result==1){ 
//         printf("First string is lexicographically greater.\n");
//     }
//     else { 
//         printf("Second string is lexicographically greater.\n");
//     }
// }


















































// #include <stdio.h>

// // Function Prototypes
// void input(char *str);
// void concatenate_strings(char *str1, char *str2);
// void display(char *str);

// int main() {
    
//     char str1[100];
//     char str2[100];
//     printf("Enter the first string:\n");
//     // read the first string
//     input(str1);

//     printf("Enter the second string:\n");
//     //read the second string
//     input(str2);
    
//     /*concatenate strings*/
//     concatenate_strings(str1,str2);
//     /*display the concatenated string*/
//     display(str1);
//     return 0;
// }

// void input(char *str) {
//     scanf("%s",str);
//     // Write code to read the string
// }

// void concatenate_strings(char *str1, char *str2) {
//     // Write code to concatenate str2 to str1 using while/do while
//     int i=0,j=0;
//     while(str1[i]!='\0'){
//         i++;
//     }

//     while(str2[j]!='\0'){
//         str1[i]=str2[j];
//         i++;
//         j++;
//     }
//     str1[i]='\0';

// }

// void display(char *str) {
//     printf("Concatenated Result:%s\n",str);
//     // Write code to display the string
// }






















































































































// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_STUDENTS 100

// struct Student {
//     int id;
//     char name[50];
//     float marks;
// };

// /* Function Prototypes */
// int readStudents(struct Student s[]);
// void writeToFile(struct Student s[], int n);
// int readFromFile(struct Student s[]);
// void displayStudents(struct Student s[], int n);

// int main() {

//     struct Student students[MAX_STUDENTS];
//     struct Student fileStudents[MAX_STUDENTS];

//     int n, m;

//     /* Read student details */
//     n = readStudents(students);

//     /* Write data to file */
//     writeToFile(students, n);

//     /* Read data from file */
//     m = readFromFile(fileStudents);

//     /* Display student records */
//     displayStudents(fileStudents, m);

//     return 0;
// }

// /* Read student details from user */
// int readStudents(struct Student s[]) {

//     int n, i;

//     printf("Enter number of students: ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++) {
//         printf("\nEnter details of student %d\n", i + 1);

//         printf("ID: ");
//         scanf("%d", &s[i].id);

//         printf("Name: ");
//         scanf("%s", s[i].name);

//         printf("Marks: ");
//         scanf("%f", &s[i].marks);
//     }

//     return n;
// }

// /* Write student records to file */
// void writeToFile(struct Student s[], int n) {

//     FILE *fp;
//     int i;

//     fp = fopen("students.txt", "w");

//     if(fp == NULL) {
//         printf("Error opening file!\n");
//         return;
//     }

//     for(i = 0; i < n; i++) {
//         fprintf(fp, "%d %s %.2f\n", s[i].id, s[i].name, s[i].marks);
//     }

//     fclose(fp);
// }

// /* Read student records from file */
// int readFromFile(struct Student s[]) {

//     FILE *fp;
//     int count = 0;

//     fp = fopen("students.txt", "r");

//     if(fp == NULL) {
//         printf("Error opening file!\n");
//         return 0;
//     }

//     while(fscanf(fp, "%d %s %f", &s[count].id, s[count].name, &s[count].marks) != EOF) {
//         count++;
//     }

//     fclose(fp);
//     return count;
// }

// /* Display student records */
// void displayStudents(struct Student s[], int n) {

//     int i;

//     printf("\n--- Student Records ---\n");

//     for(i = 0; i < n; i++) {
//         printf("\nStudent %d\n", i + 1);
//         printf("ID: %d\n", s[i].id);
//         printf("Name: %s\n", s[i].name);
//         printf("Marks: %.2f\n", s[i].marks);
//     }
// }







































// #include <stdio.h>

// // Function prototypes
// void readString(char *str, int size);
// void removeNewline(char *str);
// void removeLeadingSpaces(char *str);
// int compareStrings(char *str1, char *str2); // to be implemented
// void displayResult(int result);

// int main() {

//     // Input
//     int size=50;
//     char str1[size],str2[size];
//     printf("Enter first string: ");
//     readString(str1,size);
//     printf("Enter second string: ");
//     readString(str2,size);

//     // Pre-processing
//     removeNewline(str1);
//     removeNewline(str2);

//     removeLeadingSpaces(str1);
//     removeLeadingSpaces(str2);
//     // Processing
//     int result = compareStrings(str1,str2);
//     // Output
//     displayResult(result);
//     return 0;
// }

// // Reads input
// void readString(char *str, int size) {
//     fgets(str,size,stdin);
// }

// // Removes newline
// void removeNewline(char *str) {
//     int i=0;
//     while(str[i]!='\0'){
//         if(str[i]=='\n'){
//             str[i]='\0';
//             break;
//         }
//         i++;
//     }
// }

// void removeLeadingSpaces(char *str){
//     int i=0,j=0;
//     while(str[i]==' '){
//         i++;
//     }
//     while(str[i]!='\0'){
//         str[j]=str[i];
//         i++;
//         j++;
//     }
//     str[j]='\0';
// }

// int compareStrings(char *str1, char *str2) {
//     // Write your logic here
//     int i=0;
//     while(str1[i]!='\0' && str2[i]!='\0'){
//         if(str1[i]>str2[i]){
//             return 1;
//         }
//         else if(str1[i]<str2[i]){
//             return -1;
//         }
//         i++;
//     }
//     if(str1[i]!='\0'){
//         return 1;
//     }
//     else if(str2[i]!='\0'){
//         return -1;
//     }
//     else{
//         return 0;
//     }

// }

// // Displays result
// void displayResult(int result) {
//     if(result==0){ 
//         printf("Both strings are equal.\n");
//     }
//     else if(result==1){ 
//         printf("First string is lexicographically greater.\n");
//     }
//     else{ 
//         printf("Second string is lexicographically greater.\n");
//     }
// }





















#include <stdio.h>

// Function Prototypes
void input(char *str);
void concatenate_strings(char *str1, char *str2);
void display(char *str);

int main() {
    
    char str1[50],str2[50];
    
    input(str1);
    input(str2);

    concatenate_strings(str1,str2);

    display(str1);

    return 0;
}

void input(char *str) {
    printf("Enter string:\n");
    scanf("%s",str);
    // Write code to read the string
}

void concatenate_strings(char *str1, char *str2) {
    // Write code to concatenate str2 to str1 using while/do while
    int i=0;
    int j=0;
    while(str1[i]!='\0'){
        i++;
    }
    while(str2[j]!='\0'){
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';

}

void display(char *str) {
    printf("Concatenated string:\n");
    printf("%s",str);
    // Write code to display the string
}



















