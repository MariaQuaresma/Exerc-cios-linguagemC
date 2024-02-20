#include <stdio.h>

int main() {
	int seg, min, horas, temptotal;
	float massa_inicial, massa_final;
  printf("Informe a massa inicial do material radioativo (em gramas): \n");
   scanf("%f", &massa_inicial);
      massa_final = massa_inicial;
      temptotal = 0;
  while (massa_final >= 0.5) {
 	  massa_final/=2;
 	  temptotal+=50;
 }
  printf("\n\nA massa inicial e: %f", massa_inicial);
  printf("\nA massa final e: %f\n\n", massa_final);
    horas = (temptotal/3600);
    min = (temptotal % 3600) / 60;
    seg = (temptotal % 3600) % 60;
  printf("Tempo necessario para a massa se tornar menor que 0.5 gramas:\n");
  printf("Horas: %d\n", horas);
  printf("Minutos: %d\n", min);
  printf("Segundos: %d\n", seg);
getchar();
return 0;
}