	#include <stdio.h>
	#include <math.h>
	#include <stdlib.h>
	int main (void)
	{
	 float x,y,b,z,s,mod,step,rep;
	printf("Enter  z,y,x:\n" );
	scanf("%f%f%f\n",&z,&y,&x);
	b=1+z+z*z/2+z*z*z/3+z*z*z*z/4;
	step=1+2*sin(y)*sin(y);	
	rep=fabs(cos(x)-cos(y));
	mod=pow(rep,step);
	s=mod*b;
	printf("%f.4\n",s);
	return 0;
	}
