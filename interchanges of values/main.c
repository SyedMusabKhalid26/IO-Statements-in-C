#include <stdio.h>
#include <stdlib.h>

int main()
{


    float s1 ;
    printf("enter 1 value: ");
    scanf("%f",&s1);


    float s2 ;
    printf("enter 2 value: ");
    scanf("%f",&s2);
	
	float temp ;
	
   temp = s1 ;
   s1 = s2 ;
   s2 = temp ;
   
       
    printf("interchangation of values:%d",temp) ;









}
