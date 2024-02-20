#include <stdio.h>

int verificar(int num){
	if(num>0){
		return 1;
	}
	else if(num<0){
		return -1;
	}
	else {
		return 0;
	}
}
int main() {
	int num, resultado;
 printf("Informe um numero inteiro: ");
   scanf("%d", &num);
     resultado=verificar(num);
       if(resultado == 1){
       	printf("\n%d e um numero positivo!\n", num);
	   }
	   else if(resultado == -1){
	   	printf("\n%d e um numero negativo!\n", num);
	   }
	   else {
	   	printf("\n%d e zero!\n", num);
	   }
 return 0;
}