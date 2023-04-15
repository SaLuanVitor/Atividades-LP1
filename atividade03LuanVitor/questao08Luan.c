#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

/*
8-Desenvolva um programa na Linguagem C que contenha um procedimento para
cada operação listada no menu adiante.
MENU
1. Adição
2. Subtração
3. Multiplicação
4. Quociente da divisão
5. Resto da divisão
6. Potenciação
7. Média aritmética
O programa deverá ler os dois números inteiros, mais a opção do usuário. Em cada
operação, deverá ser impresso na tela o valor do resultado. Caso seja digitada uma
opção inválida, o programa deve exibir uma mensagem de erro.
*/

float adicao(float valor01, float valor02){
	float Adicao;
	Adicao = valor01 + valor02;
	return Adicao;
}
float subtracao(float valor01, float valor02){
	float Subtracao;
	Subtracao = valor01 - valor02;
	return Subtracao;
}
float multiplicacao(float valor01, float valor02){
	float Multiplicacao;
	Multiplicacao = valor01 * valor02;
	return Multiplicacao;
}
float quocienteDivisao(float valor01, float valor02){
	float QuocienteDivisao;
	QuocienteDivisao = valor01/valor02;
	return QuocienteDivisao;
}
float restoDivisao(float valor01, float valor02){
	float RestoDivisao;
	RestoDivisao = valor01 - (quocienteDivisao(valor01, valor02)*valor02);
	return RestoDivisao;
}
float potenciacao(float valor01, float valor02){
	float Potenciacao;
	int i;
	Potenciacao = valor01;
	for(i = 1; i < valor02; i++){
	Potenciacao = Potenciacao * valor01;
	}
	return Potenciacao;
}
float mediaAritmetica(float valor01, float valor02){
	float MediaAritmetica;
	MediaAritmetica = (valor01+valor02)/2;
	return MediaAritmetica;
}
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	float valor01, valor02;
	int menu;
	
	printf("Digite o primeiro valor: ");
	scanf("%f", &valor01);
	printf("Digite o segundo valor: ");
	scanf("%f", &valor02);
	system("cls");
	
	printf("MENU: \n");
	printf("1 - Adição \n");
	printf("2 - Subtração \n");
	printf("3 - Multiplicação \n");
	printf("4 - Quociente da divisão \n");
	printf("5 - Resto da divisão \n");
	printf("6 - Potenciação \n");
	printf("7 - Média aritmética \n");
	printf("8 - Sair \n");
	scanf("%d", &menu);
	puts("--------------------------------");
	
	switch(menu){
		case 1: 
			printf("%.2f",adicao(valor01, valor02));
		break;
		
		case 2: 
			printf("%.2f",subtracao(valor01, valor02));
		break;
		
		case 3: 
			printf("%.2f",multiplicacao(valor01, valor02));
		break;
		
		case 4: 
			printf("%.2f",quocienteDivisao(valor01, valor02));
		break;
		
		case 5: 
			printf("%.2f",restoDivisao(valor01, valor02));
		break;
		
		case 6: 
			printf("%.2f",potenciacao(valor01, valor02));
		break;
		
		case 7: 
			printf("%.2f",mediaAritmetica(valor01, valor02));
		break;
		
		case 8: 
			printf("Finalizado");
		break;
		
		default:
			printf("Erro, valor inválido do menu!");
		break;
	}
	
}
