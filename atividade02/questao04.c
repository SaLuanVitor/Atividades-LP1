#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*4) Desenvolva um programa, na linguagem de Programação C, que leia um número
não determinado de valores. O laço de repetição se encerrará quando o usuário
digitar o valor zero. Ao final, o programa deverá mostrar na tela a média aritmética
dos valores lidos, a quantidade de valores positivos, a quantidade de valores
negativos, o percentual de valores negativos e o percentual positivos.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float i, verificarNumero,mediaAritmetica, quantidadeNumPositivos = 0, quantidadeNumNegativos = 0;
	
	i = 1.0;
	do{
		printf("%.0f - Digite um número: ",i);
		scanf("%f", &verificarNumero);
		i++;
		
		if(verificarNumero > 0){
			quantidadeNumPositivos++;
		}else if(verificarNumero < 0){
			quantidadeNumNegativos++;
		}
		
		mediaAritmetica = mediaAritmetica + verificarNumero;
		
		system("Pause");
		system("cls");
	}while(verificarNumero != 0);
	i = i - 2.00;
	
	printf("A média aritmética dos valores: %.2f\n\n",mediaAritmetica/i);
	printf("Quantidade de números \nPositivos: %.0f\nNegativos: %.0f\n\n",quantidadeNumPositivos, quantidadeNumNegativos);
	printf("Porcentagem de números \nPositivos: %.0f%%\nNegativos: %.0f%%\n",(quantidadeNumPositivos*100)/i,(quantidadeNumNegativos*100)/i);
	return 0;
}
