#include <stdio.h>

int main() {
	int vet[10], elemento, maior, i;
 for(i=0; i<10; i++) {
  printf("\n%d- Informe um numero: \n", i+1);
   scanf("%d", &vet[i]);
    if (i==0) {
    	maior=vet[i];
    	elemento = i+1;
    }
    else if (vet[i]> maior) {
	    maior = vet[i];
	    elemento = i+1;
  }
}
  printf("\nO maior elemento esta na posicao: %d\n", elemento);
  printf("O valor do maior elemento e: %d\n", maior);
getchar();
return 0;
}