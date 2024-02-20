#include <stdio.h>

int main () {
	int num1, num2, soma;
 printf("Digite o primeiro numero inteiro: \n");
  scanf("%d", &num1);
 printf("Digite o segundo numero inteiro: \n");
  scanf("%d", &num2);
    soma = num1 + num2;
 printf("\nSoma: %d + %d =  %d\n", num1, num2, soma);
getchar();
return 0;
}