#include <stdio.h>

int main() {
	int numero, alg, dig_verificador=0;
 printf("Informe um numero inteiro de n digitos: \n");
	scanf("%d", &numero);
	  alg = numero;
	while(numero!=0) {
	 	dig_verificador+=numero%10;
	 	numero/=10;
	 if(numero == 0 && dig_verificador>=10){
	 		numero = dig_verificador;
	 		dig_verificador = 0;
		 }
	 }
 printf("\nO numero inteiro com o digito verificador e: %d-%d\n", alg, dig_verificador);
 getchar();
 return 0;
}