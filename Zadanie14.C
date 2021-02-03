#include <stdio.h>

int main()
{
    double majatek_poczatkowy = 1000000;
    int lata = 0;
    while (majatek_poczatkowy > 0)
    {
        majatek_poczatkowy *= 1.08;
        lata++;
        majatek_poczatkowy -= 100000;
    }
    printf ("Majatek skonczy sie po %d latach\n",lata);
    
}
