#include <stdio.h>
#include <string.h>

#define PLACA 8 	// quantidade de algarismos na placa
#define ANDAR 10  	// andares do estacionamento
#define FILAS 8    	// filas por andares
#define VAGA 10   	// vagas por fila

/* Trabalho II - Fundamentos de Programação */

// Definição da estrutura da vaga
typedef struct {
	char telefone[14];
	char andar; 					// A,B,C,D,E,F,G,H,I,J
	char placaVeiculo[PLACA]; 		// placa do veículo
	char tipoVaga; 					// R = ROTATIVO ou M = MENSALISTA
	char status;                    // 'o' = ocupado ou 'v' = vago
	int dia;
	int mes;
	int ano;
	int hora;
	int minuto;
} TVagaEstacionamento;

// Protótipo das funções
void inicializarVagas(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);
void carregarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);
void salvarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);
int cadastroNovoMotorista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], char tipoVaga, char placaVeiculoInformada[PLACA]);
int saida(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], char placaVeiculoInformada[PLACA]);
void cobrancaMensalista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]);

// IMPLEMENTAÇÃO DAS FUNÇÕES

// Inicializa a matriz tridimensional limpando a memória principal
void inicializarVagas(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA])
{
    int i, f, v;
    for (i = 0; i < ANDAR; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                estacionamento[i][f][v].status = 'v'; 
                estacionamento[i][f][v].andar = 'A' + i; 
                strcpy(estacionamento[i][f][v].placaVeiculo, "LIVRE");
                estacionamento[i][f][v].tipoVaga = 'x';
                estacionamento[i][f][v].dia = 0;
                estacionamento[i][f][v].mes = 0;
                estacionamento[i][f][v].ano = 0;
                estacionamento[i][f][v].hora = 0;
                estacionamento[i][f][v].minuto = 0;
                strcpy(estacionamento[i][f][v].telefone, "000000000");
            }
        }
    }
}

// Leitura formatada
void carregarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA])
{
    FILE *arq;
    int i, f, v;
    
    arq = fopen("estacionamento.txt", "r");
    
    if (arq == NULL) {
        printf("\n[SISTEMA] Nenhum arquivo base encontrado. Inicializando vagas vazias...\n");
        inicializarVagas(estacionamento);
        return;
    }
    
    for (i = 0; i < ANDAR; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {

                fscanf(arq, " %c %c %s %s %d %d %d %d %d %c", 
                       &estacionamento[i][f][v].status,
                       &estacionamento[i][f][v].andar,
                       estacionamento[i][f][v].placaVeiculo,
                       estacionamento[i][f][v].telefone,
                       &estacionamento[i][f][v].dia,
                       &estacionamento[i][f][v].mes,
                       &estacionamento[i][f][v].ano,
                       &estacionamento[i][f][v].hora,
                       &estacionamento[i][f][v].minuto,
                       &estacionamento[i][f][v].tipoVaga);
            }
        }
    }
    fclose(arq);
    printf("\n[SISTEMA] Os dados salvos foram carregados com sucesso!\n");
}

void salvarDados(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA]) 
{
    FILE *arq;
    int i, f, v;
    
    arq = fopen("estacionamento.txt", "w"); 
    
    if (arq == NULL) {
        printf("\n[ERRO] Falha critica ao abrir o arquivo para salvar!\n");
        return;
    }
    
    for (i = 0; i < ANDAR; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                fprintf(arq, "%c %c %s %s %d %d %d %d %d %c\n", 
                        estacionamento[i][f][v].status,
                        estacionamento[i][f][v].andar,
                        estacionamento[i][f][v].placaVeiculo,
                        estacionamento[i][f][v].telefone,
                        estacionamento[i][f][v].dia,
                        estacionamento[i][f][v].mes,
                        estacionamento[i][f][v].ano,
                        estacionamento[i][f][v].hora,
                        estacionamento[i][f][v].minuto,
                        estacionamento[i][f][v].tipoVaga);
            }
        }
    }
    
    fclose(arq);
    printf("\n[SISTEMA] Alteracoes gravadas em estacionamento.txt com sucesso!\n");
}

