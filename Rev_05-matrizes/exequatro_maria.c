#include <stdio.h>

int main() {
	int i, j;
	float vet[3], matriz[3][3], resultado[3];
 printf("Informe os valores do vetor: \n");
   for(i=0; i<3; i++){
   	scanf("%f", &vet[i]);
   }
 printf("\nInforme uma matriz (3x3): \n");
  for(i=0; i<3; i++){
  	for(j=0; j<3; j++){
  		scanf("%f", &matriz[i][j]);
	  }
  }
 printf("\nMultiplicacao do vetor pelas colunas da matriz: \n");
  for(j=0; j<3; j++){
  	resultado[j]=0;
  	for(i=0; i<3; i++){
  		resultado[j] += vet[i]*matriz[i][j];
	  }
	  printf("%2.f ", resultado[j]);	  
  }
 getchar();
 return 0;
}