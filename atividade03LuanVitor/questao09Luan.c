#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");

	int i=0, filhos, salario, salarioTotal=0, totalFilhos=0, maiorSalario, salarioMin=0;
	char sair = 'n';
	
	do{
		printf("Salário: ");
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
	
	printf("Média salarial: R$ %d\n", salarioTotal/i);
	printf("Média de filhos: %d\n", totalFilhos/i);
	printf("Maior salário: R$ %d\n", maiorSalario);
	printf("Porcentagem de pessoas que recebem Salário minimo: %d%%", (salarioMin*100)/i);
}
