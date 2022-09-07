#include <stdio.h>
#include <stdlib.h>

int main()
{
 float basicSalary ;
 printf("Enter your basic salary:  ");
 scanf("%f",&basicSalary);

 float dearnessAllowance ;
 dearnessAllowance = 0.4 * basicSalary;
 printf("\nDearness allowance is : %f ",dearnessAllowance);

 float houseRent ;
 houseRent = 0.2 * basicSalary;
 printf("\nHouse rent is : %f ",houseRent);

 float grossSalary ;
 grossSalary = basicSalary + dearnessAllowance + houseRent;
 printf("\ngross salary is : %f ",grossSalary);
}
