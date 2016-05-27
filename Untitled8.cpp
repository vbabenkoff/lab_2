#include <stdio.h>
#include <math.h>

int main()
{
	float n, dodanok, suma = 0;
	int i = 0;
	
	printf("\nVvedite n: ");
	scanf("%f", &n);
	
	for (dodanok = n; dodanok >= 0.0001; i++, n++) {
		dodanok = (1 / pow(2, n)) + (1 / pow(3, n));
		suma += (1 / pow(2, n)) + (1 / pow(3, n));
		printf("\n%f", dodanok);	
	}
	
	printf("\nKoli4estvo iteraciy = %d", i);
	printf("\nSuma = %f\n", suma);
	
	return 0;
}
