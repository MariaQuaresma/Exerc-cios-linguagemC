#include <stdio.h>

int main() {
	int i, j, k;
	float matrizA[3][2], matrizB[2][3], produto[3][3];
 printf("Informe a primeira matriz (3x2): \n");
   for(i=0; i<3; i++) {
   	for(j=0; j<2; j++) {
   		scanf("%f", &matrizA[i][j]); }
   }
 printf("\nInforme a segunda matriz (2x3): \n");
   for(i=0; i<2; i++) {
   	for(j=0; j<3; j++) {
   		scanf("%f", &matrizB[i][j]); }
   }
   for(i=0; i<3; i++) {
   	for(j=0; j<3; j++) {
   		produto[i][j] = 0;
   	 for(k=0; k<2; k++) {
   	 	produto[i][j] += matrizA[i][k] * matrizB[k][j]; 
		   }	
	   }
   }
 printf("\nProduto das matrizes: \n");
   for(i=0; i<3; i++) {
   	for(j=0; j<3; j++) {
   		 printf("%2.f ", produto[i][j]);
	   }
	   printf("\n");
   }
 getchar();
 return 0;
}