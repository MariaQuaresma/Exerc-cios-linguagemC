#include <stdio.h>

int main() {
	int i, vet[10], maior, menor, elem_maior, elem_menor;
  for(i=0; i<10; i++) {
  	printf("\n%d - Digite um numero: \n", i+1);
  	  scanf("%d", &vet[i]);
  	   if(i==0) {
  	   	maior=menor=vet[i];
  	   	elem_maior=elem_menor=i+1;
		 }
		 else {
		 	if (vet[i]>maior){
		 		maior=vet[i];
		 		elem_maior=i+1;
			 }
			 else if (vet[i]<menor) {
			 	menor=vet[i];
			 	elem_menor=i+1;
			 }
		 }
  }
  printf("\nA posicao do maior elemento: %d\n", elem_maior);
  printf("O valor do maior elemento e: %d\n", maior);
  printf("\nA posicao do menor elemento: %d\n", elem_menor);
  printf("O valor do menor elemento e: %d\n", menor);
getchar();
return 0;
}