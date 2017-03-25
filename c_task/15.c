#include <stdio.h>
#include <string.h>
#include <malloc.h>

int main()
{
	char *Str;
	int Length, i = 1, j;

	printf("Max length of string: ");
	scanf("%d", &Length);
	getchar();

	Str = (char*)malloc(Length);

	gets(Str);

	for (i;i < strlen(Str);i++)
		if (Str[i] == Str[i - 1])
		{
			for (j = i;j < strlen(Str);j++)
				Str[j] = Str[j + 1];
			--i;
		}

	puts(Str);


	free(Str);
	return 0;
}
