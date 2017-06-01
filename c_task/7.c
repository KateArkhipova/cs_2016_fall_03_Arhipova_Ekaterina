#include <stdio.h>


int main()
{
	float x, a, b, y;
	char c;
	int i;
	scanf("%f%c%f", &a, &c, &b);
	switch (c)
	{
		case '+':
			y = a + b;
			break;
		case '-':
			y = a - b;
			break;
		case '*':
			y = a * b;
			break;
		case '/':
			if (b == 0)
			{
				printf("Error");
			}
			else
			{
				y = a / b;
			}
			break;
		case '^':
			x = a;
			if (b != 0)
			{
				for ( i = 1; i < b; i++)
				{
					a *= x;
				}
				y = a;
				break;
			}
			else
				y = 1;
			break;
		case '%':
			y = 0.01*a*b;
	}
	printf("%f\n\n", y);
	return 0;
}