// Realiza a lógica de cadastro separando mensalistas e rotativos
int cadastroNovoMotorista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], char tipoVaga, char placaVeiculoInformada[PLACA])
{
	int i, f, v;
	char telEntrada[14];
	int diaEntrada, mesEntrada, anoEntrada;
	int horaEntrada, minEntrada;
	
	// SEÇÃO MENSALISTA
	if (tipoVaga == 'm' || tipoVaga == 'M')
    {
	// Procura a placa em qualquer vaga mensalista (status 'o' ou 'v')
	for (i = 0; i < 4; i++) {
    for (f = 0; f < FILAS; f++) {
        for (v = 0; v < VAGA; v++) {
            if (estacionamento[i][f][v].tipoVaga == 'm' &&
                strcmp(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada) == 0) {
                printf("Vaga associada: %c%02d%02d\n", estacionamento[i][f][v].andar, f+1, v+1);
                // Se ele está entrando, marque como ocupado se ainda não estiver
                if (estacionamento[i][f][v].status == 'v') {
                    estacionamento[i][f][v].status = 'o';
                    
                }
                return 1; // sucesso na entrada
            }
        }
    }
}
// não encontrou, aí sim é novo cliente (prossegue com cadastro)
		
		// Se for um cliente novo, coleta as informações necessárias primeiro
		printf("\n--- FORMULARIO DE NOVO MENSALISTA ---\n");
		printf("Forneca um telefone de contato (maximo 13 digitos): ");
		scanf(" %s", telEntrada);
		printf("Forneca a data do cadastro no formato (dd/mm/aaaa): ");
		scanf("%d/%d/%d", &diaEntrada, &mesEntrada, &anoEntrada);
		
		// Busca a primeira vaga disponível nos andares de mensalista para transferir os dados
		for (i = 0; i < 4; i++) {
			for (f = 0; f < FILAS; f++) {
				for (v = 0; v < VAGA; v++) {
					if (estacionamento[i][f][v].status == 'v') {
						
						estacionamento[i][f][v].status = 'o';
						estacionamento[i][f][v].tipoVaga = 'm';
						strcpy(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada);
						strcpy(estacionamento[i][f][v].telefone, telEntrada);
						estacionamento[i][f][v].dia = diaEntrada;
						estacionamento[i][f][v].mes = mesEntrada;
						estacionamento[i][f][v].ano = anoEntrada;
						
						printf("\n[SUCESSO] Cadastro efetuado! Vaga alocada: %c%02d%02d\n", estacionamento[i][f][v].andar, f + 1, v + 1);
						return 1;
					}
				}
			}
		}
		printf("\n[AVISO] O setor de mensalistas está completamente lotado!\n");
		return -1;
	}
	// ROTATIVO (ANDARES 5 A 10)
	else if (tipoVaga == 'r' || tipoVaga == 'R')
	{		
		//Garante que o carro do rotativo não está duplicado no prédio
		for (i = 0; i < ANDAR; i++) {
			for (f = 0; f < FILAS; f++) {
				for (v = 0; v < VAGA; v++) {
					if (estacionamento[i][f][v].status == 'o' && strcmp(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada) == 0) {
						printf("\n[ERRO] Carro com essa placa ja esta estacionado no edificio!\n");
						return -1;
					}
				}
			}
		}
		
		// Coleta dados de entrada cronológicos
		printf("\n--- ENTRADA DE CLIENTE ROTATIVO ---\n");
		printf("Forneca a data de entrada (dd/mm/aaaa): ");
		scanf("%d/%d/%d", &diaEntrada, &mesEntrada, &anoEntrada);
		printf("Forneca o horario de entrada (hh:mm): ");
		scanf("%d:%d", &horaEntrada, &minEntrada);
		
		// Aloca a vaga rotativa livre mais próxima (andares de índice 4 a 9)
		for (i = 4; i < 10; i++) {
			for (f = 0; f < FILAS; f++) {
				for (v = 0; v < VAGA; v++) {
					if (estacionamento[i][f][v].status == 'v') {
						
						estacionamento[i][f][v].status = 'o';
						estacionamento[i][f][v].tipoVaga = 'r';
						strcpy(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada);
						estacionamento[i][f][v].dia = diaEntrada;
						estacionamento[i][f][v].mes = mesEntrada;
						estacionamento[i][f][v].ano = anoEntrada;
						estacionamento[i][f][v].hora = horaEntrada;
						estacionamento[i][f][v].minuto = minEntrada;
						
						printf("\n[SUCESSO] Veiculo posicionado na vaga rotativa: %c%02d%02d\n", estacionamento[i][f][v].andar, f + 1, v + 1);
						return 1;
					}
				}
			}
		}
		printf("\n[AVISO] O setor de rotativo está completamente lotado!\n");
		return -1;
	}
	
	return -1;
}

