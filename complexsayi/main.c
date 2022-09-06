#include <stdio.h>
#include <stdlib.h>

struct complex
{
    float reel;
    float imag;
};

int main(void)
{

    struct complex s1, s2, sonuc;

    printf("1. karmasik sayinin reel kismini giriniz: ");
    scanf("%f", &s1.reel);

    printf("1. karmasik sayinin imaginary kismini giriniz: ");
    scanf("%f", &s1.imag);

    printf("2. karmasik sayinin reel kismini giriniz: ");
    scanf("%f", &s2.reel);

    printf("2. karmasik sayinin imaginary kismini giriniz: ");
    scanf("%f", &s2.imag);

    sonuc.reel=s1.reel+s2.reel;
    sonuc.imag=s1.imag+s2.imag;

    printf("Karmasik sayilarin toplami: %.2lf%+.2lfi",sonuc.reel,sonuc.imag);

    return 0;
}

