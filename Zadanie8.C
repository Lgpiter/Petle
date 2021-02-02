#include <stdio.h>

float obliczanie(float a, float b)
{
    float suma;
    suma = (a - b)/(a*b);
    printf ("Wartosc ilorazu roznicy tych liczb przez ich iloczyn to %f\n",suma);
    printf ("Podaj dwie liczby zmienno przcinkowe: \n");
    printf ("Wpisz q, aby zakonczyc swoj program\n");
    
    return suma;
}

int main()
{
    float pom1,pom2;
    int stan;
    printf ("Podaj dwie liczby zmienno przcinkowe: \n");
    printf ("Wpisz q, aby zakonczyc swoj program\n");

    stan = scanf("%f %f",&pom1,&pom2);
    printf ("%d\n", stan);
    
    while (stan == 2)
    {
        obliczanie(pom1, pom2);
        stan = scanf("%f %f",&pom1,&pom2);
    }
}
