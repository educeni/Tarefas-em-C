#include <stdio.h>
/* 1) Ler as horas trabalhadas (hora) e valor por hora ( valorHora )
2) Se h <= 40, então S1 = hora*valorHora
   Senao
    S= 0.5 * ((hora - 40) * valorHora) + hora*valorHora
*/

void main(){
	
	int hora;        // horas trabalhadas
	float valorHora; // valor por hora
	float salario;         // salario semanal         
	
	printf("informe as suas horas trabalhadas: \n\n");
	scanf("%d", &hora);
	
	printf("Agora informe o valor por hora: \n\n");
	scanf("%f", &valorHora);
	
	if (hora <= 40){
		salario = (hora * valorHora); 
	}else{
	    salario = ((hora - 40) * valorHora) + hora*valorHora * 0.5;	
	}
	printf("Este e o seu salario semanal: %f \n\n", salario);
	
	
	
	
}
