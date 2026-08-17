#include <stdio.h>
#include <string.h>
#define TAM 25
/* */
/*parametro = vetor numero, //// retorno = */
typedef struct{
char c;
int qtd;
}TVetor;


int conta_e_ordena(char str[], TVetor s[]) {
    int i, j, unicos = 0;

    for(i = 0; str[i] != '\0'; i++){
        int achou = 0;

        for(j = 0; j < unicos; j++){
            if(s[j].c == str[i]){
                s[j].qtd = s[j].qtd + 1;
                achou = 1;
            }
        }

        if(achou == 0){
            int pos = unicos;

            for(j = 0; j < unicos; j++){
                if(str[i] < s[j].c){
                    pos = j;
                    break;
                }
            }

            for(j = unicos; j > pos; j--){
                s[j] = s[j-1];
            }

            s[pos].c = str[i];
            s[pos].qtd = 1;

            unicos++;
        }
    }

    return unicos;
}

void exibir_struct(TVetor s[], char str[TAM])
{
    int i;
    int total = conta_e_ordena(str, s);

    for(i = 0; i < total; i++) {
        printf("O caracter: '%c'\n", s[i].c); 
        printf("Aparece essa quantidade de vezes: %d\n\n", s[i].qtd);
    }
}


void main(){
    char string[TAM] = "MACACO ADESTRADO";
    TVetor s[TAM];

    conta_e_ordena(string, s);
    exibir_struct(s, string);
}
