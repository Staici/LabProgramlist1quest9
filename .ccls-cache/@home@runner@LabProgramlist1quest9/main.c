#include <stdio.h>

int main(void) {
  int num;
  printf("Digite um número: ");
  scanf("%d",&num);
  printf("O número digitado foi\n %d\n o número antecessor foi:\n %d\n e o sucessor foi:\n %d",num,num-1,num+1);
  return 0;
}