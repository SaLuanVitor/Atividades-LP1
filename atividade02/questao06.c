#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*6) Desenvolva um programa, na linguagem de Programa��o C, que imprima todos os
n�meros em ordem decrescente 99 a 1.*/

int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	
	for(i = 99; i > 0; i--){
		printf("- %d ",i);
	}
}
