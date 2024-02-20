#include <stdio.h>

int main() {
    int lado1, lado2, soma;
     for (lado1=0; lado1<=6; lado1++) {
     	for(lado2 = lado1; lado2 <=6; lado2++) {
     		if (lado1+lado2 == 4) {
     			soma = soma+ lado1 + lado2;	 }
		 }
	 }
	 printf("A soma de todos os numeros 4 do dominino e: %d", soma);
 getchar();
 return 0;
}
