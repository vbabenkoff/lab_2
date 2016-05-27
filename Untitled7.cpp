#include <stdio.h>

int main ()
{
	int max;
	double i, sum = 1, factorial;
	printf("\nI_max= ");
	scanf("%d", &max);

	factorial = 2;
	
	for (i = 2; i <= max; i++) {
		factorial *= i;
		sum *= (1 - (1 / factorial)) * (1 - (1 / factorial));
	}
	printf("\n\nSuma = %lf", sum);
	
	return 0;
}
