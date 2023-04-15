#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
/*2) Desenvolva um programa, na linguagem de Programa��o C, que fa�a a leitura da
idade de 10 pessoas. Ao final, o programa dever� exibir a idade da pessoa mais
nova, a idade m�dia das pessoas e a porcentagem de pessoas com idade entre 24
a 30 anos.*/
int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i, verificaIdadePessoa, idadePessoaMaisNova;
	float mediaIdade, contaIntervaloIdade;
	
	for(i = 1; i <= 10; i++){
		printf("Digite a idade da %d� pessoa: ",i);
		scanf("%d", &verificaIdadePessoa);
		
		mediaIdade = mediaIdade + verificaIdadePessoa;
		if(i == 1){
			idadePessoaMaisNova = verificaIdadePessoa;
		}
		if(verificaIdadePessoa < idadePessoaMaisNova){
			idadePessoaMaisNova = verificaIdadePessoa;
		}
		
		if(verificaIdadePessoa >= 24 && verificaIdadePessoa <= 30){
			contaIntervaloIdade++;
		}
	}
	
	printf("A pessoa mais nova: %d ano(s).\n",idadePessoaMaisNova);
	printf("A idade m�dia: %.2f ano(s).\n", mediaIdade/10);
	printf("Porcentagem que possui idade entre 24 e 30 anos: %.0f%%",(contaIntervaloIdade*100)/10);
}
