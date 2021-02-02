#include <stdio.h>
#include <string.h>

int main()
{
    char slowo[40];
    printf ("Podaj slowo: ");
    scanf ("%s",slowo);
    int dlugosc = strlen(slowo);
    char pom;
    
    for (int i = 0; i <= (dlugosc)/2; i++)
    {
        pom = slowo[i];
        slowo[i] = slowo[dlugosc-i];
        slowo[dlugosc - i] = pom;
    }
    
    for (int j=0; j<=dlugosc; j++)
    {
        printf ("%c",slowo[j]);
    }
    
    printf("\n");
}
