#include <stdio.h>
#include <math.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL,"Rus");
    float a, b, c, x, y, d, x1;
    printf("Введите коэффиценты: ");
    scanf("%f %f %f",&a,&b,&c);
    d=b*b-4*a*c;
    if (d<0)
    {
        printf("Отрицательный дискриминант");
    }
    else
    {
        x1=sqrt(d);
        x=(-b+x1)/(2*a);
        y=((-b-x1)/(2*a));
        if(d==0)
        {
            printf("%f\n",x);
        }
        else
        {
            printf("%.2f\n",x);
            printf("%.2f\n",y);
        }
    }
    return 0;
}
