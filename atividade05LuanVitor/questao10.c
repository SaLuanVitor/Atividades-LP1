#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 10.Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 12 posições com as informações do usuário e que ainda faça a soma dos valores
// de 2 posições quaisquer do vetor. Este programa deverá apresentar 3 funções,
// sendo:
// a. Função para preencher o vetor;
// b. Função para solicitar as duas posições quaisquer do vetor e realizar a soma;
// c. Função para mostrar na tela os valores armazenados no vetor, as duas
// posições e a soma correspondente ao valor das duas posições escolhidas
// pelo usuário

void preencherVetor(int vetor[], int tamanho)
{
  printf("Preencha o vetor com %d valores:\n", tamanho);
  for (int i = 0; i < tamanho; i++)
  {
    printf("Vetor[%d] = ", i);
    scanf("%d", &vetor[i]);
  }
}

void somarPosicoes(int vetor[])
{
  int posicao1, posicao2, soma;
  printf("Digite duas posições quaisquer do vetor para realizar a soma:\n");
  printf("Posição 1: ");
  scanf("%d", &posicao1);
  printf("Posição 2: ");
  scanf("%d", &posicao2);
  printf("Valores nas posições %d e %d: %d e %d\n", posicao1, posicao2, vetor[posicao1], vetor[posicao2]);
  soma = vetor[posicao1] + vetor[posicao2];
  printf("A soma dos valores das posições %d e %d é: %d\n", posicao1, posicao2, soma);
}

void mostrarVetor(int vetor[], int tamanho)
{
  printf("Valores armazenados no vetor:\n");
  for (int i = 0; i < tamanho; i++)
  {
    printf("Vetor[%d] = %d\n", i, vetor[i]);
  }
}

int main()
{
  int vetor[12];
  preencherVetor(vetor, 12);
  mostrarVetor(vetor, 12);
  somarPosicoes(vetor);
  return 0;
}