#include <stdio.h>
#include <stdlib.h>



int main() {	

	int sayi1,sayi2,toplam;
	sayi1=24;
	sayi2=28;
	toplam=sayi1+sayi2;
	
	if(toplam>=50)
	{
	   printf("Toplam degeriniz: %d - 50 den buyuk",toplam);
	}
	
	else
	{
        printf("Toplam degeriniz: %d - 50 den kucuk",toplam);
    }  
	
	return 0;
}
