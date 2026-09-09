// #include <stdio.h>
// #include <string.h>
// #define MAX 100
// #define FILENAME "students.txt"
// typedef struct {
//     int id;
//     char name[50];
//     float marks;
// } Student;

// // Function declarations
// void inputStudents(Student students[], int n);
// void writeToTextFile(Student students[], int n, const char *filename);
// int readFromTextFile(Student students[], int max, const char *filename);
// void printStudents(Student students[], int n);

// // Main
// int main() {
//     int n;

//     printf("Enter the size: ");
//     scanf("%d",&n);
//     if (n<=0) {
//         printf("Invalid input\n");
//         return 0;
//     }
//     Student students[MAX];
//     // Input
//     inputStudents(students,n);

//     // Write to file
//     writeToTextFile(students,n,FILENAME);
//     // Read from file
//     int count = readFromTextFile(students,MAX,FILENAME);    
//     // Output
//     printf("\n--- Students read from ASCII file ---\n");
//     printStudents(students,count);

//     return 0;
// }

// // Function to take input
// void inputStudents(Student students[], int n) {
//     for(int i=0;i<n;i++){ 
//         printf("\nEnter details for student %d:\n", i+1);

//         printf("Enter ID: ");
//         scanf("%d",&students[i].id);
//         printf("Enter Name: ");
//         scanf("%s",students[i].name);
        
//         printf("Enter Marks: ");
//         scanf("%f",&students[i].marks);
//     }

// }

// // Write to text file
// void writeToTextFile(Student students[], int n, const char *filename) {
//     FILE *fp = fopen(filename,"w");
//     if(fp==NULL){  
//         printf("Error opening file for writing\n");
//         return;
//     }
//     for(int i=0;i<n;i++){
//         fprintf(fp,"%d %s %.2f\n",students[i].id,students[i].name,students[i].marks);
//     }
//     fclose(fp);
 
// }

// // Read from text file
// int readFromTextFile(Student students[], int max, const char *filename) {
//     FILE *fp = fopen(filename,"r");
//     if(fp==NULL){ 
//         printf("Error opening file for reading\n");
//         return 0;
//     }
//     int i=0;
//     while(i<max && fscanf(fp,"%d %s %f",&students[i].id,students[i].name,&students[i].marks)!=EOF){
//         i++;
//     }
//     fclose(fp);
//     return i;
// }

// // Print students
// void printStudents(Student students[], int n) {
//     for(int i=0;i<n;i++){ 
//         printf("%d %s %.2f\n",students[i].id,students[i].name,students[i].marks);
//     }
// }

























#include <stdio.h>
#define FILENAME "studentsbin.dat"
#define MAX 100

typedef struct {
    int id;
    char name[50];
    float marks;
} Student;

// Function declarations
void inputStudents(Student students[], int n);
void writeToBinaryFile(Student students[], int n, const char *filename);
int readFromBinaryFile(Student students[], const char *filename);
void printStudents(Student students[], int n);

// Main
int main() {
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
    if(n<=0) {
        printf("Invalid input\n");
        return 0;
    }
    Student students[MAX];
    // 1. Input
    inputStudents(students,n);
    // 5. Write to binary file
    writeToBinaryFile(students,n,FILENAME);
    // 6. Read from binary file
    int count = readFromBinaryFile(students,FILENAME);

    // 7. Print read data
    printf("\n--- Students read from Binary file ---\n");
    printStudents(students,count);
    return 0;
}

// Read input (UPDATED with printf statements)
void inputStudents(Student students[], int n) {
    for(int i=0;i<n;i++){ 
        printf("\nEnter details for student %d:\n", i+1);

        printf("Enter ID: ");
        scanf("%d",&students[i].id);
        printf("Enter Name: ");
        scanf("%s",students[i].name);
        
        printf("Enter Marks: ");
        scanf("%f",&students[i].marks);
    }


}

// Write to binary file
void writeToBinaryFile(Student students[], int n, const char *filename) {
    FILE *fp = fopen(filename,"wb");
    if(fp==NULL){ 
    printf("Error opening binary file for writing.\n");
    return;
    }
    fwrite(students,sizeof(Student),n,fp);
    fclose(fp);
}

// Read from binary file
int readFromBinaryFile(Student students[], const char *filename) {
    FILE *fp = fopen(filename,"rb");
    if(fp==NULL){ 
        printf("Error opening binary file for reading.\n");
        return 0;
    }
    int count = fread(students,sizeof(Student),MAX,fp);
    fclose(fp);
    return count;
}

// Print students
void printStudents(Student students[], int n) {
    
 for(int i=0;i<n;i++){ 
         printf("%d %s %.2f\n",students[i].id,students[i].name,students[i].marks);
}
}
