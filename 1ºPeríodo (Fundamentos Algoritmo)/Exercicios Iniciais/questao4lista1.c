#include <stdio.h>
/* 1)Ler o saldo médio do cliente (saldoMedio)
2) Se saldoMedio < 1000
    Escreva nenhum crédito
   Senao
    Se Sm <= 1499.99, calcule ct = (saldoMedio * 0.2)    
    Senao
     Se Sm <= 2499.99, calcule ct = (saldoMedio * 0.3)
	 Senao
	  calcule ct = (saldoMedio * 0.4)
	   Escreva ct */ 
	   
void main(){
	
	float saldoMedio;   //Saldo medio do cliente
	float creditoTotal; // Credito total 
	
	printf("Informe o seu saldo medio: \n\n");
	scanf("%f", &saldoMedio);
	
	if (saldoMedio < 1000){
		printf("voce tem direito a este credito: 0 \n\n");		
	}else{
	if (saldoMedio <= 1499.99){
	 creditoTotal = (saldoMedio*0.2);
	}else{
	if (saldoMedio <= 2499.99){
	 creditoTotal = (saldoMedio*0.3);
	}else{
	 creditoTotal = (saldoMedio*0.4);	
	}	
	printf("Voce tem direito a este credito: %2.f \n\n", creditoTotal);
	
	
	
	
	
}}}
