#include <stdio.h>
#include <math.h>
#include <string.h>

int a(char *b){
    int k,s=0,i;
    k=strlen(b)-1;
    for(i=0;b[i]!='\0';++i)
    {
        if(b[i]=='1')
            s+= pow(2,k);
        --k;
    }
    return s;
}

int main(){
    char b[1000];
    printf("¬ведите двоичное число\n");
    scanf("%s", b);
    printf("%d\n",a(b));
    return 0;
}
