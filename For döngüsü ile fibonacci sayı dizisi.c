#include<stdio.h>
#include<stdlib.h>

int main () {
    int ilksayi=1;
    int ikincisayi=1;
    int i;

    printf("ilk sayiyi giriniz: %d\n",ilksayi);
    printf("ikinci sayiyi giriniz: %d\n",ikincisayi);

    for(i=0;i<12;i++)
    {
        int temp=ikincisayi;
        ikincisayi += ilksayi;
        ilksayi = temp;
        printf("%d\n",ikincisayi);
    }
    return 0;
}