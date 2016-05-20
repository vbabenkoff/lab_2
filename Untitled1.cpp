#include <stdio.h>

int pros (int n);

int main ()
{
	int n, zn, i;
	printf("\nVvedite n: ");
	scanf("%d", &n);
	
	zn = pros(n);
	if (zn == 1) {
		printf("\nVashe 4islo prostoe.");
	} else {
		printf("\nVashe shislo ne prostoe.");
	}
	
	printf("\nProstie 4isla < %d:", n);
	for (i = 1; i < n; i++) {
		zn = pros(i);
		if (zn == 1)
			printf(" %d", i);
	}
	
	return 0;
}

int pros (int n)
{
	int i = 2, zalishok;
	while (i < n) {
		zalishok = n%i;
		if (zalishok == 0)
			return 0;
		i++;
	}
	return 1;
}
