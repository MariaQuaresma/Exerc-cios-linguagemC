#include <stdio.h>

struct aluno {
	int matricula;
	char nome[50];
	int codigo;
	float nota1, nota2, media;
};
int main() {
	struct aluno alunos[10];
 int numalunos;
   do{
   	printf("Informe o numero de alunos (ate 10): \n");
   	  scanf("%d", &numalunos);
   }while (numalunos<=0||numalunos>10);
 for(int i=0; i<numalunos; i++){
 	printf("\n%d - Informe os dados do aluno:\n", i+1);
 	  printf("Matricula: \n");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: \n");
          scanf("%s", alunos[i].nome);
        printf("Codigo da Disciplina: \n");
          scanf("%d", &alunos[i].codigo);
        printf("Primeira nota: \n");
          scanf("%f", &alunos[i].nota1);
        printf("Segunda nota: \n");
          scanf("%f", &alunos[i].nota2);
    alunos[i].media = (1.0*alunos[i].nota1 + 2.0*alunos[i].nota2)/3;
 }
 printf("\n---Listagem final dos alunos---\n");
   for(int i=0; i<numalunos; i++){
   	printf("\nAluno %d:\n", i+1);
   	printf("Matricula: %d\n", alunos[i].matricula);
   	printf("Nome: %s\n", alunos[i].nome);
    printf("Codigo da Disciplina: %d\n", alunos[i].codigo);
    printf("Nota1: %.2f\n", alunos[i].nota1);
    printf("Nota2: %.2f\n", alunos[i].nota2);
    printf("Media Final: %.2f\n", alunos[i].media);
   }
 return 0;
}