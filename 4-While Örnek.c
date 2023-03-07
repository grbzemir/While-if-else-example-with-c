#include<stdio.h>
#include<stdlib.h>

int main() {

int i;

i=1;

while(i<=20)

{
    if(i%2==0 && i!=14)

    {
        printf("%d",i);

    }

    i++;
}

return 0;
}