#include<stdio.h>

int main(void)
{
  char operator;
    double n1,n2;

    printf("Enter an operator (+, -, *,/): "); //Taking operators as input
    scanf("%c", &operator);

    printf("Enter two numbers: "); //Taking number as input
    scanf("%lf  %lf",&n1, &n2);

  switch(operator)
  {
   case '+':
        printf("%lf + %lf = %lf ", n1, n2, n1 + n2);
        break;

    case '-':
        printf("%lf - %lf = %lf ", n1, n2, n1 - n2);
        break;

    case '*':
        printf("%lf * %lf = %lf ", n1, n2, n1 * n2);
        break;

    case '/':
        printf("%lf / %lf = %lf ", n1, n2, n1 / n2);
        break;
  }
  printf("\n");
  return 0;
   }


