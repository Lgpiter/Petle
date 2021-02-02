#include <stdio.h>

int main()
{
    char pom[26];
    char literka = 'a'; 
    
    for (int i = 0; i < 26; i++)
    {
        pom[i] = literka;
        literka++;
    }
    
    for (int j = 0; j < 26; j++)
    {
        printf("%c\n",pom[j]);
    }
}
