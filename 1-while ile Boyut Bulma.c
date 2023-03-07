#include <stdio.h>
#include <stdlib.h>



int main() {
	
	int i;
	int j;
	int k;
	int s;
	int n;

	printf("dizinin boyutu: ");
	scanf("%d",&n);

	int a[n];
	i=0;

	while(i<n) { printf("dizinin %d elemanı: ",i); scanf("%d",&a[i]); i++;}		

	for(i=0;i<n-1;i++) 

	{

	k=i;s=a[i];

	for(j=0;j<n;j++) 

	if(a[i]>s) 
	
	{s=a[j]; k=j;}

	s=a[k]; a[k]=a[i]; a[i]=s;}

	for(i=0;i<n;i++)

	printf("dizi sonucu: \n",a[i]);
	
	
	
	
	return 0;
}
