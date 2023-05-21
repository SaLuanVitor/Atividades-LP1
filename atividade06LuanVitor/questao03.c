#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 3. Implemente um programa na Linguagem de Programação C, que solicite ao
// usuário valores o preenchimento de uma matriz 6 x 6, do tipo inteiro. O programa
// deverá levantar a quantidade de valores maiores que 10, encontrados na matriz
// preenchida pelo usuário, sendo o resultado apresentado na tela.

#define LINHA 6
#define COLUNA 6

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

int contarValoresMaiores10(int matriz[LINHA][COLUNA], int matrizMaiores[LINHA][COLUNA])
{
  int i, j;
  int count = 0;
  for (i = 0; i < LINHA; i++)
  {
    for (j = 0; j < COLUNA; j++)
    {
      if (matriz[i][j] > 10)
      {
        matrizMaiores[i][j] = matriz[i][j];
        count++;
      }
      else
      {
        matrizMaiores[i][j] = 0;
      }
    }
  }
  return count;
}

void imprimirMatriz(int matriz[LINHA][COLUNA])
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
  int matrizMaiores[LINHA][COLUNA];
  int i, j;

  lerValores(matriz);

  int quantidadeMaiores10 = contarValoresMaiores10(matriz, matrizMaiores);

  printf("Quantidade de valores maiores que 10: %d\n", quantidadeMaiores10);

  printf("Matriz com os valores maiores que 10:\n");
  imprimirMatriz(matrizMaiores);

  return 0;
}
