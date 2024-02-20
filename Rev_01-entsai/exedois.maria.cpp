#include<stdio.h>

int main() {
	float num1, num2, soma, sub, mult, div;
     printf("Digite o primeiro numero: ");
       scanf("%f", &num1);
      printf("Digite o segundo numero: ");
       scanf("%f", &num2);
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    div = num1/ num2;
     printf("\nResultado da soma: %f", soma);
     printf("\n\nResultado da subtracao: %f", sub);
     printf("\n\nResultado da multiplicacao: %f", mult);
     printf("\n\nResultado da divisao: %f\n", div);
getchar();
return 0;
}