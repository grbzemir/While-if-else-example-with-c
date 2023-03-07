#include <stdio.h>
#include <stdlib.h>



int main() {

int s1,s2,s3,proje,ortalama;
printf("s1 giriniz: ");
scanf("%d",&s1);
printf("s2 giriniz: ");
scanf("%d",&s2);
printf("s3 giriniz: ");
scanf("%d",&s3);
printf("proje giriniz: ");
scanf("%d",&proje);
ortalama=(s1+s2+s3+proje)/4;
printf("ortalamanız: %d\n",ortalama);

if(ortalama<50)
{
	printf("notunuz: ff");
}
if(ortalama>=50 && ortalama<60)
{
	printf("notunuz: dd");
}
if(ortalama>=60 && ortalama<70)
{
	printf("notunuz: cc");
}
if(ortalama>=70 && ortalama<85)
{
	printf("notunuz: bb");
}
if(ortalama>=85)
{
	printf("notunuz: aa");
}
   
	return 0;
}
