#include <stdio.h>
#include <stdlib.h>

int main() {
    int numeroMagico, tentativa, numTentativas = 0;
    int sorteado;
     sorteado = rand() % 500;
       printf("Bem-vindo ao jogo do numero magico!\n");
       printf("Tente adivinhar o numero magico (entre 0 e 500).\n");
    do {
        printf("Digite a sua tentativa: ");
        scanf("%d", &tentativa);
         numTentativas++;
     if (tentativa < sorteado) {
            printf("Tente um numero maior.\n"); } 
	  else if (tentativa > sorteado) {
            printf("Tente um numero menor.\n"); } 
		else {
            printf("Parabens! Voce acertou o numero magico!\n"); }
    } 
   while (tentativa != sorteado);
    if (numTentativas >= 1 && numTentativas <= 3) {
        printf("Muito sortudo!\n");}
	 else if (numTentativas >= 4 && numTentativas <= 6) {
        printf("Sortudo!\n"); } 
	 else if (numTentativas >= 7 && numTentativas <= 10) {
        printf("Normal.\n"); } 
	  else {
        printf("Tente novamente.\n");
    }
 getchar();
 return 0;
}
