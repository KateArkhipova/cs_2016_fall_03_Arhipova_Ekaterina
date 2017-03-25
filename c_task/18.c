#include <stdio.h>
#include <stdlib.h>

void copy(char *c,char *d)
{ char str[100];
FILE *C,*D;
C=fopen(c,"r");
D=fopen(d,"w");
char i;
while((i=fgetc(C))!=EOF)
{
fputc(i,D);
}
}
int main()
{
char e[100],f[100];
gets(e);
gets(f);
copy(e,f);
return 0;
}
