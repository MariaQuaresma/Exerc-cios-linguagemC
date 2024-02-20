#include <stdio.h>

int main(){
	int i, j, matriz[4][4], maior=0, linha=0, coluna=0;
 printf("Informe uma matriz (4x4): \n");
   for(i=0; i<4; i++){
   	for(j=0; j<4; j++){
   		scanf("%d", &matriz[i][j]); }
   	}
   	printf("\nMatriz: \n");
   	for(i=0; i<4; i++){
   		for(j=0; j<4; j++){
   			printf("%2.d", matriz[i][j]);
		   }
		   printf("\n");
	   }
   	for(i=0; i<4; i++){
   		for(j=0; j<4; j++) {
   		    if(matriz[i][j]>maior){
   		  	    maior=matriz[i][j];
   		  	    linha=i+1;
   		  	    coluna=j+1; }
	   }
   }
 printf("\nO maior valor e: %2.d\n", maior);
 printf("Localizado na linha %2.d e coluna%2.d\n", linha, coluna);
getchar();
return 0;
}