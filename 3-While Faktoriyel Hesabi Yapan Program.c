#include<stdio.h>
#include<stdlib.h>

int main() {

    int faktoryel;

    int sayi;

    faktoryel=1;
    sayi=5;

    while(sayi>1)
{

    faktoryel=faktoryel*sayi;
    sayi--;

    
}
   printf("sonuc: %d",faktoryel);


return 0;

}
