#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//6. Fa�a um algoritmo que receba um peso em tonelada e converta para
//gramas
float converterToneladaGrama(float tonelada){
	float convertido;
	convertido = tonelada * 1000000;
	return convertido;
}

int main(void){
	setlocale(LC_ALL, "Portuguese");
	float tonelada;
	
	printf("Digite o n�mero de toneladas a serem convertidas: ");
	scanf("%f", &tonelada);
	
	printf("%.2f toneladas equivalem a %.2fg", tonelada, converterToneladaGrama(tonelada));
}
