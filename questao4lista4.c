#include <stdio.h>
/* QUESTÃO 04: Faça um programa que leia
300 números reais. Ao final, devem ser
exibidas as seguintes informações:
a) A quantidade de valores negativos
digitados;
b) A média dos valores positivos.*/

void main(){
	
    float numero, mediaPositivos; // nº fornecidos pelo usuario,media dos nº positivos
    int i, quantidadePositivo = 0, somaPositivos =0, quantidadeNegativos = 0;   // variavel i, quantidade de valores negativos, qtd de positivos 

    for(i=1; i<=10; i++)
    {
      printf("Forneca um numero: \n");
      scanf("%f", &numero);
    
    // quantidade de numeros negativos
       if(numero < 0)
	   {
    	quantidadeNegativos = quantidadeNegativos + 1;
	   }
        if(numero > 0)
	    {
	   	quantidadePositivo = quantidadePositivo + 1;
	   	somaPositivos = somaPositivos + numero;
	    }
    }
	   printf("Esta e a quantidade de numeros negativos: %d\n", quantidadeNegativos);
	   mediaPositivos = (float)somaPositivos/quantidadePositivo;
	   printf("Esta e a media dos numeros positivos: %.1f\n", mediaPositivos);
}
