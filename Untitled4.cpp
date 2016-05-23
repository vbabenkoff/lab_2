#include <stdio.h>

int main ()
{
	int min, max;
	double i, sum = 0;
	printf("\nVvedite I_min= ");
	scanf("%d", &min);
	printf("\nI_max= ");
	scanf("%d", &max);
	
	for (i = min; i <= max; i++) {
		sum += 1 / ((2 * i) * (2 * i));
	}
	
	printf("\n\nSuma = %lf", sum);
}
