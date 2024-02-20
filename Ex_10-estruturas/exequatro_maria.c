#include <stdio.h>

struct aluno {
	int matricula;
	char nome[50];
	float nota1, nota2, nota3, media;
};
int main(){
	struct aluno alunos[5];
 for(int i=0; i<5; i++){
 	printf("\n%d - Informe os dados do aluno: \n", i+1);
 	  printf("Matricula: \n");
 	    scanf("%d", &alunos[i].matricula);
 	  printf("Nome: \n");
 	    scanf("%s", alunos[i].nome);
 	  printf("Nota da primeira prova: \n");
 	    scanf("%f", &alunos[i].nota1);
 	  printf("Nota da segunda prova: \n");
 	    scanf("%f", &alunos[i].nota2);
 	  printf("Nota da terceira prova: \n");
 	    scanf("%f", &alunos[i].nota3);
alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
 }
  int maiornota1=0;
   for(int i=1; i<5; i++){
   	if (alunos[i].nota1 > alunos[maiornota1].nota1){
   		maiornota1 = i; }
   }
printf("\n---Aluno com maior nota na primeira prova--- \n");
printf("Nome: %s\n", alunos[maiornota1].nome);
printf("Matricula: %d\n", alunos[maiornota1].matricula);
printf("Nota %f\n\n", alunos[maiornota1].nota1);

 int maiormedia=0, menormedia=0;
  for(int i=0; i<5; i++){
 	if(alunos[i].media > alunos[maiormedia].media){
 		maiormedia = i;
	 }
	if(alunos[i].media < alunos[menormedia].media){
	 	menormedia = i; } 
 }
printf("\n---Aluno com maior media geral--- \n");
printf("Nome: %s\n", alunos[maiormedia].nome);
printf("Matricula: %d\n",  alunos[maiormedia].matricula);
printf("Media: %f\n\n", alunos[maiormedia].media);
printf("---Aluno com menor media geral---\n");
printf("Nome: %s\n", alunos[menormedia].nome);
printf("Matricula: %d\n", alunos[menormedia].matricula);
printf("Media: %f\n\n", alunos[menormedia].media);

 for(int i=0; i<5; i++){
  if(alunos[i].media >= 6){
   printf("%s (Matricula: %d)- Aprovado!\n", alunos[i].nome, alunos[i].matricula);
	  }
  else {
   printf("%s (Matricula: %d)- Reprovado!\n", alunos[i].nome, alunos[i].matricula);
	  }
  }
  return 0;
}