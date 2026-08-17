#include <stdio.h>
/* QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit. */
/* parametro = temperatura ///// retorno = graus fahrenheint */

float funcao(int graus)
{
	float farenheit;
	
	farenheit = (graus*1.8) + 32;
	
	return farenheit;
	
}

void main()
{
	int temperatura;
	float resultado;
	
	printf("forneca a temperatura em graus celsius: ");
	scanf("%d", &temperatura);
	
	resultado = funcao(temperatura);
	printf("Este e o resultado em farenheit = %.1f", resultado);
}
