#include<stdio.h>

int main() {
	float saldo, novosaldo;
	 printf("Digite o saldo da conta poupanca: ");
	 scanf("%f", &saldo);
	   novosaldo = saldo*1.02;
	 printf("\nNovo saldo com reajuste de 2 porcento:%f", novosaldo);
 getchar();
 return 0; 
}