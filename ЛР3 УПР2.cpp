	#include <stdio.h>
	#include <locale.h>
	int main()
	{
		float c1,c2;
		setlocale(LC_ALL,"RUSSIAN");
		printf("������� ���������� ������ � ������ � ������ ������ ");
		scanf("%f %f\n",&c1,&c2);
		for(int i=1;i<=6;i++)
		{	
			c2=c2+c1/2;
			c1=c1/2;
			c1=c1+c2/2;
			c2=c2/2;
		}
		printf("������ �����-%f\n ������ �����-%f\n",c1,c2);
		return 0;
	}
