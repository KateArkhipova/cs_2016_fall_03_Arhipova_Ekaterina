#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
	char *Str, Max;
	int Len, i;

	printf("Maximum string length: ");
	scanf("%d", &Len);
	getchar();

	Str = (char*)malloc(Len + 1);

	printf("Your string: ");
	gets(Str);

	Max = Str[0];

	for (i = 1;i < strlen(Str);i++)
		if (Str[i] > Max)
			Max = Str[i];

	printf("Asnwer: %c\n", Max);

	free(Str);

	return 0;
}
