#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int matematik, fizik, kimya, turkce, tarih, muzik;
    double ortalama;
    printf("matematik ortlamanizi giriniz:");
    scanf("%d", &matematik);
    if (matematik<50)
    {
        printf("geçmiş olsun kaldiniz");
    }
    else
    {
        printf("tebrikler geçtiniz");
    }
    printf("fizik ortlamanizi giriniz:");
    scanf("%d", &fizik);
    if (fizik>85)
    {
        printf("karnedeki notunuz A");
    }
    else if(fizik<=85)
    {
        printf("karnedeki notunuz B");
    }
    printf("********************ZOR SINAVLARI GEÇTİNİZ***********************");
    printf("---------------------KALAN SINAVLARI YAPIN----------------------");
    printf("kimya ortlamanizi giriniz:");
    scanf("%d", &kimya);
    if (kimya<50)
    {
        printf("geçmiş olsun kaldiniz");
    }
    else
    {
        printf("tebrikler geçtiniz");
    }
    printf("turkce ortlamanizi giriniz:");
    scanf("%d", &turkce);
    if (turkce<50)
    {
        printf("geçmiş olsun kaldiniz");
    }
    else
    {
        printf("tebrikler geçtiniz");
    }
    printf("tarih ortlamanizi giriniz:");
    scanf("%d", &tarih);
    if (tarih<50)
    {
        printf("geçmiş olsun kaldiniz");
    }
    else
    {
        printf("tebrikler geçtiniz");
    }
    printf("muzik ortlamanizi giriniz:");
    scanf("%d", &muzik);
    if (muzik<50)
    {
        printf("geçmiş olsun kaldiniz");
    }
    else
    {
        printf("tebrikler geçtiniz");
    }
    ortalama=(matematik+fizik+kimya+turkce+tarih+muzik)/6;
    printf("ortalamaniz:%f",ortalama);
    if (ortalama>50)
    {
        printf("tebrikler sinifi geçtiniz");
    }
    else
    {
        printf("geçmiş olsun sinif tekrarı");
    }
    return 0;
}