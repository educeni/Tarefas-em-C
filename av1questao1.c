#include <Stdio.h>

/*Questão 01 [2,5 pontos]:
Pede-se a implementação de um programa que leia um
número inteiro que deve pertencer ao intervalo de 1 a
9999. Caso o valor fornecido não esteja na faixa
especificada, uma mensagem de erro deverá ser
exibida ao usuário e a execução do programa
finalizada. Por outro lado, se o número fornecido for
válido, o programa deverá exibi-lo por extenso.
Exemplos:
numero1: 5438
cinco mil quatrocentos trinta oito
numero2: 6215
seis mil duzentos quinze*/

void main()
{
	int numero, milhar, centena, dezena, unidade;
	
	printf("Forneca um valor de 1 a 9999: \n");
	scanf("%d", &numero);
	
	if((numero<1)||(numero>9999))
	{
		printf("Erro: o numero nao se encontra no intervalo especificado.");
		return;
	}
	else
	{
		milhar = numero/1000; 
		centena = (numero%1000)/100;
		dezena =  ((numero%1000)%100)/10;
		unidade = ((numero%1000)%100)%10;
	}
	switch(milhar)
	{
		case 1: printf("mil ");
		        break;
		case 2: printf("dois mil ");	
				break;
		case 3: printf("tres mil ");
				break;
		case 4: printf("quatro mil ");			        
		        break;
		case 5: printf("cinco mil ");			      
		        break;
		case 6: printf("seis mil ");			      
		        break;
		case 7: printf("sete mil ");			      
		        break;
		case 8: printf("oito mil ");			      
		        break;
		case 9: printf("nove mil ");						     
		        break;
	}
		switch(centena)
	{
		case 1: if((dezena==0)||(unidade==0)){
		        printf("cem ");}
		        else
				{
		        printf("cento ");	
				}
		        break;
		case 2: printf("duzentos ");	
				break;
		case 3: printf("trezentos ");
				break;
		case 4: printf("quatrocentos ");			        
		        break;
		case 5: printf("quinhentos ");			      
		        break;
		case 6: printf("seiscentos ");			      
		        break;
		case 7: printf("setecentos ");			      
		        break;
		case 8: printf("oitocentos ");			      
		        break;
		case 9: printf("novecentos ");						     
		        break;	        
    }
	switch(dezena)
	{
		case 1: if(unidade==0){
				printf("dez ");}
				else if(unidade==1){
				printf("onze ");}
				else if(unidade==2){
				printf("doze ");}
				else if(unidade==3){
				printf("treze ");}
				else if(unidade==4){
				printf("catorze ");}
				else if(unidade==5){
				printf("quinze ");}
				else if(unidade==6){
				printf("dezesseis ");}
				else if(unidade==7){
				printf("dezessete ");}
				else if(unidade==8){
				printf("dezoito ");}
				else{
				printf("dezenove ");}
				break;					

		case 2: printf("vinte ");	
				break;
				
		case 3: printf("trinta ");
				break;
				
		case 4: printf("quarenta ");			        
		        break;
		        
		case 5: printf("cinquenta ");			      
		        break;
		        
		case 6: printf("sessenta ");			      
		        break;
		        
		case 7: printf("setenta ");			      
		        break;
		        
		case 8: printf("oitenta ");			      
		        break;
		        
		case 9: printf("noventa ");						     
		        break;	        
    }
    if(dezena!=1){
		switch(unidade)
	{
		case 1: printf("um ");
		        break;
		case 2: printf("dois ");	
				break;
		case 3: printf("tres ");
				break;
		case 4: printf("quatro ");			        
		        break;
		case 5: printf("cinco ");			      
		        break;
		case 6: printf("seis ");			      
		        break;
		case 7: printf("sete ");			      
		        break;
		case 8: printf("oito ");			      
		        break;
		case 9: printf("nove ");						     
		        break;
    }
    }
}
