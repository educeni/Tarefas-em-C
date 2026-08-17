#include <stdio.h>
/*Questão 1: 
1) Ler  o custo de fábrica (x) 
2) Ler % do distribuidor (y) 
3) Ler % de impostos (z)
4) Custo total =  x + (x . y) + (x . z) 
 5) Escreva Custo total*/

void main(){
	
   float custoFabrica; // custo de fábrica
   float porcentagem_distribuidor; // porcentagem distribuidor
   float porcentagem_impostos; // porcentagem de impostos
   float custoTotal; // custo total
   
   printf("Nos informe o seu custo de fabrica: \n\n");	
   scanf("%f", &custoFabrica);
   
   printf("Agora informe a porcentagem do distribuidor: \n\n");
   scanf("%f", &porcentagem_distribuidor);
   
   printf("Por ultimo informe a porcentagem dos impostos: \n\n");
   scanf("%f", &porcentagem_impostos);
   
   custoTotal = (custoFabrica + (custoFabrica*porcentagem_distribuidor) + (custoFabrica*porcentagem_impostos));
   
   printf("Esse e o custo total: %f. \n\n", custoTotal);
   
   
   
	
	
	
	
}

