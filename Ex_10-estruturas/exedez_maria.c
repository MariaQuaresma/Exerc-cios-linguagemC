#include <stdio.h>

struct Carro {
	char marca[15];
	int ano;
	float preco;
};
int main() {
	struct Carro carros[5];
 printf("---Informe os dados dos 5 carros--- \n");
   for(int i=0; i<5; i++){
   	printf("\n%d - Carro: \n", i+1);
   	printf("Marca (maximo 15 letras): ");
   	  scanf("%s", carros[i].marca);
   	printf("Ano: ");
   	  scanf("%d", &carros[i].ano);
   	printf("Preco: ");
   	  scanf("%f", &carros[i].preco);
   }
   float p;
     do{
     	printf("\nInforme um valor p (ou zero para sair): ");
     	  scanf("%f", &p);
     	if(p==0){
     		break;
		 }
		 printf("\nCarros com preco menor que %2.f:\n", p);
		  for(int i=0; i<5; i++){
		  	if(carros[i].preco < p){
		  		printf("\nMarca: %s\n", carros[i].marca);
		  		printf("Ano: %d\n", carros[i].ano);
		  		printf("Preco: %2.f\n\n", carros[i].preco);
			  }
		  }
	 }while(p != 0);
  return 0;
}