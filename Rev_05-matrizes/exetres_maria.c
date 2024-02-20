#include <stdio.h>

int main() {
	int i, j;
	float matriz[3][3];
 printf("Informe uma matriz (3x3): \n");
   for(i=0; i<3; i++){
   	for(j=0; j<3; j++){
   		scanf("%f", &matriz[i][j]);
	   }
   }
 printf("\nA matriz multiplicada por 5: \n");
   for(i=0; i<3; i++){
   	for(j=0;j<3; j++){
   		matriz[i][j]*=5;
   		printf("%2.f ", matriz[i][j]);
	   }
	   printf("\n");
   }
 getchar();
 return 0;
}