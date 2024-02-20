#include <stdio.h>

int main() {
int i=0, continuar;
float nota1, nota2, nota3, media=0, soma=0, maior_media=0, menor_media=10;
 do {
 printf("Informe as tres notas de um aluno: \n");
  scanf("%f %f %f", &nota1, &nota2, &nota3);
   media = (nota1+nota2+nota3)/3;
    if(media > maior_media) {
    	maior_media = media;
	}
	if (media < menor_media) {
		menor_media = media;
	}
	  soma+=media;
	  i++;
	printf("\nA media e: %2.f\n", media);
	printf("\nPara finalizar digite zero!\n");
	printf("Se quiser continuar processando um proximo aluno digite 1: \n");
	 scanf("%d", &continuar);
} while(continuar);
   if(i>0) {
    printf("\nA maior media e: %2.f\n", maior_media);
    printf("A menor media e: %2.f\n", menor_media);
    printf("A media da turma e: %2.f\n", soma/i); 
 }
   else {
   	printf("Nenhum aluno foi processado!\n");
   }
getchar();
return 0;
}