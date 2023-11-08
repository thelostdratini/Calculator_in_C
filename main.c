#include <stdio.h>
#include <math.h>

double dog(double x, double y){  
  return x + y;
}

double cat(double a, double b){
  return a - b;
}

double max(double c, double d){
  return c * d;
}

double cooper(double e, double f){
  return e / f;
}

int main(){

  double i;
  printf("Entre com um valor do tipo int na base 10:");
  scanf("%lf", &i);

  double j;
  printf("Entre com um segundo valor do tipo int na base 10:");
  scanf("%lf", &j);

  char op;
  printf("escolha algum simbolo entre +,-,*,/,^");
  scanf(" %c", &op);

  switch (op){
    case '+':
    printf("%lf\n", dog(i,j));
    break;
    case '-':
    printf("%lf\n", cat(i,j));
    break;
    case '*':
    printf("%lf\n", max(i,j));
    break;
    case '/':
    printf("%lf\n", cooper(i,j));
    break;
    case '^':
    printf("%lf\n", pow(i,j));
    break;
  }

  return 0;
}