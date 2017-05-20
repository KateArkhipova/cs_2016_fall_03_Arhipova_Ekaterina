/*
f(x)=sin(x^2+2x)
*/
/*
компилировать g++
*/
#include<stdio.h>
#include<locale.h>
#include<math.h>

double f(double a)
{
	return sin(a*a+2*a);
}

void diffForThreePoint(double a1, double a2, double b)
{
	double ai = (-3*f(a1)+4*f(a1+b)-f(a1+2*b))/(2*b);
	printf("\n Таблица:\n");
	printf("%.2lg \t",ai);
	while (a1<a2)
	{
		ai=(f(a1+2*b)-f(a1))/(2*b);
		printf("%.2lg \t",ai);
		a1=a1+b;
	}
	ai=(f(a2-2*b)-4*f(a2-b)+3*f(a2))/(2*b);
	printf("%.2lg \n\n",ai);
}

void diffForSimpson(double x, double y, double e) //
{
	double I=e+1, I1=0;
	int N;
	for (N=2; (N<=4)||(fabs(I1-I)>e); N*=2)
	{
		double b, sum2=0, sum4=0, sum=0;
		b=(y-x)/(2*N);
		int i;
		for (i=1; i<=2*N-1; i+=2)
		{
			sum4+=f(x+b*i);
			sum2+=f(x+b*(i+1));
		}
		sum=f(x)+4*sum4+2*sum2-f(y);
		I=I1;
		I1=(b/3)*sum;
	}
	printf("\n Answer: %lg\n\n",I);
}

int main()
{
	setlocale(LC_ALL,"Russian");
	int c=1;
	double x, y, e;
	double a1, a2, b;
	while (c!=48)
	{
		puts("**********************************************");
		puts("Выбор методa:");
		puts(" 1. Численное дифференцирование по трем точкам");
		puts(" 2. Численное интегрирование методом Симпсона");
		puts(" 3. Отчистка");
		puts(" 0. Конец");
		puts("----------------------------------------------");
		c = getchar();
		switch(c)
		{
			case 49:
				puts("Введите a1:");
				scanf("%lg",&a1);
				puts("Введите a2:");
				scanf("%lg",&a2);
				puts("Введите b:");
				scanf("%lg",&b);
				diffForThreePoint(a1, a2, b);
				break;
			case 50:
				puts("Введите x:");
				scanf("%lg",&x);
				puts("Введите y:");
				scanf("%lg",&y);
				puts("Введите точность:");
				scanf("%lg",&e);
				diffForSimpson(x,y,e);
				break;

		}
	}
	return 0;
}
