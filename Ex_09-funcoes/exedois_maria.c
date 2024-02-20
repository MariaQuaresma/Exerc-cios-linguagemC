#include <stdio.h>
#include <math.h>

float calc_dist(float x1, float y1, float x2, float y2) {
  float distancia;
	distancia =  sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	 return distancia;
}
 int main() {
 	float x1, y1, x2, y2, distancia;
 printf("Informe as coordenadas do primeiro ponto (x1, y1): \n");
   scanf("%f %f", &x1, &y1);
 printf("\nInforme as coodernadas do segundo ponto (x2, y2): \n");
   scanf("%f %f", &x2, &y2);
     distancia = calc_dist(x1, y1, x2, y2);
 printf("\nA distancia entre os pontos e: %f\n", distancia);
  return 0;
 }