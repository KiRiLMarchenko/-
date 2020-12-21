#include <stdio.h>
#include <math.h>

int main()
{
int x,y,x1,y1,x2,y2,R,a,b;

printf("Enter x,y,x1,y1:");
scanf("%d%d%d%d",&x,&y,&x1,&y1);
printf("\nX:%d\nY:%d\nX1:%d\nY1:%d",x,y,x1,y1);

a=((x1-x)*(x1-x)+(y1-y)*(y1-y));
R=sqrt(a);
printf("\nRADIUS:%d",R);
printf("\nEnter x2,y2:");
scanf("%d%d",&x2,&y2);
printf("\nX2:%d\nY2:%d",x2,y2);
b=((x2-x)*(x2-x)+(y2-y)*(y2-y));

if(R==sqrt(b))printf("\nYes");
else printf("\nNo");

}
