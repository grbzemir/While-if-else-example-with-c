#include <stdio.h>

int main() {
	int n,i,kck,kck_yer;
	printf("dizi kac elemanlı olucak:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	printf("dizinin %d. elemanını giriniz: ",i+1);
	scanf("%d",a[i]);
	}
	kck=a[0];
	i=1;
do { if(a[i]<kck) {kck=a[i]; kck_yer=i;} i++;} while(i<n);
	printf("dizinin en kucuk elemanı %d,konumu %d dir",kck,kck_yer+1);

   return 0;
}