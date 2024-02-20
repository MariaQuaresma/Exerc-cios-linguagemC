#include <stdio.h>

struct  aluno {
	char nome[50];
	int matricula;
	char curso[50];
};
int main(){
	struct aluno alunos[5];
 for(int i=0; i<5; i++){
 	printf("\n%d - Informe os dados do aluno \n", i+1);
 	  printf("Nome: ");
 	    scanf("%s", alunos[i].nome);
 	  printf("Numero de matricula: \n");
 	    scanf("%d", &alunos[i].matricula);
 	  printf("Curso: \n");
 	    scanf("%s", alunos[i].curso);
 	}
printf("\n---Dados dos alunos---\n");
 for(int i=0; i<5; i++){
   printf("\nAluno %d! \n", i+1);
   printf("Nome: %s\n", alunos[i].nome);
   printf("Numeros de matricula: %d\n", alunos[i].matricula);
   printf("Curso: %s\n", alunos[i].curso);
}
 return 0;
}