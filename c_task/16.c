#include <stdio.h>
#include <math.h>
#include <string.h>


void CustomStrncpy(char *a, char*b, int N);
void CustomStrncat(char *a, char *b, int N);
int CustomStrncmp(char *a, char *b, int N);

int main()
{
	char *a, *b;
	int N, Len, ForMenu = 1;

	printf("Maximum string length: ");
	scanf("%d", &Len);

	a = (char*)malloc(Len + 1);
	b = (char*)malloc(Len + 1);

	while (ForMenu)
	{
		printf("\nChoose action:\n");
		printf("1. Strncpy.\n");
		printf("2. Strncat.\n");
		printf("3. Strncmp.\n");
		printf("4. Exit.\n");
		printf("Your decision: ");
		scanf("%d", &ForMenu);
		getchar();
		
		if ((ForMenu < 1) || (ForMenu > 4))
		{
			printf("Incorrect value. Try again.\n");
			ForMenu = 1;
			continue;
		}

		if (ForMenu == 1)
		{
			printf("First string: ");
			gets(a);
			printf("Second string: ");
			gets(b);
			printf("n=");
			scanf("%d", &N);
			CustomStrncpy(a, b, N);
			printf("First string: ");
			puts(a);
			printf("Second string: ");
			puts(b);
		}

		if (ForMenu == 2)
		{
			printf("First string: ");
			gets(a);
			printf("Second string: ");
			gets(b);
			printf("n=");
			scanf("%d", &N);
			CustomStrncat(a, b, N);
			printf("First string: ");
			puts(a);
			printf("Second string: ");
			puts(b);
		}

		if (ForMenu == 3)
		{
			printf("First string: ");
			gets(a);
			printf("Second string: ");
			gets(b);
			printf("n=");
			scanf("%d", &N);
			printf("Answer: %d\n", CustomStrncmp(a, b, N));
		}

		if (ForMenu == 4)
			break;
	}

	free(a);
	free(b);
	return 0;
}

void CustomStrncpy(char *a, char*b, int N)
{
	int i;

	for (i = 0;(i < N) && (i < strlen(b));i++)
		if (a[i] == '\0')
		{
			a[i + 1] = '\0';
			a[i] = b[i];
		}
		else
			a[i] = b[i];
}

void CustomStrncat(char *a, char *b, int N)
{
	int i, S;

	for (i = 0; (i < N) && (i < strlen(b));i++)
	{
		S = strlen(a);
		a[S + 1] = '\0';
		a[S] = b[i];
	}
}

int CustomStrncmp(char *a, char *b, int N)
{
	int i;

	for (i = 0;i < N;i++)
	{
		if (a[i] == b[i])
			continue;

		if (a[i] > b[i])
			return 1;
		else
			return -1;
	}

	return 0;
}
