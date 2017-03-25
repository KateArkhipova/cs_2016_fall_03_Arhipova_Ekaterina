#include <stdio.h>
#include<locale.h>
int main ()
{
    setlocale(LC_ALL,"Rus");
    int biggest = 0, a;
    while ((a = getchar()) != EOF)
    {
        if ( a > biggest)
            biggest = a;
    }

    printf("%s%c%3d\n","Наибольший ASCII код: ", biggest, biggest);
    return 0;
}

