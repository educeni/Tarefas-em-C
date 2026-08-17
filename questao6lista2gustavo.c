#include <stdio.h>
/* 1)Ler o numero inteiro(i) e os valores (a,b,c)
2) se i= 1 e a>b>c
             escreva a,b,c
           senao
            se a>c>b
             escreva a,c,b
            senao
			 se b>a>c
			  escreva b,a,c
			 senao
			  se b>c>a
			   escreva b,c,a
			  senao
			   se c>a>b
			    escreva c,b,a
			   senao
			    escreva c,a,b 
	senao
	 se i=2 e a>b>c
	          escreva c,b,a
			senao
			 se a>c>b
			  escreva b,c,a
			 senao
			  se b>a>c
			   escreva c,a,b
			  senao
			   se b>c>a
			    escreva a,c,b
			   senao
			    se c>a>b
				 escreva b,a,c
				senao
				 escreva a,b,c
	 senao
	  se b<=a>=c
	   escreva b,a,c
	  senao
	   se a<b>=c
	    escreva a,b,c
	   senao
	    se a<c>b
		 escreva a,c,b	*/

void main(){
	
	int i;  // numero inteiro
	int a;  // valor de um numero qualquer a
	int b;  // valor de um numero qualquer b
	int c;  // valor de um numero qualquer c
	int maior; // maior valor
	int menor; // menor valor
	int medio; // valor medio
	
	printf("1 ////  2 //// 3 //// \n");
	prinft("escolha um numero acima: \n\n");
	scanf("%d", &i);
	
	printf("Agora insira um valor inteiro para a qualquer: \n\n");
	scanf("%d", &a);
	
	printf("Agora, insira um valor inteiro para b qualquer: \n\n");
	scanf("%d", &b);
	
	printf("Agora, insira um valor inteiro para c qualquer: \n\n");
	scanf("%d", &c);
	
	
	

