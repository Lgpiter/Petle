#include <stdio.h>

int main()
{
    int tab[8];
    int wynik = 1;
    int potega;
    for (int i = 0; i < 8; i++)
    {
        potega = 0;
        wynik = 1;
        while (potega != i)
        {
            wynik *= 2;
            potega++;
        }
        tab[i] = wynik;

    }
    
    int j = 0;
    while (j < 8)
    {
        printf ("%d\n",tab[j]);
        j++;
    }
}
