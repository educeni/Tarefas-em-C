#include <stdio.h>
#include <string.h>

#define PLACA 8 	// quantidade de algarismos na placa;
#define ANDAR 10  	// andares do estacionamento
#define FILAS 8    	// filas por andares
#define VAGA 10   	// vagas por fila


/* Trabalho II */

// structs
typedef struct{
	char telefone[14];
	char andar; 					// A,B,C,D,E,F,G,H,I,J = possui apenas 10 andares
	char placaVeiculo[PLACA]; 		// placa do veículo
	char tipoVaga; 					// tipo da vaga ( R =  ROTATIVO /// M = MENSALISTA);
	char status;                    // Ocupado ou vago -> caracter 'o' || 'v'
	int dia;
	int mes;
	int ano;
	int hora;
	int minuto;
}TVagaEstacionamento;

/*typedef struct{
	

	TVagaEstacionamento vaga; 		// qual a vaga que o carro pode estar ou deve ser disponibilizada p ele
	
}TMotorista;*/

// Protótipo das funções 
void inicializarVagas(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);
void carregarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);
void salvarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);         // ARQUIVOS !!

int cadastroNovoMotorista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], int fila, int vaga, char tipoVaga, char placaVeiculoInformada[PLACA]);
void exibirVaga(char andar, int fila, int vaga); 
int saidaRotativo(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], int fila, int vaga, char placaVeiculoInformada[PLACA]);
void cobrancaMensalista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);


// Implementação das funções
void inicializarVagas(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA])
{
    int i, f, v;
    for (i = 0; i < ANDAR; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                estacionamento[i][f][v].status = 'v'; 
                estacionamento[i][f][v].andar = 'A' + i; 
                strcpy(estacionamento[i][f][v].placaVeiculo, "");
                estacionamento[i][f][v].dia = 0;
                estacionamento[i][f][v].mes = 0;
                estacionamento[i][f][v].ano = 0;
                estacionamento[i][f][v].hora = 0;
                estacionamento[i][f][v].minuto = 0;
                strcpy(estacionamento[i][f][v].telefone, "");
            }
        }
    }
}

void carregarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA])
{
    FILE *arq = fopen("estacionamento.txt", "r");
    
    if(arq == NULL) {
        printf("\nNenhum arquivo foi encontrado.\n");
        inicializarVagas(estacionamento);
        return;
    }
    
    for(int i = 0; i < ANDAR; i++)
	{
        for(int j = 0; j < FILAS; j++)
		{
            for(int k = 0; k < VAGA; k++)
			{
                fscanf(arq, "%s ", estacionamento[i][j][k].telefone);
                fscanf(arq, "%s ", estacionamento[i][j][k].placaVeiculo);                    																						
                fscanf(arq, " %c ", &estacionamento[i][j][k].status);
                fscanf(arq, " %c ", &estacionamento[i][j][k].andar);
                fscanf(arq, "%d ", &estacionamento[i][j][k].dia);
                fscanf(arq, "%d ", &estacionamento[i][j][k].mes);
                fscanf(arq, "%d ", &estacionamento[i][j][k].ano);
                fscanf(arq, "%d ", &estacionamento[i][j][k].hora);
                fscanf(arq, "%d ", &estacionamento[i][j][k].minuto);
            }
        }
    }
    fclose(arq);
    printf("\n Os dados foram carregados com sucesso!\n");
}

void salvarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]) {
    FILE *arq;
    arq = fopen("estacionamento.txt", "w"); 
    
    if(arq == NULL) {
        printf("\n[ERRO] Falha ao salvar arquivo!\n");
        return;
    }
    else
	{
    	for(int i = 0; i < ANDAR; i++) 
		{
        	for(int j = 0; j < FILAS; j++) 
			{
            	for(int k = 0; k < VAGA; k++) 
				{
                	fprintf(arq, "%s ", estacionamento[i][j][k].telefone);
                	fprintf(arq, "%s ", estacionamento[i][j][k].placaVeiculo);                    																						
                	fprintf(arq, " %c ", &estacionamento[i][j][k].status);
                	fprintf(arq, " %c ", &estacionamento[i][j][k].andar);
                	fprintf(arq, "%d ", &estacionamento[i][j][k].dia);
                	fprintf(arq, "%d ", &estacionamento[i][j][k].mes);
                	fprintf(arq, "%d ", &estacionamento[i][j][k].ano);
                	fprintf(arq, "%d ", &estacionamento[i][j][k].hora);
                	fprintf(arq, "%d ", &estacionamento[i][j][k].minuto);
            	}
        	}
    	}
    }
    fclose(arq);
    printf("\nAlteracoes salvas com sucesso em estacionamento.txt\n");
}

