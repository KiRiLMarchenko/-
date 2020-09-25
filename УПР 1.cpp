	#include <stdio.h>
	#include <math.h>
	int main(void)
	{
    float x, y;
    printf("Enter x:");
    scanf("%f\n", &x);
    y = 4 * x * x * x;
    printf("y=%.2f\n", y);
    return 0;
}
