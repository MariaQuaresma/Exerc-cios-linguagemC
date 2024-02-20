#include <stdio.h>

int main() {
	int vet[20], i, pares=0, impares=0;
  for(i=0; i<20; i++) {
  	printf("%d - Informe numero: ", i+1);
  	 scanf("%d", &vet[i]);
  	 if(vet[i]%2==0) {
  	 	pares++;
	   }
	   else if(vet[i]%2!=0){
	   	impares++;
	   }
  }
  printf("\nNumeros pares: %d\n", pares);
  printf("Numeros impares: %d\n", impares);
 getchar();
 return 0;
}