int cadastroNovoMotorista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], int fila, int vaga, char tipoVaga, char placaVeiculoInformada[PLACA])
{
	int i, v, f;
	
	if(tipoVaga == 'm')
	{
		for(v=0;v<vaga;v++)
		{
			for(f=0;f<fila;f++)
			{
				for(i=0;i<4;i++)  // vai até o 4º andar 
				{
					if(strcmp(estacionamento[i][f][v].placaVeiculo,placaVeiculoInformada) == 0)
					{
					printf("A vaga associada a ele e: %c%02d%02d\n", estacionamento[i][f][v].andar, f + 1, v + 1);
					
					break;
					}
	    		}
		}
}	    
	    while(i<4)  
		{
			if(estacionamento[i][f][v].status=='v')
			{
				printf("\nForneca um telefone de contato(maximo 14 digitos):");
	    		gets(estacionamento[i][f][v].telefone);
	    		
				estacionamento[i][f][v].status = 'O';
                estacionamento[i][f][v].tipoVaga = 'm';
                strcpy(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada);
				
				printf("Forneca o dia do cadastro: \n");
				scanf("%d", &estacionamento[i][f][v].dia);
				printf("Forneca o mes do cadastro: \n");
				scanf("%d", &estacionamento[i][f][v].mes);
				printf("Forneca o ano do cadastro: \n");
				scanf("%d", &estacionamento[i][f][v].ano);
				return 1;
			}
			
			i++;
		}
	}
	else
	{		
		for(v=0;v<vaga;v++)
		{
			for(f=0;f<fila;f++)
			{
				for(i=4;i<10;i++)  // começa do 5º andar porque mensalista acaba ai 
				{
					if(estacionamento[i][f][v].status == 'v')
					{
						printf("\nVaga disponível: ");
						exibirVaga(estacionamento[i][f][v].andar, f, v);
						estacionamento[i][f][v].status = 'o';
						
                	estacionamento[i][f][v].tipoVaga = 'r';
                	strcpy(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada);
				
					printf("Forneca a hora atual: \n");
					scanf("%d",&estacionamento[i][f][v].hora);
					printf("Forneca o minuto atual: \n");
					scanf("%d",&estacionamento[i][f][v].minuto);
					printf("Forneca o dia do cadastro: \n");
					scanf("%d", &estacionamento[i][f][v].dia);	
					return 1;
					}
	    		}
		}	
	}
	printf("\nERRO, sera necessario fornecer outra placa. \n");
	return -1;
}

int saidaRotativo(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], int fila, int vaga, char placaVeiculoInformada[PLACA])
{
	int horaSaida, minutoSaida, diaSaida, diaCalculo, totalPagar = 0, i,f,v;
	
	for(v=0;v<vaga;v++)
	{
		for(f=0;f<fila;f++)
		{
			for(i=4;i<10;i++)  // começa do 5º andar porque mensalista acaba ai 
			{
				if(strcmp(estacionamento[i][f][v].placaVeiculo,placaVeiculoInformada) == 0)
				{	
		
					if(estacionamento[i][f][v].tipoVaga == 'r')
					{
						printf("Forneca a hora de saida atual: \n\n");
						scanf("%d", &horaSaida);
						printf("Forneca o minuto de saida atual: \n\n");
						scanf("%d", &minutoSaida);
						printf("Forneca o dia de hoje: \n\n");
						scanf("%d", &diaSaida);
						
						diaCalculo = diaSaida - estacionamento[i][f][v].dia;
						if(diaSaida<1)
						{
							horaSaida -= estacionamento[i][f][v].hora;
						}
						else
						{
							horaSaida -= estacionamento[i][f][v].hora + 24;
						}
						minutoSaida -= estacionamento[i][f][v].minuto; 
						
						if(diaCalculo>=2)
						{
							totalPagar = 50*(diaSaida - estacionamento[i][f][v].dia);
			
						}	
						else if(horaSaida>8)
						{
							totalPagar = 100;
						}
						else if(horaSaida>6)
						{
							totalPagar = 50;
						}
						else if(horaSaida>4)
						{
							totalPagar = 35;
						}
						else if(horaSaida>2)
						{
							totalPagar = 25;
						}
						else if(horaSaida>1)
						{
							totalPagar = 15;
						}
						else if(minutoSaida>30)
						{
							totalPagar = 10;
						}
						else
						{
							totalPagar = 6;
						}
						printf("Valor a pagar: R$ %d,00\n", totalPagar);
						estacionamento[i][f][v].status = 'v';
						
						return 1;
					}	
				}
			}
	    }
	}
	printf("\nVeículo não encontrado.\n");
	return 0;
}

