#include <stdio.h>

int main(){
	int i, j, vet[10], num;
 printf("Informe 10 numeros diferentes: \n");
   for(i=0; i<10; i++){
   	  scanf("%d", &num);
   	     for(j=0; j<i; j++){
   	     	if(vet[j]==num){
   	     		printf("Numero ja digitado. Informe outro: \n");
   	     		i--;
   	     		break;
				}
			}
			if(j==i){
				vet[i]=num;
			}
   }
   printf("\nVetor final: \n");
     for(i=0; i<10; i++){
     	printf("%d ", vet[i]);
	 }
getchar();
return 0;
}