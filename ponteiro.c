#include <stdio.h>
#include <string.h>

char * troca(char *str, char oldLetter,char newLetter);
int main(int argc, char *argv[])
{
    char str[100];
    char newLetter, oldLetter;

    printf("Escreva uma string: ");
    fgets(str, 100, stdin);


    printf("Qual letra sera trocada: ");
    oldLetter = getchar();
    getchar();
    printf("Qual letra substituira: \n");
    newLetter = getchar();

    printf("A string escrita foi: %s\n", str);    printf("A string escrita tornou-se: %s\n", troca(str, oldLetter, newLetter));

    return 0;
}

char * troca(char *str, char oldLetter, char newLetter)
{
    char *inicio = str;

    while(*str != '\0')
    {
        if(*str == oldLetter)
        *str = newLetter;
        str++;
    }
    return inicio;
}
