#include <stdio.h>
/* QUESTÃO 03: Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.
 1)Ler o numero em reais que Joaozinho investiu ( investimento)
2) Ler o rendimento mensal em porcentagem ( rendimento ) (dividir por 100)
3) Ler a quantidade de anos de investimento ( multiplicar por 12 ) ( meses)
4) saldo disponivel na conta = investimento + ( investimento * rendimento(em decimal) por x meses)
 */



void main(){
	
	float investimento, rendimentoFixo, rendimento, valorConta; // investimento , rendimento(%), rendimento(0,1), valor
	int anos, meses, i;                         // anos de investimento , anos em meses (x12)
	
	printf("\nInforme quanto voce investiu: \n");
	scanf("%f", &investimento);
	
	printf("Forneca o rendimento mensal em porcentagem: \n");
	scanf("%f", &rendimentoFixo);
	
    printf("Forneca a quantidade de anos de investimento: \n");
	scanf("%d", &anos);
	
	//transformando anos em meses
	meses = anos * 12;
	
	for(i=1;i<=meses;i++)
	{
		rendimento = rendimentoFixo * meses;
		valorConta = rendimento + investimento;
	}
    printf("R$%.2f", valorConta);
}
