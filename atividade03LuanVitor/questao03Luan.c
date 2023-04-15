#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
/*
3-Desenvolva um programa na Linguagem C que contenha um procedimento que
recebe as 3 notas de um aluno e uma letra por parâmetro. Se a letra for A o
procedimento calcula a média aritmética das notas do aluno, se for P, a sua média
ponderada (pesos: 5, 3 e 2) e se for H, a sua média harmônica. A média calculada
também deve retornar por parâmetro. Ao final, o programa deverá imprimir uma
mensagem mostrando o tipo e o valor da média calculada.
*/


/*PROCEDIMENTOS DE CALCULAR MÉDIA*/
float mediaAritmetica(float primeiraNota, float segundaNota, float terceiraNota){
	
	float mediaA;
	
	mediaA = (primeiraNota + segundaNota + terceiraNota)/3.0;
	return mediaA;
}

float mediaPonderada(float primeiraNota, float segundaNota, float terceiraNota){
	float mediaP;
	
	mediaP = ((primeiraNota*5) + (segundaNota*3) + (terceiraNota*2))/10;
	
	return mediaP;
}

float mediaHarmonica(float primeiraNota, float segundaNota, float terceiraNota){
	float mediaH;
	
	mediaH = 3/((1/primeiraNota)+(1/segundaNota)+(1/terceiraNota));
	
	return mediaH;
}



int main(void){
	setlocale(LC_ALL, "Portuguese");
	
	int i;
	float nota[3], resultadoMedia;
	char tipoMedia;
	
	
	for(i = 1; i <= 3; i++){
		printf("Digite a %dº nota: ", i);
		scanf("%f",&nota[i-1]);
	}
	

		printf("Escolha qual tipo de média deseja realizar[A|P|H]:\n");
		printf("A - Aritmética\n");
		printf("P - Ponderada\n");
		printf("H - Harmonizada\n");
		fflush(stdin);
		printf("Digite sua opção: ");
		scanf("%c", &tipoMedia);
		
		if(tipoMedia == 'A'  || tipoMedia == 'A'){
			resultadoMedia = mediaAritmetica(nota[0], nota[1], nota[2]);
			printf("O resultado da média é %.2f",resultadoMedia);
			
		}else if(tipoMedia == 'P'  || tipoMedia == 'p'){
			resultadoMedia = mediaPonderada(nota[0], nota[1], nota[2]);
			printf("O resultado da média é %.2f",resultadoMedia);
			
		}else if(tipoMedia == 'H' || tipoMedia == 'h'){
			resultadoMedia = mediaPonderada(nota[0], nota[1], nota[2]);
			printf("O resultado da média é %.2f",resultadoMedia);
			
		}else{
			printf("Tipo inválido de média!");
		}
		return 0;	
}

