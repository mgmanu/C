#include<stdio.h>
#include<math.h>
int main() {
    typedef float f;
    f x1,x2,y1,y2,dist,opr;
    printf("Enter co-ordinates of 1st point(x1,y1): ");
    scanf("%f%f",&x1,&y1);
    printf("Enter co-ordinates of 2nd point(x2,y2): ");
    scanf("%f%f",&x2,&y2);
    opr=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    dist=sqrt(opr);
    printf("DISTANCE BETWEEN TWO POINTS IS : %.2f UNITS\n",dist);
}


