#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(){
int i,j,k,g,n,l,buf,m;
printf("vvedite kol-vlo strok and stolbikov(>0):");
scanf("%d%d",&i,&j);
k=i;
g=j;
int *a;
if(i<=0||j<=0) return;
int b[i][j];
int *p=&b[i][j];
int *f;
printf("%d",i);
printf("%d",j);
n=i*j;
if(!(a=(int*)calloc(k,sizeof(int)))){
puts("Not enough memory");
getch();
return;
}
if(!(f=(int*)malloc(n*sizeof(int)))){
puts("Not enough memory");
getch();
return;
}
if(!(p=(int*)malloc(n*sizeof(int)))){
puts("Not enough memory");
getch();
return;
}
l=0;
for(i=0;i<k;i++){
for(j=0;j<g;j++){
printf("\nvvedite element[%d][%d]=",i,j);
scanf("%d",p + l);
*(f+l)=*(p+l);
l=l+1;}}

printf("\nvash massiv:");
l=0;
for(i=0;i<k;i++){
printf("\n");
for(j=0;j<g;j++){
printf("%d ",*(p + l));
l=l+1;}}

for(i=0;i<n;i++)
for(l=0;l<n-1-i;l++)
if(*(f+l)<*(f+1+l)){
buf=*(f+l);
*(f+l)=*(f+1+l);
*(f+1+l)=buf;
}
for(l=0;l<n-1;l++)
{
if(*(f+l)==*(f+l+1)) break;

}
printf("\nмаксимальное число, которое встречается более 1 раза:%d",*(f+l));

l=-1;
for(i=0;i<k;i++){
for(j=0;j<g;j++){
l=l+1;
if(*(p+l)!=0){
*(a+i)=*(a+i)+1;

}

}}
for(i=0;i<k;i++)
if(*(a+i)==k){
printf("\nВ %d строке отсутствуют нулевые элементы!",i);
m=m+1;
}
else printf("\nВ %d строке присутствуют нулевые элементы!",i);
printf("\n\n\nкол-во строк без нулевых элементов = [%d]",m);
}
