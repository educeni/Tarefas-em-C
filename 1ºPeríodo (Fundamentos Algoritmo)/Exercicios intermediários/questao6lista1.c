#include <stdio.h>
/* 1) Ler o dia (dia) e o mes (mes) 
2) se o m = 1, entrao dia = d°dia do ano
   Senao
    Se m = 2, entao (d+31) = dia_do_ano*/
    
void main(){
	
	int dia;          // dia do mes
	int mes;          // mes
	int dia_do_ano;   // dia do ano
	
	printf("Informe qual o dia do mes: \n\n");
	scanf("%d", &dia);
	
	printf("Informe qual o mes: \n\n");
	scanf("%d", &mes);
	
	if (mes == 1){
		dia_do_ano = (dia); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 2){
	    dia_do_ano = (dia + 31); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);			
	}else{
	if (mes == 3){
        dia_do_ano = (dia + 59); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);	
	}else{
	if (mes == 4){
		dia_do_ano = (dia + 90); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 5){
		dia_do_ano = (dia + 120); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);		
	}else{
	if (mes == 6){
		dia_do_ano = (dia + 151); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 7){
		dia_do_ano = (dia + 181);
    }else{ 
	if (mes == 8){
		dia_do_ano = (dia + 212); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 9){
		dia_do_ano = (dia + 243);  
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 10){
		dia_do_ano = (dia + 273); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 11){
		dia_do_ano = (dia + 303); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}else{
	if (mes == 12){
		dia_do_ano = (dia + 334); 
		printf("este e o dia do ano: %d \n\n", dia_do_ano);
	}	
	}	
	}
		
    
	
}}}}}}}}}}
    
    
    
    
    
