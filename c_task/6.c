#include <stdio.h>
#include <conio.h>
#include<locale.h>

long int factorial(long int n)
{
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
int main()
{
   setlocale(LC_CTYPE, "Russian");
    long int n;
    printf("Введите число: ");
    scanf("%d", &n);
    if (n >= 0)
        printf("%d! = %d\n", n, factorial(n));
    else
        printf("Число должно быть >= 0\n");
    _getch();
    return 0;
}
