#include <stdio.h>
#include <stdlib.h>

int main()
{
   double number1 = 0;
   double number2 = 0;
   double result = 0;

   printf("write the first number");
    scanf("%lf", &number1);
    printf("write the second number");
        scanf("%lf", &number2);

 result=number1+number2;

    printf("%f + %f = %f \n", number1, number2, &result);

    return 0;

}
