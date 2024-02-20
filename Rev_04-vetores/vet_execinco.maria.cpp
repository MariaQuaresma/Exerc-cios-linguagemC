#include <stdio.h>

int main() {
  int inicio, razao, vet[10], i;
    printf("Informe o numero inicial da P.G: ");
      scanf("%d", &inicio);
    printf("Informe a razao da P.G: ");
      scanf("%d", &razao);
  printf("\nOs valores da P.G sao: ");
  for(i = 0; i < 10; i++) {
    vet[i] = inicio *=razao;
     printf("%d ", vet[i]);
  }
 getchar();
 return 0;
}