#include <stdio.h>
struct stud {
    int rollno;
    char name[100];
    float marks;
};
int main() {
    int n,i;
    struct stud s[100];
    printf("Enter number of students: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Enter Roll Number: ");
        scanf("%d",&s[i].rollno);
        printf("Enter Name: ");
        scanf("%s",s[i].name);
        printf("Enter Marks: ");
        scanf("%f",&s[i].marks);
    }
    printf("Printing all Student Details\n");
    for(i=0;i<n;i++) {
        printf("Details of student %d\n ", i+1);
        printf("Roll Number : %d\n",s[i].rollno);
        printf("Name : %s\n",s[i].name);
        printf("Marks : %.2f\n",s[i].marks);
    }
}