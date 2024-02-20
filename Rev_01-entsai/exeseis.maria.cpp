#include<stdio.h>

int main() {
	float segundos, minutos, horas;
	 printf("Digite o tempo em segundos da duracao de um jogo de futebol: ");
	  scanf("%f", &segundos);
	    minutos = segundos/60;
	    horas = segundos /3600;
	 printf("\nTempo em minutos: %f", minutos);
	 printf("\nTempo em horas: %f", horas);
getchar();
return 0;	 
}