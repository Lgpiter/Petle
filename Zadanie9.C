#include <stdio.h>

int main()
{
    int liczba;
    int tablica[8];
    printf ("Podaj liczbe 8 razy ");
    int i = 0;
    while (scanf("%d",&tablica[i]) == 1)
    {
        i++;
        if (i == 9)
        {
            printf ("Podales za duzo danych\n");
            return 0;
        }
        if (i == 8)
            break;
    }
    
    for (int j = 0; j < 8; j++)
    {
        printf ("%d ", tablica[j]);
    }
    
    printf ("\n");
}
