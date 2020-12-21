#include <stdio.h>
#include <math.h>

void main()
{
int a;

printf("\n1-January");
printf("\n2-February");
printf("\n3-March");
printf("\n4-April");
printf("\n5-May");
printf("\n6-June");
printf("\n7-July");
printf("\n8-August");
printf("\n9-September");
printf("\n10-October");
printf("\n11-November");
printf("\n12-December");
printf("\nchoose month: ");
scanf("%d",&a);
switch(a)
{case 1: printf("31"); break;
case 2: printf("28/29"); break;
case 3: printf("31"); break;
case 4: printf("30"); break;
case 5: printf("31"); break;
case 6: printf("30"); break;
case 7: printf("31"); break;
case 8: printf("31"); break;
case 9: printf("30"); break;
case 10: printf("31"); break;
case 11: printf("30"); break;
case 12: printf("31"); break;
default: printf("incorrect value");

}
}
