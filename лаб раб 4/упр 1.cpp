 #include <stdio.h>
#include <math.h>

int main()
{
int a[5];
int i;
printf("������� ���� ������...\n");
for(i=0;i<5;i++){
printf("a[%d]= ",i);
scanf("%d",&a[i]);
}
printf("\n��� ������...");
for(i=0;i<5;i++){
printf("%d ",a[i]);

}
if(a[0]>=a[1]&&a[1]>=a[2]&&a[2]>=a[3]&&a[3]>=a[4])printf("\ntrue");
else printf("\nfalse");
return 0;

}
