#include <stdio.h>
int main () {
	float saldo, novosaldo;
 printf("Informe o saldo de uma conta poupanca: \n");
  scanf("%f", &saldo);
    novosaldo = saldo *1.02;
 printf("\nO novo saldo com o reajuste de 2 por cento: %f\n", novosaldo);
getchar ();
return 0;
}