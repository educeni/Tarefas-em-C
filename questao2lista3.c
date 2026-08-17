#include <stdio.h>
/* 1) Ler a figura: [C]írculo, [R]etângulo, [Q]uadrado ou [T]riângulo
2) Se a figura escolhida for o circulo,
     então Acírculo = pi.raio2 , onde pi = 3.14159;
      escrever Acirculo
   Senao
    Se a figura escolhida for o triângulo
	  então Atriângulo = (base.altura)/2.
	   escrever Atriângulo
	Senao
	 Se a figura escolhida for o retangulo
	  então Aretângulo = base.altura;
	    escrever Aretangulo
	Senao
	 Se a figura escolhida for o quadrado
	   então Aquadrado = lado2;
	    escrever Aquadrado
	Senão
	 Escrever ERRO: o usuario escolheu uma opcao invalida.*/


void main(){
	
	int figura;              // figura escolhida
	float area_circulo;      // area do circulo
	float area_triangulo;    // area do triangulo
	float area_retangulo;   // area do retangulo
	float area_quadrado;   // area do quadrado
	float raio;            // raio do circulo
	float base;            // base do triangulo   e do retangulo
	float altura;          // altura do triangulo e do retangulo
	float lado;            // valor do lado do quadrado
	
	
	printf("Escolha uma figura de acordo com o numero abaixo: \n\n");
	printf("1 - Circulo // 2- Triangulo // 3- Retangulo // 4- Quadrado\n\n");
	scanf("%d", &figura);
	
	if(figura == 1){
      printf("Forneca o raio: \n\n");
      scanf("%f", &raio);
	  area_circulo = 3.14159*raio*raio;
	  printf("Esta e a area aproximada do circulo: %.3f\n\n", area_circulo);	
	  
	}else{
	if(figura == 2){
	  printf("Forneca o valor da base: \n\n");
	  scanf("%f", &base);
	  printf("Agora forneca o valor da altura: \n\n");
	  scanf("%f", &altura);
	  area_triangulo = (base*altura)/2;
	  printf("Esta e area aproximada do triangulo: %.3f\n\n", area_triangulo);
	}else{
	if(figura == 3){
		printf("Forneca o valor da base: \n\n");
		scanf("%f", &base);
		printf("Agora forneca o valor da altura: \n\n");
		scanf("%f", &altura);
		area_retangulo = base*altura;
		printf("Esta e a area aproximada do retangulo: %.3f\n\n", area_retangulo);
	}else{
	if(figura == 4){
		printf("Forneca o valor do lado: \n\n");
		scanf("%f", &lado);
		area_quadrado = lado*lado;
		printf("Esta e a area aproximada do quadrado: %.3f\n\n", area_quadrado);
	}else{
		printf("ERRO: OPCAO INVALIDA");
		
	}
	}	
		
	}	
	}
	
	
}
