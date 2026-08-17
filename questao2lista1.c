#include <stdio.h>
/* 1) Ler a idade do nadador (idade)
2) Se for x =< 4 
    escreva Infantil A
   Senao 
    Se x=<7 
     escreva Infantil B
    Senao
     Se x=<10
      Escreva Infantil C
     Senao 
      Se x=<13
       Escreva Juvenil A
      Senao
       Se x=<17
        escreva juvenil B
       Senao
        escreva Adulto */

void main(){
	
	int idade; //idade do nadador
	
	printf("Ola, insira a idade: \n\n");
	scanf("%d", &idade);
	
	if (idade <= 4){
		printf("Infantil A");}
	else{	
	if (idade <= 7){
		printf ("Infantil B");}
	else{
	if (idade <= 10){
		printf("Infantil C");}
	else{
	if (idade <= 13){
		printf("Juvenil A");}
	else{
	if (idade <= 17){
		printf ("Juvenil B");}
	else{
		printf ("Adulto");}
		
}}}}}

