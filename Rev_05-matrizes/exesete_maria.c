#include <stdio.h>

int main() {
	int i, j;
	char alunos_resp[5][10], gabarito[10], resultado[5];
 printf("Informe as respostas dos alunos (5x10): \n");
   for(i=0; i<5; i++){
   	for(j=0; j<10; j++){
   		scanf(" %c", &alunos_resp[i][j]);
	   }
   }
 printf("\nInforme o gabarito das respostas: \n");
   for(j=0; j<10; j++){
   	scanf(" %c", &gabarito[j]);
   }
   for(i=0; i<5; i++){
   	resultado[i]= 0;
   	for(j=0; j<10; j++) {
   		if(alunos_resp[i][j]==gabarito[j]){
   			resultado[i]++; }
	   }
   }
   printf("\nPontuacao dos alunos: \n");
     for(i=0; i<5; i++){
     	printf("Aluno %d: %d pontos\n", i+1, resultado[i]);
	 }
 getchar();
 return 0;
}