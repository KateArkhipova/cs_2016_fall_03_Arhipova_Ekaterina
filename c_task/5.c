#include <stdio.h>
int main()
{
    int f, c;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 10;
    c = lower;
    while (c <= upper)
    {
        f= (c * 9 / 5) + 32;
        printf ("%d\t%d\n",c,f);
        c = c + step;
    }
    return 0;
}
