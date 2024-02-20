#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};
int main() {
 struct Aluno alunos[10];
  struct Aluno aprovados[10], reprovados[10];
   int numAprovados=0, numReprovados=0;
    printf("---Informe os dados dos alunos---\n");
     for (int i=0; i<10; i++) {
        printf("\n%d - Aluno:\n", i+1);
        printf("Nome: ");
          scanf("%s", alunos[i].nome);
        printf("Matricula: ");
          scanf("%d", &alunos[i].matricula);
        printf("Media Final: ");
          scanf("%f", &alunos[i].mediaFinal);
    }
    for (int i=0; i<10; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[numAprovados] = alunos[i];
            numAprovados++; } 
		else {
            reprovados[numReprovados] = alunos[i];
            numReprovados++; }
    }
  printf("\n---Alunos Aprovados---\n");
    for (int i=0; i < numAprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matricula: %d\n", aprovados[i].matricula);
        printf("Media Final: %.2f\n\n", aprovados[i].mediaFinal);
    }
  printf("\n---Alunos Reprovados---\n");
    for (int i=0; i < numReprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matricula: %d\n", reprovados[i].matricula);
        printf("Media Final: %.2f\n\n", reprovados[i].mediaFinal);
    }
  return 0;
}