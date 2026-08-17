#include <stdio.h>
/* QUESTÃO 03:
Implementar um programa que leia um valor
inteiro n1. Se este não estiver no intervalo de
100 a 999, uma mensagem deve ser exibida ao
usuário informando que o número é inválido e,
em seguida, a execução do programa terminará.
Caso o valor esteja no intervalo definido, o
programa deverá criar um novo valor n2 (e exibi-
lo ao final) contendo os mesmos algarismos de

n1, porém em ordem crescente.
Exemplos:
n1 514
n2 145
n1 929
n2 299
n1 124
n2 124
Nota:
Como definido no enunciado, n1 consiste em um
número inteiro positivo, com 3 algarismos. n2
também será um único número! */

void main(){
	
	int numero1, centena, dezena, unidade, dame;  // numero escolhido pelo usuario, dame = pezinho
	int numero2;                                  // numero devolvido pelo sistema
	
	printf("Informe um numero inteiro positivo de 3 algarismos: \n\n");
	scanf("%d", &numero1);
	
	if(numero1>999 || numero1<100){
		printf("O numero escolhido e invalido\n\n");
	}
	else{	
	    centena = numero1/100 ;
	    dezena = (numero1/10) % 10;
	    unidade = numero1 % 10;
	}
    if(dezena>unidade){
    	dame = unidade;
    	unidade = dezena;
    	dezena = dame;
	}
	if(centena>unidade){
		dame = unidade;
		unidade = centena;
		centena = dame;
	}
	if (centena>dezena){
    	dame = dezena;
    	dezena = centena;
    	centena = dame;
    }
	printf("\nEsta e a ordem crescente: %d%d%d", centena, dezena, unidade);
}
