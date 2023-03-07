#include<stdio.h>
#include<stdlib.h>

int main () 
{
    int n;

    int hane=0;
    int toplam=0;

    printf("bir sayi giriniz:");
    scanf("%d",&n);

    do

    {
        toplam += (n%10);

        n /= 10;
        hane++;

    } 
    
    while (n>0);

    printf("sayinin basamak sayisi:%d",hane);
    printf("sayinin basamaklari toplami:%d",toplam);



    return 0;
}