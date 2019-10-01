#include<stdio.h>

int main(void)
{
  char operator;//Initializing variables
    double n1,n2;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);//Accepting values

    printf("Enter two numbers: ");
    scanf("%lf  %lf",&n1, &n2);

  switch(operator)//Switch case
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
  printf("\n");//Printing statements
  return 0;
   }


