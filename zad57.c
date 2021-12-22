// Program ce izracunat Volumen valjka.

#include<stdio.h>
#include <stdlib.h>
#define PI 3.14
//Funkcija za izracunavanje volumena valjka
int volumen(int radijus, int visina)
{
	float volumen;
	volumen=(float)PI*radijus*radijus*visina;
    return volumen;
}
  

int main()
{
    int radijus;
    int visina;
    printf("Unesi radijus i visinu\n");
    scanf("%d %d",&radijus,&visina);
    // Poziv funkcije.
    float x= volumen(radijus, visina);
    printf("Volumen valjka je: %.2f",x);
    return 0;
}
