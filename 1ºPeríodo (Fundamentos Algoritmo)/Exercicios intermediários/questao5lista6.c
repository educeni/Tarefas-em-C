#include <stdio.h>
/* QUESTÃO 05: Elabore um programa que
calcule a média ponderada de n elementos.
Observação: na média ponderada, cada
elemento possui um peso que representa a
sua contribuição no cálculo da média final. */

void main(){
	
	int numero, i, valor, valorFinal=0, peso, pesoTotal=0;
	float mediaFinal;
	
	printf("Informe quantos elementos voce vai usar: \n");
	scanf("%d", &numero);
	
	for(i=1;i<=numero;i++)
	{
		printf("Forneca um numero: \n");
		scanf("%d", &valor);
		
		printf("Forneca o peso desse valor na media final: \n");
		scanf("%d", &peso);
		
		pesoTotal+=peso;
		valorFinal+=(valor*peso);
	}
	mediaFinal = (float)valorFinal/pesoTotal;
	printf("Esta e a media final: %.2f", mediaFinal);
	
}
