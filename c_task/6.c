#include <stdio.h>
#include <math.h>

unsigned long int Factorial(unsigned long int a)
{
	if (!a)
		return 1;
	else 
		return a*Factorial(a - 1);
}

void main()
{
	unsigned long int a;

	printf("Your number: ");
	scanf("%d", &a);
	if (a < 0)
	{
		printf("\nIncorrect input.\n");
		return;
	}

	printf("\nAnswer: %d\n", Factorial(a));

	getchar();
}
