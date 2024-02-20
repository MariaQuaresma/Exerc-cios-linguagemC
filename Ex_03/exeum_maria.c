#include <stdio.h>

int main() {
	int i;
	float maior=0, menor=0, valores[15];
 for (i=0; i<15; i++) {
 	printf("Informe um valor: \n");
 	 scanf("%f", &valores[i]);
 	  if(i == 0) {
 	  	maior=menor=valores[i];
	   }
	   else {
	   	if(valores[i]> maior) {
	   		maior = valores[i];
		   }
		else if (valores[i]< menor) {
			menor = valores[i];
		}
	}
 }
   printf("\nO maior valor e: %3.f\n", maior);
   printf("O menor valor e: %3.f\n", menor);
 getchar();
 return 0;
}