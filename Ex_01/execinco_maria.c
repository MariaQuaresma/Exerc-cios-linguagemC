#include <stdio.h>

int main() {
    int numero1, numero2;
    float soma, subtracao, multiplicacao, divisao;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
  printf("Soma: %d\n", numero1 + numero2);
  printf("Subtração: %d\n", numero1 - numero2);
  printf("Multiplicação: %d\n", numero1 * numero2);
    if (numero2 !=0) {
        divisao = numero1 / numero2;
        printf("Divisão: %.2f\n", divisao);
    } else {
        printf("Não é possível dividir por zero.\n");
    }
getchar();
return 0;
}
