#include <stdio.h>

int main(){
		
	int dado;
	
	printf("Ola, digite um valor diferente de 0: \n\n");
	scanf("%d", &dado);
		
	if(dado == 0){
     printf("\nValor incorreto.\n\n");
	}
    else{
     printf("\nValor correto.\n\n");
	}
}
	