void cobrancaMensalista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA])
{
	int i, f, v;
    int respostaOperador;
    int contadorLiberacoes;

    contadorLiberacoes = 0;

    printf("\n--- INSPECAO DE CONTRATOS MENSALISTAS ---\n");
    
    for (i = 0; i < 4; i++) { 
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                if (estacionamento[i][f][v].status == 'o') {
                    
                    printf("\n------------------------------------\n");
                    printf("Vaga: %c%02d%02d | Placa do Veiculo: %s\n", estacionamento[i][f][v].andar, f + 1, v + 1, estacionamento[i][f][v].placaVeiculo);
                    printf("Telefone: %s | Dia de Vencimento: Todo dia %d\n", estacionamento[i][f][v].telefone, estacionamento[i][f][v].dia);
                    printf("O pagamento da mensalidade de R$ 500,00 foi confirmado? (1-Sim / 2-Nao): "); 
                    scanf("%d", &respostaOperador);
                    
                    if (respostaOperador == 2) {
                        printf("-> Inadimplente detectado! Liberando vaga por falta de pagamento.\n"); 
                        estacionamento[i][f][v].status = 'v';
                        strcpy(estacionamento[i][f][v].placaVeiculo, "");
                        strcpy(estacionamento[i][f][v].telefone, "");
                        estacionamento[i][f][v].dia = 0;
                        estacionamento[i][f][v].mes = 0;
                        estacionamento[i][f][v].ano = 0;
                        contadorLiberacoes++;
                    } else {
                        printf("-> Contrato renovado e mantido com sucesso.\n");
                    }
                }
            }
        }
    }
    printf("\nVarredura encerrada. Total de mensalistas removidos por falta de verba: %d\n", contadorLiberacoes);	
}

void exibirVaga(char andar, int fila, int vaga) 
{
    printf("%c%02d%02d", andar, fila+1, vaga+1);
}

void main()
{
	TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA];
	char tipoVaga, placaVeiculoInformada[PLACA];
	int resp=-1;
	int opcao = -1;

    // Carrega o arquivo binario do disco antes do menu entrar em loop
    carregarDados(estacionamento);

    while (opcao != 0) {
        printf("\n=============================================\n");
        printf("         SISTEMA DE VAGAS PARKRIO            \n");
        printf("=============================================\n");
        printf(" 1 - Registrar Entrada de Veiculo\n");
        printf(" 2 - Registrar Saida de Veiculo (Rotativo)\n");
        printf(" 3 - Rotina de Cobranca de Mensalistas\n");
        printf(" 0 - Gravar Dados e Sair do Programa\n");
        printf("=============================================\n");
        printf("Escolha a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("\n--- ENTRADA DE VEICULO ---\n");
            printf("Qual o tipo da vaga? (M para Mensalista / R para Rotativo): ");
            scanf(" %c", &tipoVaga);
            
            if (tipoVaga == 'm' || tipoVaga == 'M' || tipoVaga == 'r' || tipoVaga == 'R') {
                printf("Digite a placa do veiculo (Max 7 caracteres): ");
                gets(placaVeiculoInformada);
                cadastroNovoMotorista(estacionamento, FILAS, VAGA, tipoVaga, placaVeiculoInformada);
            } else {
                printf("\n[ERRO] Tipo de vaga totalmente invalido!\n");
            }
        } 
        else if (opcao == 2) {
            printf("\n--- SAIDA DE VEICULO ---\n");
            printf("Digite a placa do veiculo para dar baixa: ");
            scanf(" %s", placaVeiculoInformada);
            saidaRotativo(estacionamento, FILAS, VAGA, placaVeiculoInformada);
        } 
        else if (opcao == 3) {
            cobrancaMensalista(estacionamento);
        }
        else if (opcao == 0) {
            printf("\nFechando os modulos e salvando registros...\n");
        }
        else {
            printf("\nOpcao incorreta! Tente novamente.\n");
        }
    }
    salvarDados(estacionamento);	
}

