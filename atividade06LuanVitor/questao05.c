#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 5. Implemente um programa na Linguagem de Programação C, que solicite ao
// usuário valores para preencher uma matriz 100 x 10, do tipo char, com as
// respostas de 10 questões de múltipla escolha, referentes à prova de 100 alunos.
// O programa deverá conter um gabarito, representado por um vetor com 10
// posições contendo as respostas corretas da prova. O programa deverá comparar
// as respostas de cada candidato com o gabarito e emitir um vetor Resultado,
// contendo a pontuação correspondente a cada aluno, sendo cada resposta correta
// equivalente a 1 ponto.

#define ALUNOS 100
#define QUESTOES 10

void preencherGabarito(char gabarito[QUESTOES])
{
  int i;
  printf("Preencha o gabarito:\n");
  for (i = 0; i < QUESTOES; i++)
  {
    printf("Gabarito da questão %d: ", i + 1);
    scanf(" %c", &gabarito[i]);
  }
}

void preencherRespostas(char matrizRespostas[ALUNOS][QUESTOES])
{
  int i, j;
  for (i = 0; i < ALUNOS; i++)
  {
    printf("Respostas do aluno %d:\n", i + 1);
    for (j = 0; j < QUESTOES; j++)
    {
      printf("Questão %d: ", j + 1);
      scanf(" %c", &matrizRespostas[i][j]);
    }
  }
}

void compararRespostas(char matrizRespostas[ALUNOS][QUESTOES], char gabarito[QUESTOES], int vetorResultado[ALUNOS])
{
  int i, j;
  for (i = 0; i < ALUNOS; i++)
  {
    int pontuacao = 0;
    for (j = 0; j < QUESTOES; j++)
    {
      if (matrizRespostas[i][j] == gabarito[j])
      {
        pontuacao++;
      }
    }
    vetorResultado[i] = pontuacao;
  }
}

void exibirResultado(int vetorResultado[ALUNOS])
{
  int i;
  for (i = 0; i < ALUNOS; i++)
  {
    printf("Aluno %d: Pontuação = %d\n", i + 1, vetorResultado[i]);
  }
}

int main()
{
  char matrizRespostas[ALUNOS][QUESTOES];
  char gabarito[QUESTOES];
  int vetorResultado[ALUNOS];

  preencherGabarito(gabarito);
  preencherRespostas(matrizRespostas);
  compararRespostas(matrizRespostas, gabarito, vetorResultado);
  exibirResultado(vetorResultado);

  return 0;
}
