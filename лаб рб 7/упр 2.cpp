#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x[50];
void vvod(int x[50], int n1);
int vivod(int x[50], int n1);
int k(int x[50], int n1);
int main(){
int n;

printf("vvedite n\n");
scanf("%d", &n);
vvod(x, n);
vivod(x, n);
k(x, n);
}
void vvod(int x[50], int n1)
{ int z;
for (z=0;z<n1;z++){
printf("Vvedite element [%d]\n", z+1);
scanf("%d",&x[z]);
}
}
int vivod(int x[50], int n1)
{ int z;

printf("\n");
for (z=0;z<n1;z++) {
printf(" %d ", x[z]);

}
}
int k(int x[50], int n1){
int z,k,p=0;
printf("\nVvedite chislo ");
scanf("%d",&k);
for (z=0;z<n1;z++) {
if(k==x[z]) p++;
}
printf("\n[%d]\n",p);

}
