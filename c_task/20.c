#include <string.h>
#include <stdio.h>


char *encode(char word[],char *res, char key[])
{   int i;
    for (i = 0; i < strlen(word)-1; i++)
        res[i] = word[i] ^ key[i];

    return res;

}

int main()
{
    char *word = "Andrew";
    char* res = malloc(strlen(word)*sizeof(*res));
    printf("%s", encode(word, res, "BsFGgE"));
    free(res);
    return 0;
}


