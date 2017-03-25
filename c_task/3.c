#include <stdio.h>
#include<locale.h>
int main()
{
   setlocale(LC_CTYPE,"Russian");
    float a, b, c;
    printf("Введите сопротвиления: ");
    scanf("%f %f",&a,&b);
    c=a*b/(a+b);
    printf("%f\n",c);
    return 0;
}
