#include <stdio.h>
/* QUESTÃO 07: Faça um programa que leia
150 números reais e, ao final, exiba:
a) A soma dos 50 primeiros;
b) menor número do 51° ao 100°
valores fornecidos;
c) A média entre os últimos 50
valores. */

void main(){
	
	int i;
	float numero, soma=0, menorNumero=100000000, mediaDosUltimos, somaUltimos=0;
	
	
	for(i=1;i<=150;i++)
	{
		printf("Forneca um numero real: \n");
		scanf("%f", &numero);
		
		if(i<=50)
		{
			soma+=numero;
		}
		else if(51<=i<=100)
		{
			if(i<menorNumero)
			{
				menorNumero+=numero;
			}
		}
		else
		{
			somaUltimos+=numero;
		}
	}
	printf("Esta e a soma dos 50 primeiros numeros: %.2f\n", soma);
	printf("Este e o menor numero entre o numero 51º e 100º: %.2f\n", menorNumero);
	
	mediaDosUltimos = somaUltimos/50;
	printf("Esta e a media dos ultimos 50 numeros: %.2f\n", mediaDosUltimos);
}


