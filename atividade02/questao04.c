#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*4) Desenvolva um programa, na linguagem de Programa��o C, que leia um n�mero
n�o determinado de valores. O la�o de repeti��o se encerrar� quando o usu�rio
digitar o valor zero. Ao final, o programa dever� mostrar na tela a m�dia aritm�tica
dos valores lidos, a quantidade de valores positivos, a quantidade de valores
negativos, o percentual de valores negativos e o percentual positivos.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float i, verificarNumero,mediaAritmetica, quantidadeNumPositivos = 0, quantidadeNumNegativos = 0;
	
	i = 1.0;
	do{
		printf("%.0f - Digite um n�mero: ",i);
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
	
	printf("A m�dia aritm�tica dos valores: %.2f\n\n",mediaAritmetica/i);
	printf("Quantidade de n�meros \nPositivos: %.0f\nNegativos: %.0f\n\n",quantidadeNumPositivos, quantidadeNumNegativos);
	printf("Porcentagem de n�meros \nPositivos: %.0f%%\nNegativos: %.0f%%\n",(quantidadeNumPositivos*100)/i,(quantidadeNumNegativos*100)/i);
	return 0;
}
