#include <stdio.h>

int main() {
    int velmaxima, velmotorista, velexcesso, multa;
      printf("Digite a velocidade maxima permitida: ");
       scanf("%d", &velmaxima);
      printf("\nDigite a velocidade do motorista: ");
       scanf("%d", &velmotorista);
    if (velmotorista <= velmaxima) {
        printf("\nNao tem multa!\n"); } 
	else {
        velexcesso = velmotorista - velmaxima;
        multa = velexcesso * 5;
        printf("\nMulta a ser paga: R$ %d\n", multa);
    }
 getchar();
 return 0;
}
