#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
    float sayi;

    do 
    {
    
    printf("lütfen pozitif bir sayi giriniz: ");
    scanf("%f",&sayi);
    
    if(sayi<0)

{
    printf("lütfen gecerli bir pozitif sayi giriniz: ");
    scanf("%f",&sayi);
}
if(sayi<0)
continue;

printf("girdiginiz sayinin karekökü: %f",sqrt(sayi));

    } 
    
    while (sayi);
    
    return 0;
}
    