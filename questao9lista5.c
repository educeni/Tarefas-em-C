#include <stdio.h>
/* QUESTÃO 09:
Escrever um programa que encontre o
quinto número maior que 1000, cuja
divisão por 11 tenha resto 5. */

void main(){
	
   int i=1000, quantidade=0, resto; // declaração de variáveis
	
   do
   {
   	i++; 
   	resto = i % 11;
    if(resto == 5)
    {
    quantidade++;	
	}
   }
   while(quantidade==5);
   
    printf("%d ", i);	
}
