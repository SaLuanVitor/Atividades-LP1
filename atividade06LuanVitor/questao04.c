#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 4. Implemente um programa na Linguagem de Programação C, que solicite ao
// usuário valores o preenchimento de uma matriz 20 x 20, do tipo inteiro. O
// programa deverá solicitar ao usuário um valor qualquer, realizar a busca desse
// valor na matriz e, ao final, escrever a localização (linha e coluna) do valor
// encontrado ou uma mensagem de “não encontrado”, em caso contrário.

#define LINHA 20
#define COLUNA 20

void preencherMatriz(int matriz[LINHA][COLUNA])
{
  int i, j;
  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      printf("Digite o valor do elemento matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void buscarValor(int matriz[LINHA][COLUNA], int valor)
{
  int i, j;
  int encontrado = 0;
  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      if (matriz[i][j] == valor)
      {
        printf("Valor %d encontrado na linha %d, coluna %d\n", valor, i, j);
        encontrado = 1;
        break;
      }
    }
    if (encontrado)
      break;
  }
  if (!encontrado)
  {
    printf("Valor %d não encontrado na matriz.\n", valor);
  }
}

int main()
{
  int matriz[LINHA][COLUNA];
  int valor;

  preencherMatriz(matriz);

  printf("Digite o valor a ser buscado: ");
  scanf("%d", &valor);

  buscarValor(matriz, valor);

  return 0;
}
