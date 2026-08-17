#include <stdio.h>
/*QUESTÃO 03: Joaozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.*/

/* 1)Ler o numero em reais que Joaozinho investiu ( investimento)
2) Ler o rendimento mensal em porcentagem ( rendimento ) (dividir por 100)
3) Ler a quantidade de anos de investimento ( multiplicar por 12 ) ( meses)
4) saldo disponivel na conta = investimento + ( investimento * rendimento(em decimal) por x meses)

*/


void main(){
	
	int rendimento, anos;                        // rendimento ao mes e quantos meses rendeu
	float investimento , saldoTotal; // Quanto tiririca investiu, Saldo disponivel na conta e rendimento em decimal
	
	printf("Informe quanto voce investiu: \n\n");
	scanf("%f", &investimento);
	
	printf("Informe o seu rendimento mensal em porcentagem: \n\n");
	scanf("%d", &rendimento);
	
	printf("Informe quantos anos ficou rendendo: \n\n");
	scanf("%d", &anos);

	saldoTotal = investimento+(investimento*rendimento/100*anos*12);
	
	printf("\nEste e o saldo disponivel na conta: %.2f", saldoTotal);
	
}
