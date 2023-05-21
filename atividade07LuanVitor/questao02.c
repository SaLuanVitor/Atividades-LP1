#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAMANHO 60
// 2. Imagine a seguinte situação: você precisa armazenar na memória os dados
// referentes a 60 alunos (nome e série) e suas notas disciplinas, inglês, francês,
// matemática e português. Como você poderia organizar essas informações para
// serem armazenadas na memória? Faça um esquema do formato imaginado por
// você.

struct aluno
{
  char nome[50];
  int serie;
  float nota_ingles;
  float nota_frances;
  float nota_matematica;
  float nota_portugues;
};

void infoAlunos(struct aluno *alunos, int index)
{
  printf("Digite o nome do aluno %d: ", index + 1);
  fgets(alunos[index].nome, sizeof(alunos[index].nome), stdin);

  printf("Digite a série do aluno %d: ", index + 1);
  scanf("%d", &(alunos[index].serie));
  getchar(); // Limpa o caractere de nova linha (\n) do buffer

  printf("Digite a nota de inglês do aluno %d: ", index + 1);
  scanf("%f", &(alunos[index].nota_ingles));
  getchar();

  printf("Digite a nota de francês do aluno %d: ", index + 1);
  scanf("%f", &(alunos[index].nota_frances));
  getchar();

  printf("Digite a nota de matemática do aluno %d: ", index + 1);
  scanf("%f", &(alunos[index].nota_matematica));
  getchar();

  printf("Digite a nota de português do aluno %d: ", index + 1);
  scanf("%f", &(alunos[index].nota_portugues));
  getchar();
  printf("\n");
}

void exibirDados(struct aluno *alunos, int i)
{
  printf("Informações do %dº aluno: \n", i + 1);
  printf("Nome: %s\n", alunos[i].nome);
  printf("Série: %d\n", alunos[i].serie);
  printf("Nota de inglês: %.2f\n", alunos[i].nota_ingles);
  printf("Nota de francês: %.2f\n", alunos[i].nota_frances);
  printf("Nota de matemática: %.2f\n", alunos[i].nota_matematica);
  printf("Nota de português: %.2f\n", alunos[i].nota_portugues);
  puts("-------------------------------------------------------------");
  printf("\n");
}

int main()
{
  struct aluno vetorAlunos[TAMANHO];
  int i;
  for (i = 0; i < TAMANHO; i++)
  {
    infoAlunos(vetorAlunos, i);
  }
  for (i = 0; i < TAMANHO; i++)
  {
    exibirDados(vetorAlunos, i);
  }

  return 0;
}
