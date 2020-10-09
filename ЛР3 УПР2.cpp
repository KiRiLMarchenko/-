	#include <stdio.h>
	#include <locale.h>
	int main()
	{
		float c1,c2;
		setlocale(LC_ALL,"RUSSIAN");
		printf("Введите количество литров в первом и втором сосуде ");
		scanf("%f %f\n",&c1,&c2);
		for(int i=1;i<=6;i++)
		{	
			c2=c2+c1/2;
			c1=c1/2;
			c1=c1+c2/2;
			c2=c2/2;
		}
		printf("Первый сосуд-%f\n Второй сосуд-%f\n",c1,c2);
		return 0;
	}
