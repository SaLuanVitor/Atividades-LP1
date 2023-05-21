#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// 1. Implemente um programa na Linguagem de Programação C, que solicite ao
// usuário valores preencher uma matriz 10 x 10, do tipo inteiro. Logo após o
// programa deverá mostrar na tela a localização (linha e a coluna) do elemento de
// maior valor.

#define LINHA 10
#define COLUNA 10

void lerValores(int matriz[LINHA][COLUNA])
{
  int i, j;
  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      printf("Digite o valor do item valores[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }
}

void encontrarMaiorValor(int matriz[LINHA][COLUNA], int *linhaMaior, int *colunaMaior)
{
  int i, j;
  int maior = matriz[0][0];
  *linhaMaior = 0;
  *colunaMaior = 0;

  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      if (matriz[i][j] > maior)
      {
        maior = matriz[i][j];
        *linhaMaior = i;
        *colunaMaior = j;
      }
    }
  }
}

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int valores[LINHA][COLUNA];

  lerValores(valores);

  int linhaMaior, colunaMaior;
  encontrarMaiorValor(valores, &linhaMaior, &colunaMaior);

  printf("O maior valor da matriz é: %d\n", valores[linhaMaior][colunaMaior]);
  printf("Localização: linha %d, coluna %d\n", linhaMaior, colunaMaior);

  return 0;
}
