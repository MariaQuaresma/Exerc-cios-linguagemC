#include <stdio.h>

int potencia(int base, int expoente) {
  int i, resultado=1;
    for (i=0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}
int main() {
    int base, expoente, resultado;
 printf("Informe a base: \n");
    scanf("%d", &base);
 printf("\nInforme o expoente (um inteiro maior ou igual a 1): \n");
    scanf("%d", &expoente);
  if (expoente < 1) {
        printf("\nO expoente deve ser um inteiro maior ou igual a 1.\n"); }
  else {
        resultado = potencia(base, expoente);
        printf("\n%d elevado a %d e: %d\n", base, expoente, resultado);
    }
 return 0;
}