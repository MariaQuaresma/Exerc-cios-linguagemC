#include <stdio.h>

float calc_media(char letra, float nota1, float nota2, float nota3){
	if (letra=='A' || letra=='a') {
		return (nota1+nota2+nota3)/3;
	}
	else if (letra=='P' || letra=='p') {
		return (5*nota1 + 3*nota2 + 2*nota3)/10;
	}
	else if (letra=='H' || letra=='h') {
		return 3/((1/nota1)+(1/nota2)+(1/nota3));
	}
	else {
		printf("\nLetra invalida. Por favor, use A, P ou H!\n");
		return -1;
	}
}
int main (){
	float nota1, nota2, nota3, result;
	char letra;
 printf("Informe as notas do aluno: \n");
   scanf("%f %f %f", &nota1, &nota2, &nota3);
 printf("\nA-Media aritmetica\nP-Media ponderada\nH-Media harmonica\nEscolha uma letra:\n");
   scanf(" %c", &letra);
    result = calc_media(letra, nota1, nota2, nota3);
     if(result != -1){
     	printf("\nA media e: %2.f\n", result);
	 }
 return 0;
}