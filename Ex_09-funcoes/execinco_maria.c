#include <stdio.h>

int num_posit() {
	int num;
	  do{
	  	printf("Informe um numero inteiro positivo: \n");
	  	  scanf("%d", &num);
	  if(num<=0){
	  	printf("\nPor favor, informe um numero inteiro positivo!\n"); }
	} while(num<=0);
	return num;
}
int soma_div(int num){
	int i, soma=0;
	  for(i=1; i<=num/2; i++){
	  	if(num%i==0){
	  		soma+=i; }
	  }
	  return soma;
}
int main(){
	int i, numeros[5], soma;
  for(i=0; i<5; i++){
  	numeros[i] = num_posit();
  }
  printf("\n---Soma dos divisores (exceto o proprio numero)---\n");
   for(i=0; i<5; i++){
	soma = soma_div(numeros[i]);
 printf("Para %d, a soma dos divisores e: %d\n", numeros[i], soma);
}
return 0;
}