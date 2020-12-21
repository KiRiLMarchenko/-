#include <stdio.h>
#include <math.h>

int main()
{
int i,j,n,m,kol,c;

n=4;
m=3;
kol=0;
c=-1;
float b[4][3];
float a[3]={0,0,0};
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{
printf("введите элемент [%d,%d]\n",i+1,j+1);
scanf("%f",&b[i][j]);
}

printf("ваша матрица:\n");
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
printf("\nКоличество строк, которые имеют хотя бы один нулевой элемент:%d",kol);

for(j=0;j<m;j++){
c=c+1;
if(b[1][j]=b[2][j]=b[3][j]) a[c]=3;
else if(b[1][j]=b[2][j]&&b[2][j]b[3][j])
a[c]=2;
else a[c]=0;
}

}
