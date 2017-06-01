#include <stdio.h>

int main()
{
	int day = 21, month = 8;
	int a = day;
	printf("%i.0%i\n", day, month);
	day = month;
	month = a;
	printf("0%i.%i\n", day, month);
	return 0;
}
