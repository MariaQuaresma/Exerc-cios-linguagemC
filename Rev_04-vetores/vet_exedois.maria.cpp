#include <stdio.h>

int main(){
	int vet[10], elemento, menor, i;
  for(i=0; i<10; i++) {
  	printf("\n%d - Informe numero: \n", i+1);
  	 scanf("%d", &vet[i]);
  	    if(i==0){
  	   	    menor=vet[i];
  	   	    elemento=i+1;
		 }
		else if(vet[i]<menor) {
			menor=vet[i];
			elemento=i+1;
		}
  }
  printf("\nA posicao do menor elemento: %d\n", elemento);
  printf("O valor do menor elemento e: %d\n", menor);
 getchar();
 return 0;
}