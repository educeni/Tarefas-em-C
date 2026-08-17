#include <stdio.h>

/* QUESTÃO 06: Faça um programa que leia um
número N inteiro, menor ou igual a 18. Se for
maior do que 18, o programa exibirá uma
mensagem de erro e terminará a sua
execução; caso contrário, deverá exibir os
números no intervalo de 1 a 99 cujos
algarismos somem N.
Exemplo:
N = 12 Portanto, o programa deve exibir
os números que estão no
intervalo de 1 a 99, cujos
algarismos somam 12. Ou seja:
39, 48, 57, 66, 75, 84 e 93. */

void main(){
	
	int i, numero, unidade, dezena; // numero fornecido pelo usuario, unidade e dezena do numero devolvido. 
	
	printf("Forneca um numero: \n");
	scanf("%d", &numero);
	
	if(numero > 18)
	{
		printf("\nERRO!!!!!!!!");
	}
	else
	{
	 for(i=1; i<=99; i++)
	 {
		dezena = i/10;
		unidade = i%10;
		 	
		if(dezena+unidade == numero)
		{
		 	printf("%d ", i);
		}
	 }
	}	
}
