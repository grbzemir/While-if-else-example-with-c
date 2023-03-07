#include<stdio.h>
#include<stdlib.h>

int main () {

    int i;
    int n;
    int byk;
    int byk_yer;

    system("color e0");
    printf("dizi kac elemanli olsun:");
    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        printf("dizinin %d. elemanini giriniz:",i+1);
        scanf("%d",&a[i]);
    }

    while (i<n)

    {
        if(a[i]>byk)

        {

            byk=a[i];
            byk_yer=i;

        }

        i++;
    }

    printf("dizinin en buyuk elemani:%d",byk);

    printf("dizinin en buyuk elemaninin yeri:%d",byk_yer);


    return 0;
}