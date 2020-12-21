#include <stdio.h>
#include <math.h>

void main()
{
float m,r,a;
int y;
a=1.04;
y=0;
printf("enter r,m:");
scanf("%f%f",&r,&m);
printf("\nr=%f",r);
printf("\nm=%f",m);
while (r<m){
r=r*a;
y++;
printf("\nr=%f",r);
printf("\nm=%f",m);
printf("\ny=%d",y);
}
