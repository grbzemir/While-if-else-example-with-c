#include<stdio.h>
#include<stdlib.h>

int main () {
    
    printf(" Trakya Universitesi Ortalama Hesaplama Programi\n");
    printf("***************************\n");
    int vize,final,ortalama;
    printf("Vize notunuzu giriniz:");
    scanf("%d",&vize);
    printf("Final notunuzu giriniz:");
    scanf("%d",&final);
    ortalama=(vize*30/100)+(final*70/100);
    if(ortalama>=50)
    {
        printf("Tebrikler gectiniz");
    }
    else
    {
        printf("Kaldiniz");
    }
    return 0;
}