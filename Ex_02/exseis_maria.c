#include <stdio.h>

int main() {
	float altura, peso, imc;
	do {
 printf("Informe a altura de uma pessoa: \n");
  scanf("%f", &altura);
 printf("Informe o peso de uma pessoa: \n");
  scanf("%f", &peso);
   imc = peso/(altura*altura);
  if (imc <= 18.5) {
 	printf("\nImc %f esta abaixo do peso normal!\n", imc);
  }
  else if (imc <= 25) {
 	printf("\nImc %f esta com peso normal!\n", imc);
  }
  else if (imc<=30) {
 	printf("\nImc %f esta com peso acima do norma!\n", imc);
  }
  else {
 	printf("\nImc %f esta com peso excessivo!\n", imc);
  }
  } while(altura!=0);
 getchar();
 return 0;
}