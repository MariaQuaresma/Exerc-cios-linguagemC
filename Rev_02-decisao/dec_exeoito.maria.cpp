#include <stdio.h>
#include <math.h>

int main() {
    int numeroLados;
    float tamanhoLados;
    float area;
      printf("Digite o numero de lados do poligono: ");
       scanf("%d", &numeroLados);
      printf("Digite o tamanho dos lados do poligono: ");
       scanf("%f", &tamanhoLados);
    if (numeroLados == 3) {
        area = (tamanhoLados * tamanhoLados * 1.73) / 4;
        printf("\nA area do triangulo e: %.2f\n", area); } 
	else if (numeroLados == 4) {
        area = tamanhoLados * tamanhoLados;
        printf("\nA area do quadrado e: %.2f\n", area);} 
	else if (numeroLados == 6) {
        area = (6 * tamanhoLados * tamanhoLados * 1.73) / 4;
        printf("\nA area do hexagono e: %.2f\n", area); } 
	else {
        printf("\nNao sei calcular a area.\n"); }
 getchar();
 return 0;
}
