#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a1,a2,a3 ;


    printf("enter 1 value: ");
    scanf("%f",&a1);


    printf("\nenter 2 value: ");
    scanf("%f",&a2);

    a3=a1;
    a1=a2;
    a2=a3;

    printf("\na3 value into a1:%f ",a1);
    printf("\na1 value into a2:%f ",a2);
    printf("\na2 value into a3:%f ",a3);


}
