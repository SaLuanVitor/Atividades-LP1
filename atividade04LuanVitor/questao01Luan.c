#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//1. Escreva um programa que leia uma sequ�ncia de n valores, um de
//cada vez e imprima a quantidade de valores negativos. O programa
//deve perguntar ao usu�rio quantos n�meros ser�o informados.

//a) Insira tratamento de erro caso o usu�rio digite um n menor
//do que 1.
//b) Acrescente uma forma do continuar o programa quantas vezes
//o usu�rio desejar.
//c) O programa deve rodar pelo menos uma vez.

int quantidadeNumeros(int quantidade){
	
	if(quantidade < 1){
		printf("Valor inv�lido de entrada!\n\n");
		printf("Digite um valor maior que 1...\n\n");
	}else {
		return quantidade;
	}
}
float verificarNegativo(float verificar){
	int contarNumeroNegativo = 0;
	if (verificar < 0){
		  contarNumeroNegativo++;
	}else{
		return 0;
	}
	return contarNumeroNegativo;
}

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	int i, condicao, quantidade, quantidadeNegativos = 0;
	float verificar;
	
	do{
		printf("Informe quantos n�meros deseja ler: ");
		scanf("%d", &quantidade);
		quantidadeNumeros(quantidade);
		
		for(i = 1; i <= quantidade; i++){
			printf("Digite o %d� n�mero: ", i);
			scanf("%f", &verificar);
			quantidadeNegativos = quantidadeNegativos + verificarNegativo(verificar);
		}
		if(quantidade >= 1){
		printf("A quantidade de n�meros negativos contados foram: %d\n", quantidadeNegativos);
		system("pause");
		system("cls");
		quantidadeNegativos = 0;
		}
		printf("Deseja continuar? pressione qualquer n�mero\n");
		printf("Deseja sair? pressione 0\n");
		scanf("%d", &condicao);
		system("pause");
		system("cls");
	}while(condicao != 0);
}
