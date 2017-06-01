#include <stdio.h>

int rightrot(int x, int y)
{
	int i, j;
	i = x >> y;
	j = x << (sizeof(x) * 8 - y);

	return i | j;
}
int main()
{
	int x, y;
	printf("number:");
	scanf("%i", &x);
	printf("move:");
	scanf("%i", &y);
	printf("Result - %i\n", rightrot(x, y));
	return 0;
}
