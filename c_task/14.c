#include <stdio.h>
#include <locale.h>

void swap(char s1[150])
{
    int i,n;
    char s2[150];
    n=strlen(s2);

    for (i=0; i<n+1; i++)
        s2[i]=s1[n-i];

    for (i=0; i<n+1; i++)
        printf("%c", s2[i]);

    return;
}

int main()
{   setlocale(LC_CTYPE, "Russian");
    printf("Введите три символа:");
    char s1[150],s2[150];
    int i,n;
    gets(s1);

    swap(s1);

    return 0;
}
