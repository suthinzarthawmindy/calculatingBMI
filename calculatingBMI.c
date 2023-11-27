
#include <stdio.h>
#include <math.h>
int main (void)
{
  float BMI,mass,height;

  printf("Enter the patient mass(kg):");
  scanf("%f",&mass);

  printf("Enter the patient height(m):");
  scanf("%f",&height);

  BMI=mass/pow(height,2);
  printf("BMI is %f\n",BMI);

if(BMI<=18.5)
  printf("\nQ\n");
else if (BMI>18.5 || BMI<=24.9)
        printf("\nH\n");
else if (BMI>24.9||BMI<=29.9)
        printf("\nF\n");
else if (BMI>29.9)
        printf("\nD\n");
        else printf("\ninvalid input\n");

  return 0;
}
