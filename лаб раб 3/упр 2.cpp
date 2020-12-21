#include <stdio.h>
#include <math.h>

void main()
{
float x,y,a;

printf("Enter C1,C2:");
scanf("%f%f",&x,&y);
printf("\n%f",x);
printf("\n%f",y);
for(a=0;a<=6;a++)
{
y=y+(x/2);

x=x/2;

x=x+(y/2);

y=y/2;

}
printf("\nпосле 12-ти переливаний...");
printf("\nПервый сосуд:%f",x);
printf("\nВторой сосуд:%f",y);
}