// Calcula o valor a pagar com base na tabela progressiva
int saida(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA], char placaVeiculoInformada[PLACA])
{
    int horaSaida, minutoSaida, diaSaida, mesSaida, anoSaida;
    int diferencaMinutos, totalMinutosEntrada, totalMinutosSaida;
    int totalPagar = 0;
    int i, f, v;
    
    // 1. PROCURA POR VEÍCULO ROTATIVO (andares 4 a 9)
    for (i = 4; i < 10; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                if (estacionamento[i][f][v].status == 'o' &&
                    strcmp(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada) == 0 &&
                    estacionamento[i][f][v].tipoVaga == 'r') {
                    
                    printf("\n--- REGISTRO DE SAIDA DO VEICULO ROTATIVO %s ---\n", placaVeiculoInformada);
                    printf("Horario de entrada registrado: %02dh:%02dmin\n", estacionamento[i][f][v].hora, estacionamento[i][f][v].minuto);
                    
                    printf("Forneca a data de hoje (dd/mm/aaaa): ");
                    scanf("%d/%d/%d", &diaSaida, &mesSaida, &anoSaida);
                    printf("Forneca a hora de saida atual (hh:mm): ");
                    scanf("%d:%d", &horaSaida, &minutoSaida);
                    
                    if (diaSaida == estacionamento[i][f][v].dia && mesSaida == estacionamento[i][f][v].mes) {
                        totalMinutosEntrada = (estacionamento[i][f][v].hora * 60) + estacionamento[i][f][v].minuto;
                        totalMinutosSaida = (horaSaida * 60) + minutoSaida;
                        diferencaMinutos = totalMinutosSaida - totalMinutosEntrada;
                        
                        if (diferencaMinutos <= 30) totalPagar = 6;
                        else if (diferencaMinutos <= 60) totalPagar = 10;
                        else if (diferencaMinutos <= 120) totalPagar = 15;
                        else if (diferencaMinutos <= 240) totalPagar = 25;
                        else if (diferencaMinutos <= 360) totalPagar = 35;
                        else if (diferencaMinutos <= 480) totalPagar = 50;
                        else totalPagar = 100;
                    } else {
                        int diasPassados = diaSaida - estacionamento[i][f][v].dia;
                        if (diasPassados == 1) {
                            int minPrimeiroDia = ((24 - estacionamento[i][f][v].hora) * 60) - estacionamento[i][f][v].minuto;
                            int minSegundoDia = (horaSaida * 60) + minutoSaida;
                            diferencaMinutos = minPrimeiroDia + minSegundoDia;
                            if (diferencaMinutos <= 1440) totalPagar = 100;
                            else totalPagar = 150;
                        } else {
                            totalPagar = 100 + (50 * (diasPassados - 1));
                        }
                    }
                    
                    printf("\n=============================================\n");
                    printf("             EXTRATO DE PAGAMENTO            \n");
                    printf("=============================================\n");
                    printf(" VALOR TOTAL A COBRAR: R$ %d,00\n", totalPagar);
                    printf("=============================================\n");

                    estacionamento[i][f][v].status = 'v';
                    strcpy(estacionamento[i][f][v].placaVeiculo, "LIVRE");
                    estacionamento[i][f][v].tipoVaga = 'x';
                    estacionamento[i][f][v].dia = 0;
                    estacionamento[i][f][v].mes = 0;
                    estacionamento[i][f][v].ano = 0;
                    estacionamento[i][f][v].hora = 0;
                    estacionamento[i][f][v].minuto = 0;
                    return 1;
                }
            }
        }
    }
    
    // VEÍCULO MENSALISTA (andares 0 a 3)
    for (i = 0; i < 4; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                if (estacionamento[i][f][v].status == 'o' &&
                    strcmp(estacionamento[i][f][v].placaVeiculo, placaVeiculoInformada) == 0 &&
                    estacionamento[i][f][v].tipoVaga == 'm') {
                    
                    
                    estacionamento[i][f][v].status = 'v';
                    printf("\n[MENSALISTA] Saida registrada. Vaga %c%02d%02d liberada fisicamente.\n",
                           estacionamento[i][f][v].andar, f+1, v+1);
                    printf("O cadastro do veiculo permanece para as proximas entradas.\n");
                    return 1;
                }
            }
        }
    }
    
    printf("\n[AVISO] Veiculo nao localizado no estacionamento!\n");
    return 0;
}

