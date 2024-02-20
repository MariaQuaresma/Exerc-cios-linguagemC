#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    char endereco[100];
    char telefone[20];
};
void ordenarpessoas(struct Pessoa pessoas[5]) {
    int i, j;
    struct Pessoa temp;
      for (i=0; i<5; i++) {
        for (j=i+1; j<5; j++) {
            if (strcmp(pessoas[i].nome, pessoas[j].nome) > 0) {
                temp = pessoas[i];
                pessoas[i] = pessoas[j];
                pessoas[j] = temp;  }
        }
    }
}
int main() {
    struct Pessoa pessoas[5];
    for (int i=0; i<5; i++) {
        printf("\nInforme o nome: ");
          scanf("%s", pessoas[i].nome);
        printf("Informe o endereco: ");
          scanf("%s", pessoas[i].endereco);
        printf("Informe o telefone: ");
          scanf("%s", pessoas[i].telefone);
    }
  ordenarpessoas(pessoas);
    printf("\n---Pessoas em ordem alfabetica---\n");
    for (int i=0; i<5; i++) {
        printf("\nNome: %s\n", pessoas[i].nome);
        printf("Endereco: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n", pessoas[i].telefone);
    }
 return 0;
}