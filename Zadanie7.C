#include <stdio.h>

int main()
{
    float pom1,pom2,suma;
    int stan;
    printf ("Podaj dwie liczby zmienno przcinkowe: \n");
    printf ("Wpisz q, aby zakonczyc swoj program\n");

    stan = scanf("%f %f",&pom1,&pom2);
    printf ("%d\n", stan);
    
    while (stan == 2)
    {
        suma = (pom1 - pom2)/(pom1*pom2);
        printf ("Wartosc ilorazu roznicy tych liczb przez ich iloczyn to %f\n",suma);
        printf ("Podaj dwie liczby zmienno przcinkowe: \n");
        printf ("Wpisz q, aby zakonczyc swoj program\n");
        stan = scanf("%f %f",&pom1,&pom2);
    }
}
