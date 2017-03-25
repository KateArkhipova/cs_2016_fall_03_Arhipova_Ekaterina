#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Rus");
    float a, b, c;
    printf("¬ведите комплексные сопротивлени€: ");
    scanf("%f %f",&a,&b);
    c=a*b/(a+b);
    printf("%f\n",c);
    return 0;
}
