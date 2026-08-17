#include <stdio.h>
/* QUESTÃO 02: Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1 */

/* 1)
*/
void main(){
	
	int i, i2, soma;
	
    for(i=1,i2=50;i<51;i++,i2--)
    {	
	    printf("%d %d ", i, i2);
    }
   	soma = i + i2;
	    printf("\n%d", soma);
}
