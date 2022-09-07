#include <stdio.h>
#include <stdlib.h>

int main()
{
    float distanceInKm;
    printf("conversion of km: ");
    scanf("%f",&distanceInKm);

    float distanceInM = distanceInKm    * 100;
    printf("\n conversion of km in metre :%f",distanceInM);

    float distanceInF = distanceInKm * 3280.84;
    printf("\n conversion of km in feet :%f",distanceInF);

    float distanceInInc = distanceInKm * 39370.1;
    printf("\n conversion of km is inch :%f",distanceInInc);

    float distanceInCm = distanceInKm * 100000;
    printf("\n conversion of km in centimetre :%f",distanceInCm);
}
