#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x[50][50];
void vvod(int x[50][50], int n1,int m1);
int vivod(int x[50][50], int n1, int m1);
int k(int x[50][50], int n1, int m1);
int main()

{ int n,m;

printf ("vvedite n\n");
scanf ("%d", &n);
printf ("vvedite m\n");
scanf ("%d", &m) ;

vvod(x, n, m);
vivod(x, n, m);
k(x, n, m);
vivod(x, n, m);
}
void vvod(int x[50][50], int n1, int m1)
{ int z,j;
for (z=0;z<n1;z++)
for (j=0;j<m1; j++) {
printf ("Vvedite element [%d,%d]\n", z+1, j+1);
scanf ("%d",&x[z][j]);
}
}
int vivod(int x[50][50], int n1, int m1)
{ int z,j;

printf ("\n");
for (z=0;z<n1;z++) {
for (j=0;j<m1; j++)
printf ("%d ", x[z][j]);
printf ("\n");

}
}
int k(int x[50][50], int n1, int m1){
int l;
int z,j,buf;
int *a;
if(!(a=(int*)calloc(n1,sizeof(int)))){
puts("Not enough memory");
getch();
return 0;
}
l=-1;
for (z=0;z<n1;z++){
l=l+1;
for (j=0;j<m1-1; j++)
if(x[z][j]>x[z][j+1]) *(a+l)=*(a+l)+1;

}

for (l=0;l<n1;l++)
if(*(a+l)==n1-1)
break;

for (j=0;j<m1/2; j++) {
buf=x[l][j];
x[l][j]=x[l][m1-1-j];
x[l][m1-1-j]=buf;}
}
