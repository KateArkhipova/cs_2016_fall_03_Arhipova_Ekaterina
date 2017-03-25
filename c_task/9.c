#include <stdio.h>
#include <locale.h>

int fib(int n);

int main(){
    setlocale(LC_CTYPE, "Russian");
int n;
int lower, upper, a;
lower = 0;
upper = n;
printf("Пожалуйста, введите число N:\n");
scanf("%d", &n);
int i;
for (i=1;i<n+1;i++){
printf("%d ", i);
}
printf("\n");
for( i=1; i<n+1; i++){
a = fib(i);
printf("%d ", a);
}
printf("\n");
return 0;
}

int fib(int n){
int answer;
if(n==1) return(1);
if(n==2) return(1);
answer = fib(n-2) + fib(n-1);
return(answer);
}
