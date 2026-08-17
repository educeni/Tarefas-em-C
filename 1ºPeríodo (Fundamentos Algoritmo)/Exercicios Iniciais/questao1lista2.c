#include <stdio.h>
/*Ler altura(h) e Peso(p)
Se p/h² < 18,5
   Escreva abaixo do peso
Senão
  Se p/h² < 25
     Escreva Peso ideal
  Senão
     Se p/h² < 30
       Escreva sobrepeso
     Senão
       Se p/h² < 35
         Escreva obesidade Grau 1 
       Senão
         Se p/h² < 40
          Escreva obesidade Grau 2
         Senão 
          Escreva obesidade Grau 3*/

void main(){
	
	float altura;  // altura da pessoa
	float peso;    // peso da pessoa
	
	printf("Informe a sua altura: \n\n");
	scanf("%f", &altura);
	
	printf("Informe o seu peso: \n\n");
	scanf("%f", &peso);
	
	if(peso/(altura*altura)< 18.5){
		printf("Abaixo do peso. \n\n");
	}else{
	if(peso/(altura*altura)<25){
		printf("Peso ideal. \n\n");
	}else{
	if(peso/(altura*altura)<30){
		printf("Sobrepeso. \n\n");
	}else{
	if(peso/(altura*altura)<35){
	   printf("Obesidade grau 1");	
	}else{
	if(peso/(altura*altura)<40){
	   printf("Obesidade grau 2");	
	}else{
	   printf("Obesidade grau 3");
	}





}}}
}}
	
	
	
	
	
	
	
	
	
	


