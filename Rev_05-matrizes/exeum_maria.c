#include <stdio.h>

int main() {
	int i, j;
	float matrizA[2][3], matrizB[2][3], soma[2][3];
 printf("Informe os numeros da primeira matriz(2x3):\n");
   for(i=0; i<2; i++) {
   	for(j=0; j<3; j++){
   		scanf("%f", &matrizA[i][j]); }
   }
 printf("\nInforme numeros da segunda matriz(2x3):\n");
   for(i=0; i<2; i++) {
   	for(j=0; j<3; j++) {
   		scanf("%f", &matrizB[i][j]); }
   }
 printf("\nSoma das matrizes e:\n");
  for(i=0; i<2; i++) {
  	for(j=0; j<3; j++) {
  		soma[i][j] = matrizA[i][j] + matrizB[i][j];
  		printf("%2.f ", soma[i][j]);
	  }
	printf("\n");
  }
 getchar();
 return 0;
}