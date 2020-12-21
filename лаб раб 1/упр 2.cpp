#include <stdio.h>
#include <math.h>
int main(void) {
float x,y,s,a,b,c,d,e,z;
printf("enter x,y and z:");
scanf("%f%f%f",&x,&y,&z);
printf("\nx=%f",x);
printf("\ny=%f",y);
printf("\nz=%f",z);
a=cos(x)-cos(y);
b=fabs(a);
c=1+(2*sin(y)*sin(y));
d=pow(b,c);
e=1+(pow(z,2)/2)+(pow(z,3)/3)+(pow(z,4)/4)+z;
s=d*e;

printf("\ns=%f",s);

}