// Varre o setor de mensalistas verificando pagamentos pendentes
void cobrancaMensalista(TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA])
{
    int i, f, v;
    int respostaOperador;
    int contadorLiberacoes = 0;

    printf("\n--- INSPECAO DE CONTRATOS MENSALISTAS ---\n");
    
    for (i = 0; i < 4; i++) {
        for (f = 0; f < FILAS; f++) {
            for (v = 0; v < VAGA; v++) {
                
                if (estacionamento[i][f][v].tipoVaga == 'm' &&
                    strcmp(estacionamento[i][f][v].placaVeiculo, "LIVRE") != 0) {
                    
                    printf("\n------------------------------------\n");
                    printf("Vaga Fixa: %c%02d%02d | Placa: %s\n",
                           estacionamento[i][f][v].andar, f+1, v+1,
                           estacionamento[i][f][v].placaVeiculo);
                    printf("Telefone: %s | Dia de Vencimento: Todo dia %d\n",
                           estacionamento[i][f][v].telefone,
                           estacionamento[i][f][v].dia);
                    printf("Status atual: %s\n",
                           (estacionamento[i][f][v].status == 'o' ? "Estacionado" : "Ausente"));
                    printf("O pagamento da mensalidade de R$ 500,00 foi confirmado? (1-Sim / 2-Nao): ");
                    scanf("%d", &respostaOperador);
                    
                    if (respostaOperador == 2) {
                        printf("-> Inadimplente detectado! Excluindo contrato e liberando vaga.\n");
                        // Remove completamente o vínculo do mensalista
                        estacionamento[i][f][v].status = 'v';
                        strcpy(estacionamento[i][f][v].placaVeiculo, "LIVRE");
                        strcpy(estacionamento[i][f][v].telefone, "000000000");
                        estacionamento[i][f][v].tipoVaga = 'x'; 
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
    printf("\nVarredura encerrada. Total de mensalistas removidos por inadimplencia: %d\n", contadorLiberacoes);
}

int main()
{
	TVagaEstacionamento estacionamento[ANDAR][FILAS][VAGA];
	char tipoVaga;
	char placaVeiculoInformada[PLACA];
	int opcao;
	
	opcao = -1;

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
                scanf(" %s", placaVeiculoInformada);
                cadastroNovoMotorista(estacionamento, tipoVaga, placaVeiculoInformada);
            } else {
                printf("\n[ERRO] Tipo de vaga totalmente invalido!\n");
            }
        } 
        else if (opcao == 2) {
            printf("\n--- SAIDA DE VEICULO ---\n");
            printf("Digite a placa do veiculo para dar baixa: ");
            scanf(" %s", placaVeiculoInformada);
            saida(estacionamento, placaVeiculoInformada);
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
	
	return 0;
}

