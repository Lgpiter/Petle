#include <stdio.h>

int main()
{
    char pom;
    printf ("Podaj wielka litere: ");
    scanf ("%c",&pom);
    
    for (int i = 65; i <= pom; i++)
    {
        for (int k = i - 1; k < pom;k++)
        {
                printf(" ");
        }
        
        for (int j = 65; j < i+1; j++)
        {
            printf ("%c",j);
   
        }
        
        for (int j = i - 1; j >= 65; j--)
        {
            printf ("%c",j);
   
        }
          printf ("\n");
    }
}
