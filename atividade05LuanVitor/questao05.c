#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 5. Implemente um programa na Linguagem de Programação C que preencha um vetor
// de 10 posições, com os valores informados pelo usuário. Logo após, o programa
// deverá verificar se existem valores repetidos no vetor, mostrando-os na tela.

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int i, j, count = 20;
  int vetorVerificacao[count];
  int repetidos[count];
  int qtdRepetidos = 0;

  for (i = 0; i < count; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &vetorVerificacao[i]);
  }

  for (i = 0; i < count; i++)
  {
    for (j = i + 1; j < count; j++)
    {
      if (vetorVerificacao[i] == vetorVerificacao[j])
      {
        repetidos[qtdRepetidos] = vetorVerificacao[i];
        qtdRepetidos++;
        break;
      }
    }
  }

  if (qtdRepetidos > 0)
  {
    printf("Os valores repetidos sao: ");
    for (i = 0; i < qtdRepetidos; i++)
    {
      printf("%d, ", repetidos[i]);
    }
  }
  else
  {
    printf("Nenhum valor repetido encontrado.");
  }

  return 0;
}