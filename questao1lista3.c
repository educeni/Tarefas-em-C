#include <stdio.h>
/* 1) Ler dia1, mes1 e ano1 e ler dia2 mes2 e ano2
2) Se ano1 > ano2
       escreva dia1 / mes1 / ano1
   Senao
    se mes1 > mes2 
	   escreva dia1 / mes1 / ano1 
	senao
	 se dia1 > dia2
	    escreva dia1 / mes1 / ano1
	senao
	  se ano2 > ano1
	    escreva escreva dia2 / mes2 / ano2	   
	  senao
	   se mes2 > mes1 
	    escreva escreva dia2 / mes2 / ano2
	   senao
	    se dia2 > dia1 
	     escreva escreva dia2 / mes2 / ano2
	Senao
	 se ano1 = ano2
	  escreva escreva as duas datas sao iguais*/


void main(){
	
	int ano1;   // ano da primeira data escolhida
	int mes1;  // mes da primeira data escolhida
	int dia1; // dia da primeira data escolhida
	int ano2;  // ano da segunda data escolhida
	int mes2;  // mes da segunda data escolhida
	int dia2; // dia da segunda data escolhida
	
	printf("Insira o dia da sua primeira data: \n\n");
	scanf("%d", &dia1);
	
	printf("Insira o mes da sua primeira data: \n\n");
	scanf("%d", &mes1);
	
	printf("Insira o ano da sua primeira data: \n\n");
	scanf("%d", &ano1);
	
	printf("Insira o dia da segunda data: \n\n");
	scanf("%d", &dia2);
	
	printf("Insira o mes da segunda data: \n\n");
	scanf("%d", &mes2);
	
	printf("Insira o ano da segunda data: \n\n");
	scanf("%d", &ano2);
	
	if(ano1 > ano2){
		printf ("Esta e a data mais recente: %d/%d/%d. \n\n", dia1, mes1, ano1);
	}else{
	if(mes2 > mes1){
		printf ("Esta e a data mais recente: %d/%d/%d. \n", dia2, mes2, ano2);
	}else{
	if(dia2 > dia1){
		printf("Esta e a data mais recente: %d/%d/%d.", dia2, mes2, ano2);
	}else{
	if(ano2>ano1){
		printf("Esta e a data mais recente: %d/%d/%d.", dia2, mes2, ano2);
	}else{
	if(mes1 > mes2){
		printf("Esta e a data mais recente: %d/%d/%d.", dia1, mes1, ano1);
	}else{
	if(dia1 > dia2){
		printf("Esta e a data mais recente: %d/%d/%d.", dia1, mes1, ano1);
	}else{
	    printf("As duas datas sao iguais");	
	}
	}	
	}
	}	
	} 	
	}
	
	
	
}
