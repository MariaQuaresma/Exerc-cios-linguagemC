#include <stdio.h>

int main() {
	int seg, min, horas;
printf("Informe o tempo em segundos da duracao de um jogo de futebol: \n");
 scanf("%d", &seg);
   min = seg/60;
   horas = seg/3600;
 printf("\nO tempo em segundos: %2.d\n", seg);
 printf("O tempo em minutos: %2.d\n", min);
 printf("O tempo em horas: %2.d\n", horas);
getchar();
return 0;
}