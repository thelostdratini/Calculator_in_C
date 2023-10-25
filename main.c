#include <stdio.h>

int dog(int x, int y){  
  return x + y;
}

int cat(int a, int b){
  return a - b;
}

int max(int c, int d){
  return c * d;
}

int cooper(int e, int f){
  return e / f;
}
int main()
{
  int i;
  printf("Entre com um valor do tipo int na base 10:");
  scanf("%i", &i);

  int j;
  printf("Entre com um segundo valor do tipo int na base 10:");
  scanf("%i", &j);

  char op;
  printf("escolha algum simbolo entre +,-,*,/");
  scanf(" %c", &op);

  switch (op){
    case '+':
    printf("%d\n", dog(i,j));
    break;
    case '-':
    printf("%d\n", cat(i,j));
    break;
    case '*':
    printf("%d\n", max(i,j));
    break;
    case '/':
    printf("%d\n", cooper(i,j));
    break;
  }
  return 0;
}