#include <stdio.h>

int main()
{
    int ile_wyrazow;
    printf ("Podaj liczbe wyrazow, ktore chcesz zsumowac: ");
    scanf ("%d", &ile_wyrazow);
    float suma = 0;
    for (int i = 1; i <= ile_wyrazow; i++)
    {
        suma += 1./i;
    }
    printf ("Suma szeregu o wzorze 1/n i ilosci wyrazow %d jest rowna %f\n",ile_wyrazow, suma);
    
    float sumav2 = 0;
    for (int i = 1; i <= ile_wyrazow; i++)
    {
        if (i % 2 != 0)
            sumav2 += 1./i;
        else
            sumav2 -= 1./i;
    }
    printf ("Suma szeregu o wzorze (-1)^(n+1)/n i ilosci wyrazow %d jest rowna %f\n",ile_wyrazow, sumav2);
}
