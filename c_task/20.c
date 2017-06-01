#include <stdio.h>
#include <locale.h>


int main()
{
	char shosh[255], key[100];
	int i;
	FILE*k;
	FILE*l;
	int fsize = 0, dsize = 0;
	char * buffer;
	char * dog;
	for (i = 0; i < 255; i++)
		shosh[i] = '\0';
	for (i = 0; i < 100; i++)
		key[i] = '\0';
	printf("Key: ");
	gets(key);
	printf("Way, for example, C:/Papka/file.xls): ");
	gets(shosh);
	for (i = 0; ;i++)
	{
		if (key[i] == '\0') break;
		dsize++;
	}
	k = fopen(shosh, "rb");
	fseek(k, 0, SEEK_END);
	fsize = ftell(k);
	rewind(k);
	buffer = (char *)malloc(fsize);
	fread(buffer, 1, fsize, k);
	fclose(k);
	int index = 0;
	for (i = 0; i < fsize; i++)
	{
		if (index == dsize) index = 0;
		buffer[i] ^= key[index];
		index++;
	}
	l = fopen(shosh, "w");

	fwrite(buffer, 1, fsize, l);

	fclose(l);
	free(buffer);
	printf("that's all\n");
	return 0;
}
