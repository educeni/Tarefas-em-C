#include <stdio.h>
/* QUESTÃO 02:
Implementar uma função que converta
determinada temperatura em graus Celsius
para graus Fahrenheit. */

/* parametro = graus celsius  ///// retorno = graus farofeira*/

// funcao

float funcao (float celsius)
{
	float fahrenheit;
	
	fahrenheit = (celsius*1.8)+32;

	return fahrenheit;
}


void main()
{
	float c, f;
	
	printf("Forneca uma temperatura em celsius: \n");
	scanf("%f", &c);
	
	f = funcao (c);
	printf("\n\n%.1f = %.1f\n", c, f);
}
