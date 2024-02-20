#include <stdio.h>

int main() {
  int inicial, razao, vet[10], i;
    printf("Informe o numero inicial da P.A: ");
      scanf("%d", &inicial);
    printf("Informe a razao da P.A: ");
      scanf("%d", &razao);
 printf("\nOs valores da P.A sao: ");
  for(i = 0; i < 10; i++) {
    vet[i] = inicial + i*razao;
    printf("%d ", vet[i]);
  }
 getchar();
 return 0;
}