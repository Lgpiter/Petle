#include <stdio.h>

int main()
{
    int gora,dol;
    printf ("Podaj gorna liczbe w tabeli: ");
    scanf ("%d", &gora);
    printf ("Podaj dolna liczbe w tabeli: ");
    scanf ("%d",&dol);
    
    for (gora; gora <= dol; gora++)
    {
        printf("%d%10d%10d\n",gora,gora*gora,gora*gora*gora);
    }
}
