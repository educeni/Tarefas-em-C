#include <stdio.h>
/*Ler o peso da pessoa (p) e o nº do planeta (n)
Se n=1, então Pp= (p/10) . (0,37)
            Senão
              Se n=2, então Pp= (p/10) . (0,88)
              Senão
                Se n=3, então Pp= (p/10) . (0,38)*/

int main(){
	
	float pesoPessoa;  // peso da pessoa
	int numeroPlaneta; // numero do planeta
	float pesoPlaneta; // peso da pessoa no planeta
	
	printf("Informe o seu peso: \n\n");
	scanf("%f", &pesoPessoa);
	
	printf("Agora escolha um dos planetas de acordo com o numero: \n\n");
	printf("1- Mercurio, 2- Venus, 3- Marte, 4- Jupiter, 5- Saturno, 6- Urano \n\n");
	scanf("%d", &numeroPlaneta);
	
	if(numeroPlaneta == 1){
		pesoPlaneta = (pesoPessoa/10) * (0.37);
		printf("este e o seu peso no planeta escolhido: %f. \n\n", pesoPlaneta);
	}else{
	if(numeroPlaneta == 2){
	   pesoPlaneta = (pesoPessoa/10) * (0.88);
	   printf("Este e o seu peso no planeta escolhido: %f. \n\n", pesoPlaneta);	
	}else{
	if(numeroPlaneta == 3){
		pesoPlaneta = (pesoPessoa/10) * (0.38);
		printf("Este e o seu peso no planeta escolhido: %f. \n\n", pesoPlaneta);
	}else{
	if(numeroPlaneta == 4){
		pesoPlaneta = (pesoPessoa/10) * (2.64);
		printf("Este e o seu peso no planeta escolhido: %f. \n\n", pesoPlaneta);
	}else{
	if(numeroPlaneta == 5){
		pesoPlaneta = (pesoPessoa/10) * (1.15);
		printf("Este e o seu peso no planeta escolhido: %f. n\n", pesoPlaneta);
	}else{
		pesoPlaneta = (pesoPessoa/10) * (1.17);
		printf("Este e o seu peso no planeta escolhido: %f. n\n", pesoPlaneta);
	}	
	}	
	}	
	}
	
}
}
