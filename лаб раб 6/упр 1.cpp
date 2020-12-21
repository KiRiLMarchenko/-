#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(){

int *prt,*z,i,n,max,a,k,pr;
a=0;
k=0;
do{
printf("vvedite kol-vo elementov massiva (<30)\n");
scanf("%d",&n);
}while (n>=30);

if(!(prt=(int*)malloc(n*sizeof(int)))){
puts("Not enough memory");
getch();
return;
}
if(!(z=(int*)malloc(4*sizeof(int)))){
puts("Not enough memory");
getch();
return;
}
for(i=0;i<n;i++)
{
printf("vvedite element[%d]\n",i+1);
scanf("%d",prt+i);
}
printf("\nMassiv:\n");
for(i=0;i<n;i++)
printf("%d ",*(prt+i));

max=*prt;
for(i=0;i<n;i++)
if(*(prt+i)>max) max=*(prt+i);

printf("\nmax=[%d]",max) ;
*(z)=0;
*(z+1)=n-1;
for(i=0;i<n;i++)
if(*(prt+i)==0){
*(z+k)=i;
a=a+1;
k=k+1;

}
pr=1;
if(a>=2){
printf("\n1 zero-[%d],2 zero-[%d]",*z,*(z+1));
for(i=*z+1;i<*(z+1);i++){
pr=pr*(*(prt+i));
}}

else if(a==1){
printf("\n1 zero-[%d],2 zero-[no]",*z);
for(i=*z+1;i<=*(z+1);i++){
pr=pr*(*(prt+i));
}}

else {
printf("\n1 zero-[no],2 zero-[no]");
for(i=*z;i<=*(z+1);i++){
pr=pr*(*(prt+i));
}}

printf("\nproizvedenie=[%d]",pr);

}
