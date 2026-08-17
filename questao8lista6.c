#include <stdio.h>
/* QUESTÃO 08: Faça um programa que leia
um número real x e um número inteiro y.
Em seguida, o programa deve ler 100
números reais e calcular quantos destes
estão no intervalo definido por [x-y,x+y]. */

void main(){
	
	int i, valor2, quantidade;
	float intervalo1, intervalo2, numero, valor;
	
	printf("Forneca um valor real: \n");
	scanf("%f", &valor);
	
	printf("Forneca um valor inteiro: \n");
	scanf("%d", &valor2);
	
	intervalo1 = valor - valor2;
	intervalo2 = valor+ valor2;
	
	for(i=1;i<=100;i++)
	{
		printf("Forneca um numero: \n");
		scanf("%f", &numero);
		
		if((intervalo1<=numero)&&(numero<=intervalo2))
		{
			quantidade++;
		}
	}
	printf("Esta e a quantidade de numeros reais no intervalo definido: %d", quantidade);
}
