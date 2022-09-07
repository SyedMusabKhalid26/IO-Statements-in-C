#include <stdio.h>
#include <stdlib.h>

int main()
{
 float rl ;
printf("enter rl : ");
scanf("%f",&rl);

float rb ;
printf("enter rb : ");
scanf("%f",&rb);

float areaRect ;
areaRect = rl * rb ;
printf("\nanswer is :%f",areaRect);

float perRect ;
perRect = (rl + rb);
printf("\nanswer is :%f",perRect);

float radius ;
printf("\nenter is : ");
scanf("%f",&radius);

float areacir ;
areacir = (22/7)*(radius*radius);
printf("\nasnwer is :%f",areacir);

float circumcir ;
circumcir = (22/7)*radius;
printf("\nanswer is :%f",circumcir);






}
