#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 /*
 6-Desenvolva um programa na Linguagem C que contenha uma fun��o que leia a
idade de 10 pessoas. Ao final, a fun��o dever� exibir na tela a idade da pessoa mais
nova, a m�dia das idades e a porcentagem de pessoas com idade entre 24 a 30
anos
 */

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int pessoas, idade, menorIdade;
	float mediaIdades, pessoas24a30;
	
	pessoas = 1;
	while(pessoas <= 10){
		
		printf("Digite a idade da %d� pessoa: ", pessoas);
		scanf("%d", &idade);
		if(pessoas <= 1){
			menorIdade = idade;
		} 
		if(idade < menorIdade){
			menorIdade = idade;
		}
		if(idade >= 24 && idade <= 30){
			pessoas24a30++;
		}
		
		mediaIdades = mediaIdades + idade;
		
		pessoas++;
	}
	mediaIdades = mediaIdades/10;
	pessoas24a30 = pessoas24a30*100/10;
	printf("A pessoa mais nova tem %d ano(s)\n", menorIdade);
	printf("A m�dia das idades � %.2f\n", mediaIdades);
	printf("A porcentagem de pessoas de 24 anos a 30 anos � %.1f%%", pessoas24a30);
}
