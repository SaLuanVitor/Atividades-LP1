#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");

	int i=0, filhos, salario, salarioTotal=0, totalFilhos=0, maiorSalario, salarioMin=0;
	char sair = 'n';
	
	do{
		printf("Sal�rio: ");
		scanf("%d", &salario);
		printf("Filhos: ");
		scanf("%d", &filhos);
		i++;
		
		salarioTotal = salarioTotal + salario;
		totalFilhos = totalFilhos + filhos;
		
		if(i == 1){
			maiorSalario = salario;
		}
		
		if(salario > maiorSalario){
			maiorSalario = salario;
		}
		
		if(salario == 1302){
			salarioMin++;
		}
		
		printf("Deseja sair? (s/n): ");
		fflush(stdin);
		scanf("%c", &sair);
	}while(sair == 'n' || sair == 'N');
	
	printf("M�dia salarial: R$ %d\n", salarioTotal/i);
	printf("M�dia de filhos: %d\n", totalFilhos/i);
	printf("Maior sal�rio: R$ %d\n", maiorSalario);
	printf("Porcentagem de pessoas que recebem Sal�rio minimo: %d%%", (salarioMin*100)/i);
}
