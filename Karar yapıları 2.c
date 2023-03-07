#include <stdio.h>
#include <stdlib.h>



int main() {	

	int sayi;
	printf("sayiyi girin: ");
	scanf("%d",&sayi);
	
	if(sayi%3==0 & sayi%5==0)
	{
		printf("sayi 3 ve 5'e tam bolunur'");
	}
	else
	{
		printf("sayi 3 ve 5'e tam bolunmez");
	}
	
	return 0;
}
