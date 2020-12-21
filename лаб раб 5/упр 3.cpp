#include <stdio.h>
#include <math.h>

int main()
{
int i,j,a,buf;
double n,m;
a=0;
n=4;
m=3;

float b[4][3];

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
for(i=0;i<n||a<1;i++){
if(b[i][0]>=b[i][1]&&b[i][1]>=b[i][2]) {
printf("\nэлементы в %d строке расположены по убыванию",i);
buf=b[i][0];
b[i][0]=b[i][2];
b[i][2]=buf;
break;

}


}
printf("\nваша новая матрица:\n");
for(i=0;i<n;i++){
printf("\n ");
for(j=0;j<m;j++)
{

printf(" %.2f",b[i][j]);

}}



}
