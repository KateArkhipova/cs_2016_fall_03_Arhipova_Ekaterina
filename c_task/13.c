#include <stdio.h>
#include <conio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Rus");
    int A = 0;
    char b;
    int i;
    printf("Введите слова:");
    while((b = getchar()) != '\n')
    {
        if (b != ' ')
            A++;
        else
        {
            for(i = 0; i < A; i++)
                printf("_");
            printf("\n");
            A= 0;
        }
    }

    for(i = 0; i < A; i++)
        printf("_");
    return 0;
}
