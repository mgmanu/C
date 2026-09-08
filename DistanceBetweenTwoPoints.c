#include<stdio.h>
#include<math.h>
typedef struct Distance {
    float x;
    float y;
} P;
int main() {
    P p1,p2;
    float dist;
    printf("Enter the co-ordinates(x1,y1): ");
    scanf("%f%f",&p1.x,&p1.y);
    printf("Enter the co-ordinates(x2,y2): ");
    scanf("%f%f",&p2.x,&p2.y);
    dist=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    printf("Distance: %.2f",dist);

}