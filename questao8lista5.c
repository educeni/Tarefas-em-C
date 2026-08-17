#include <stdio.h>
/* QUESTÃO 08:
Fazer um programa que auxilie o órgão
regulador no cálculo do total de recursos
arrecadados com a aplicação de multas de
trânsito.
O programa deve ler as seguintes
informações para cada motorista:
? O número da carteira de motorista;
? Número de multas;
? Valor de cada uma das multas.
Deve ser exibido o valor da dívida de cada
motorista e ao final da leitura o total de
recursos arrecadados (somatório de todas
as multas). O programa também deverá
apresentar o número da carteira do
motorista que obteve o maior número de
multas. */


void main(){
	
	int numeroCarteira, multa, motoristaBarbeiro=0, barbeiroCNH=0, i;
	float valorMulta, valorMultaTotal=0 , valorMultaGeral=0;
	
	
	for(i=1;i<=5;i++)
	{
			
	printf("Forneca o numero da sua CNH: \n");
	scanf("%d", &numeroCarteira);
	
	printf("Informe o numero de multas: \n");
	scanf("%d", &multa);	
		
	printf("Informe o valor da multa: \n");
	scanf("%f", &valorMulta);
	
	valorMultaTotal+=valorMulta;
		
	if(multa>motoristaBarbeiro)	
	{
	motoristaBarbeiro+=multa;	
	barbeiroCNH = numeroCarteira;
	}
	}
	printf("Este e o numero da carteira de motorista com maior numero de multas: %d\n\n", barbeiroCNH);
	valorMultaGeral+=valorMultaTotal;
	printf("Este e o somatorio de todas as multas %.2f", valorMultaGeral);	
}
