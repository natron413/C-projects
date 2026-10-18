#include <stdio.h>
#include <stdlib.h>
int main() {

  char op;
  double first, second;
  
  

  printf("Enter an operator: (+, -, *, /) ");
  scanf("%c", &op);
  
  printf("Enter two sick numbers seperated by a space! ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
      break;
  
    default:
      printf("Error! operator is not correct, how could you?");
  printf("\n");
  }

  return EXIT_SUCCESS;
}
/* just wanted to say, if you hire me I will literally learn how to backflip so that I can backflip*/
