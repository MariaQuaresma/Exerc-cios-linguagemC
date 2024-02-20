#include <stdio.h>

int main () {
	float estoque, pedido, itens;
 printf("Informe  o numero de itens no estoque atual da fabrica: \n");
  scanf("%f", &itens);
 printf("Informe o pedido feito para a fabrica: \n");
  scanf("%f", &pedido);
   if (itens>pedido) {
   	estoque  = itens - pedido;
   	printf("\nTem itens suficientes! o estoque atualizado e: %f\n", estoque);
   }
   else {
   	printf("\nNao tem itens suficientes em estoque para atender o pedido!\n");
   }
 getchar();
 return 0;
}
