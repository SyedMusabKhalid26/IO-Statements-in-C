#include <stdio.h>
#include <stdlib.h>

int main()
{
 float s1,s2,s3,s4,s5 ;

  printf("Obtain marks in subject 1: ");
  scanf("%f",&s1);

  printf("\nObtain marks in subject 2: ");
  scanf("%f",&s2);

  printf("\nObtain marks in subject 3: ");
  scanf("%f",&s3);

  printf("\nObtain marks subject in 4: ");
  scanf("%f",&s4);

  printf("\nObtain marks subject in 5: ");
  scanf("%f",&s5);

  float aggregate ;
  aggregate = s1+s2+s3+s4+s5;
  printf("\nThe aggregate is: %f ",aggregate);

  float percent ;
  percent = aggregate/500*100;
  printf("\nthis is your percentage:%f ",percent);

}
