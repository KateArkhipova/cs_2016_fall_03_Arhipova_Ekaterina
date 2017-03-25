#include <stdio.h>
#include<locale.h>
main()
{
    setlocale(LC_ALL,"Rus");
    float a,b;
    char sign='+';
    while (sign != '0')
    {
        printf("Знак: ");
        scanf("%c%*c", &sign);
        if (sign == '0')
        {
            break;
        }
        if (sign == '+' || sign == '-' || sign == '*' || sign == '/' || sign == '%' || sign == '^')
        {
            printf("a=");
            scanf("%f%*c", &a);
            printf("b=");
            scanf("%f%*c", &b);
            switch (sign)
            {
            case '+':
                printf("%.2f\n", a+b);
                break;
            case '-':
                printf("%.2f\n", a-b);
                break;
            case '*':
                printf("%.2f\n", a*b);
                break;
            case '/':
                if (b != 0) printf("%.2f\n", a/b);
                else printf("Делить на ноль нельзя\n");
            case '%':
                printf("a процентов от b\n");
                printf("%.2f\n", (a*b)*0.01);
                break;
            case '^':
                printf("a в степени b\n");
                printf("%.2f\n", pow(a,b));
                break;
            }
        }
        else
            printf("Неверно указан знак операции\n");
    }
}
