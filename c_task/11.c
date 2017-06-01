#include <stdio.h>
#include <math.h>
#include <string.h>

int StringTransform(char *x)
{

	int i, j, p = 0;
	j = strlen(x) - 1;
	for (i = 0; x[i] != '\0'; ++i)
	{
		if (x[i] == '1')
			p = p + pow(2, j);
		j--;
	}
	return p;
}
void main(void)
{
	char S[100];
	printf("number: ");
	gets(S);
	printf("%d\n", StringTransform(S));
}
