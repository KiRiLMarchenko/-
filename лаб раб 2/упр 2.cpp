#include <stdio.h>
#include <math.h>
int main()
{
float x1,x2,x3,z1,z2,z3,y1,y2,y3,a,b,c;

printf("Enter coordinates A (x1,y1,x2,y2,x3,y3):");
scanf("%f,%f,%f,%f,%f,%f",&x1,&y1,&x2,&y2,&x3,&y3);


a=(x1*x1)+(y1*y1);
b=(x2*x2)+(y2*y2);
c=(x3*x3)+(y3*y3);
z1=sqrt(a);
z2=sqrt(b);
z3=sqrt(c);
printf("\ndistance A:%f",z1);
printf("\ndistance B:%f",z2);
printf("\ndistance C:%f",z3);

if(z1<z2&&z1<z3) printf("\nANSWER: A");
else if(z2<z1&&z2<z3) printf("\nANSWER: B");
else printf("\nANSWER: C");
}
