#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// 2. Implemente um programa na Linguagem de Programação C, que solicite ao
// usuário valores preencher uma matriz 5 x 5, do tipo inteiro. A matriz deverá ser
// preencha com 1, na diagonal principal e com 0, nos demais elementos. Ao final,
// o programa deverá exibir, na tela, a matriz obtida.

#define LINHA 5
#define COLUNA 5

void porValores(int matriz[LINHA][COLUNA])
{
  int i, j;
  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      if (i == j)
      {
        matriz[i][j] = 1;
      }
      else
      {
        matriz[i][j] = 0;
      }
    }
  }
}
void imprimirValores(int matriz[LINHA][COLUNA])
{
  int i, j;
  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main()
{

  int matriz[LINHA][COLUNA];
  porValores(matriz);
  imprimirValores(matriz);

  return 0;
}