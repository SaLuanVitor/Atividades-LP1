#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1. Implemente um programa na Linguagem de Programação C, que solicite ao
// usuário os valores de preenchimento de uma variável do tipo struct, contendo
// campos para: nome, endereço, idade, telefone, data. O campo de data deverá ser
// também uma struct, com os campos: dia, mês e ano. Ao final, o programa deverá
// exibir, na tela, os dados preenchidos pelo usuário.
struct usuario
{
  char nome[50];
  char endereco[50];
  int idade;
  char telefone[15];
  struct data
  {
    int dia;
    int mes;
    int ano;
  } data;
};

void preencherDados(struct usuario *usr)
{
  printf("Digite seu nome: ");
  gets(usr->nome);

  printf("Digite seu endereço: ");
  gets(usr->endereco);

  printf("Digite sua idade: ");
  scanf("%d", &usr->idade);

  printf("Digite seu telefone: ");
  getchar(); // Limpar o caractere de nova linha pendente
  gets(usr->telefone);

  printf("Digite sua data de nascimento:\n");
  printf("Dia: ");
  scanf("%d", &usr->data.dia);

  printf("Mês: ");
  scanf("%d", &usr->data.mes);

  printf("Ano: ");
  scanf("%d", &usr->data.ano);
}

void exibirDados(struct usuario usr)
{
  puts("\nInformações do usuário: ");
  printf("Nome: %s \n", usr.nome);
  printf("Endereço: %s \n", usr.endereco);
  printf("Idade: %d \n", usr.idade);
  printf("Telefone: %s \n", usr.telefone);
  printf("Data de nascimento: %d/%d/%d \n", usr.data.dia, usr.data.mes, usr.data.ano);
}

int main()
{
  struct usuario usr;

  preencherDados(&usr);
  exibirDados(usr);

  return 0;
}
