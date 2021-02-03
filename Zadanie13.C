#include <stdio.h>

#define wklad 100

int main()
{
    float oprocentowanie_Ewy = 0.01;
    float oprocentowanie_Kasi = 0.05;
    float kapital_Ewy = wklad;
    float kapital_Kasi = wklad;
    
    int i = 0;
    while (kapital_Ewy >= kapital_Kasi)
    {
        i++;
        kapital_Ewy += wklad;
        kapital_Kasi *= 1.05;
        printf("Kapital EWY po %d roku to: %.2f\n",i,kapital_Ewy);
        printf("Kapital KASI po %d to :%.2f \n",i ,kapital_Kasi);
    }
}
