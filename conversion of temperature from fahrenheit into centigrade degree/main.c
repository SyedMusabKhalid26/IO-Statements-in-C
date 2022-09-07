#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp ;
    printf("write temperature of city: ");
    scanf("%f",&temp);

    float conversion ;
    conversion = (10 - 32) * 5/9  ;
    printf("\nthis is your answer: %f °C",conversion);
}
