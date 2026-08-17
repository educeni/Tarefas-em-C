#include <stdio.h>
/* 1)Ler a altura da pessoa (altura) e o genero (genero)
2) Se for homem, calcule (72*7*altura) - 58 = Peso Ideal
   Senao
    Calcule (62*1*altura) - 44.7 = Peso Ideal
     Escreva este é o peso ideal*/
     
void main(){
	
	float altura;     // altura da pessoa
	float pesoIdeal;  // Peso ideal segundo o IMC
	int genero;       // genero a pessoa (homem ou mulher)
	
	printf("informe a sua altura: \n\n");
	scanf("%f", &altura);
	
	printf("Agora escolha o seu genero de acordo com o numero: \n\n");
	printf("1 - homem // 2 - mulher \n\n");
	scanf ("%d", &genero);
	
	if (genero == 1){
	    pesoIdeal = (72.7*altura) - 58;	    
	}else{
		pesoIdeal = (62.1*altura) - 44.7;
	}
	    printf("Este e o peso ideal: %f.4 \n\n", pesoIdeal);
	
	
	
}      
