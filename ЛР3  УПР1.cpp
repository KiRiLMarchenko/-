	#include <stdio.h>
	#include <locale.h>
	#include <math.h>
	int main (void)
	{	
		setlocale(LC_ALL,"RUSSIAN");
		float m,r,g;
		printf("Введите переменные r,m ,M>R\n");
		scanf("%f %f\n",&r,&m);
		g=0;
		while(r<=m)
		{	
			r=r+r*0.04;
			g=g+1;
		}
		printf("через %f\n",g);
	
		return 0;	
	}
