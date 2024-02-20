#include <stdio.h>

struct Pessoa {
	char nome[50];
	int idade;
	char endereco[100];
};
int main() {
	struct Pessoa pessoa;
	  printf("Informe nome: \n");
	    scanf("%s", pessoa.nome);
	  printf("\nInforme a idade: \n");
	    scanf("%d", &pessoa.idade);
	  printf("\nInforme o endereco: \n");
	    scanf("%s", pessoa.endereco);
printf("\n---Dados armazenados---\n");
printf("Nome: %s\nIdade: %d\nEndereco: %s\n", pessoa.nome, pessoa.idade, pessoa.endereco);
 return 0;
}