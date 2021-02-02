#include <stdio.h>

int main()
{
    char pom = 'F';
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf ("%c",pom);
            pom--;
        }
        printf ("\n");
        pom = 'F';
    }
}
