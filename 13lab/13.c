#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int get_random()
{
    return rand()%20;
}

int main()
{
    srand(time(NULL));
    
    int massivA[10];
    int massivB[10];
    for(int i=0; i<10; i++)
    {
        massivA[i] = get_random();
        massivB[i] = get_random();
        printf("%5i %5i\n", massivA[i], massivB[i]);
        
    }

int temp;
int temp1;

for(int i = 10-1; i >= 0; i--)
{
for(int j= 0; j<i; j++)
 {
    if(massivA[j] > massivA[j + 1])
    {
        temp = massivA[j];
        massivA[j] = massivA[j + 1];
        massivA[j + 1] = temp;
    }
  }
}
for(int i = 10-1; i >= 0; i--)
{
for(int j= 0; j<i; j++)
 {
    if(massivB[j] < massivB[j + 1])
    {
        temp1 = massivB[j];
        massivB[j] = massivB[j + 1];
        massivB[j + 1] = temp1;
    }
  }
}
printf("sorted array\n");
for(int i = 0; i<10; i++)
printf("%5d %5d\n",massivA[i],massivB[i]);

int newmassiv[20];
int k = 0;
for(int i = 0; i<10; i++)
newmassiv[k++] = massivA[i];
for(int i = 0; i<10; i++)
newmassiv[k++] = massivB[i];
printf("full newmassiv\n");
for(int i = 0; i<20; i++)
printf("%8d\n",newmassiv[i]);

int temp2;

for(int i = 20-1; i >= 0; i--)
{
for(int j= 0; j<i; j++)
 {
    if(newmassiv[j] > newmassiv[j + 1])
    {
        temp2 = newmassiv[j];
        newmassiv[j] = newmassiv[j + 1];
        newmassiv[j + 1] = temp2;
    }
  }
}
printf("last massiv\n");
for(int i = 0; i<20; i++)
printf("%8d\n", newmassiv[i]);
return 0;
}