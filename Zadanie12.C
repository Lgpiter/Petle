#include <stdio.h>

int main()
{
    char pom[100];
    int i = 0;
    char pomv2;
    printf("Wpisz dowolne znaki, a nastepnie wcisnij enter, aby je odwrocic ich kolejnosc: ");
    scanf("%c",&pomv2);
    int ile = 0;
    
    while (pomv2 != '\n')
    {
        pom[i] = pomv2;
        i++;
        ile++;
        scanf("%c",&pomv2);
    }
    
    for (int j = ile; j >= 0; j--)
    {
        printf ("%c",pom[j]);
    }
    
    printf ("\n");
}
