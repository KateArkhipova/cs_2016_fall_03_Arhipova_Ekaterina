#include <stdio.h>
#include <locale.h>


double binom(double * mas, int a)
{
	double b, e;
	int i;
	b = mas[0];
	for (i = 0; i < a; i++)
	{
		if (b < mas[i])
			b = mas[i];
	}
	e = mas[0];
	for (i = 0; i < a; i++)
	{
		if (e > mas[i])
			e = mas[i];
	}
	return b - e;
}

int main()
{
    setlocale(LC_ALL,"Rus");
	int a, i;
	double b;
	printf("Введите количество символов в массиве: ");
	scanf("%i", &a);
	double * mas = (double *)malloc(a*8);
	printf("Введите свой массив: ");
	for (i = 0; i < a; i++)
		scanf("%lf", &mas[i]);
	b = binom(mas, a);
	printf("Разность между наибольшим и наименьшим значениями: %lf\n", b);
	free(mas);
	return 0;
}
