#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 3. Implemente um programa na Linguagem de Programação C que crie um cadastro
// de contas bancarias, com as seguintes informações: número da conta, nome do
// cliente e saldo. O cadastro conterá apenas 15 contas e não pode haver mais de
// uma conta com o mesmo número. O programa desenvolvido deverá apresentar o
// menu de opções, com as opções a seguir:
// Menu de Opções:
// 1. Cadastrar contas
// 2. Visualizar todas as contas
// 3. Excluir a conta com menor saldo (suponha que não tem saldos
// iguais)
// 4. Sair

#define MAX_CONTAS 15

struct Conta
{
  int numeroConta;
  char nomeCliente[50];
  float saldo;
};

void cadastrarConta(struct Conta contas[], int *numContas)
{
  if (*numContas >= MAX_CONTAS)
  {
    printf("Limite máximo de contas atingido.\n");
    return;
  }

  struct Conta novaConta;
  printf("Digite o número da conta: ");
  scanf("%d", &novaConta.numeroConta);
  getchar();
  for (int i = 0; i < *numContas; i++)
  {
    if (novaConta.numeroConta == contas[i].numeroConta)
    {
      printf("Já existe uma conta com esse número.\n");
      return;
    }
  }

  printf("Digite o nome do cliente: ");
  fgets(novaConta.nomeCliente, sizeof(novaConta.nomeCliente), stdin);

  printf("Digite o saldo da conta: ");
  scanf("%f", &novaConta.saldo);
  getchar();

  contas[*numContas] = novaConta;
  (*numContas)++;

  printf("Conta cadastrada com sucesso.\n");
}

void visualizarContas(struct Conta contas[], int numContas)
{
  if (numContas == 0)
  {
    printf("Não há contas cadastradas.\n");
    return;
  }

  printf("Listagem de contas:\n");
  for (int i = 0; i < numContas; i++)
  {
    printf("Número da conta: %d\n", contas[i].numeroConta);
    printf("Nome do cliente: %s", contas[i].nomeCliente);
    printf("Saldo: %.2f\n", contas[i].saldo);
    printf("------------------------\n");
  }
}

void excluirContaMenorSaldo(struct Conta contas[], int *numContas)
{
  if (*numContas == 0)
  {
    printf("Não há contas cadastradas.\n");
    return;
  }

  int indiceMenorSaldo = 0;
  float menorSaldo = contas[0].saldo;

  for (int i = 1; i < *numContas; i++)
  {
    if (contas[i].saldo < menorSaldo)
    {
      indiceMenorSaldo = i;
      menorSaldo = contas[i].saldo;
    }
  }

  printf("Conta excluída:\n");
  printf("Número da conta: %d\n", contas[indiceMenorSaldo].numeroConta);
  printf("Nome do cliente: %s", contas[indiceMenorSaldo].nomeCliente);
  printf("Saldo: %.2f\n", contas[indiceMenorSaldo].saldo);
  printf("------------------------\n");

  for (int i = indiceMenorSaldo; i < *numContas - 1; i++)
  {
    contas[i] = contas[i + 1];
  }

  (*numContas)--;
}

int main()
{
  struct Conta contas[MAX_CONTAS];
  int numContas = 0;
  int opcao;

  do
  {
    printf("Menu de Opções:\n");
    printf("1. Cadastrar contas\n");
    printf("2. Visualizar todas as contas\n");
    printf("3. Excluir a conta com menor saldo\n");
    printf("4. Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);
    getchar();
    printf("------------------------\n");

    switch (opcao)
    {
    case 1:
      cadastrarConta(contas, &numContas);
      break;
    case 2:
      visualizarContas(contas, numContas);
      break;
    case 3:
      excluirContaMenorSaldo(contas, &numContas);
      break;
    case 4:
      printf("Encerrando o programa.\n");
      break;
    default:
      printf("Opção inválida.\n");
      break;
    }

    printf("------------------------\n");
  } while (opcao != 4);

  return 0;
}
