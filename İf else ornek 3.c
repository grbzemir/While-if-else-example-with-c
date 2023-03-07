#include <stdio.h>
#include <stdlib.h>



int main() {	

     printf("Ogrenci ortalam hesap sistemi");
     printf("\n\n");
     
     int s1,s2,ort;
     
     printf("Sinav1 degerini girin: ");
     scanf("%d",&s1);
     
     printf("Sinav2 degerini girin: ");
     scanf("%d",&s2);
     
     ort=(s1+s2)/2;
     
     printf("ortalama: %d",ort);
     
     if(ort>=50)
     {
     	printf("Tebrikler gectiniz :D");
	 }
	 else
	 {
	 	printf("Maalesef kaldınız :D");
	 }
	

	return 0;
}
