#include <stdio.h>
#include <math.h>

int main()
{
int i,j,kol,h;
double n,m;
h=0;
n=4;
m=3;
kol=0;
int c1,c2,c3;
float b[4][3];
int a[3]={0,0,0};
c1=c2=c3=0;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
printf("������� ������� [%d,%d]\n",i+1,j+1);
scanf("%f",&b[i][j]);
}

printf("���� �������:\n");
for(i=0;i<n;i++){
printf("\n ");
for(j=0;j<m;j++)
{
printf(" %.2f",b[i][j]);

}}
for(i=0;i<n;i++){

for(j=0;j<m;j++){

if(b[i][j]==0) {
kol=kol+1;j=3;}

}}
printf("\n\n���������� �����, ������� ����� ���� �� ���� ������� �������:%d",kol);

for(j=0;j<m;j++){

if(b[0][j]==b[1][j]&&b[1][j]==b[2][j]&&b[2][j]==b[3][j]) a[h]=4;
else if(b[0][j]==b[1][j]&&b[1][j]==b[2][j]||b[1][j]==b[2][j]&&b[2][j]==b[3][j]) a[h]=3;
else if(b[0][j]==b[1][j]||b[1][j]==b[2][j]||b[2][j]==b[3][j]) a[h]=2;
else a[h]=0;
h=h+1;

}

printf("\n���-�� ���������� ��������� ������ � 1 �������: %d\n���-�� ���������� ��������� ������ � 2 �������: %d\n���-�� ���������� ��������� ������ � 3 �������: %d",a[0],a[1],a[2]);
}
