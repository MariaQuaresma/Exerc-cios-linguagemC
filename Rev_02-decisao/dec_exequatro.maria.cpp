#include <stdio.h>

int main() {
    float num1, num2;
    char operador;
    float resultado;
      printf("Digite a operacao desejada (+, -, / ou *): ");
       scanf(" %c", &operador);
      printf("Digite o primeiro numero: ");
       scanf("%f", &num1);
      printf("Digite o segundo numero: ");
       scanf("%f", &num2);
    switch (operador) {
        case '+':
            resultado = num1 + num2; break;
        case '-':
            resultado = num1 - num2; break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2; } 
			else {
                printf("\nErro: Divisao por zero!\n");
                return 1; }
              break;
        case '*':
            resultado = num1 * num2;
            break;
        default:
            printf("\nErro: Operacao invalida!\n");
            return 1;
    }
    printf("\nResultado: %.3f\n", resultado);
getchar();
 return 0;
}
