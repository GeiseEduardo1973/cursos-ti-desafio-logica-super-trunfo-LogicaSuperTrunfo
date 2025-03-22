#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void remove_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') 
        str[len - 1] = '\0';
    }


int main() {

    // Desafio Super Trunfo - Logica
    // Nivel: Aventureiro
    
    int gerarValorAleatorio() {
    srand(time(0)); // Define a semente para o gerador de números aleatórios
    return rand() % 7 + 1; // Gera um número entre 1 e 7
}
    int escolhaJogador, escolhaComputador;

    escolhaComputador = gerarValorAleatorio(); // Chama a função para gerar o número

    printf("O computador escolheu: %d\n", escolhaComputador);

            
    //Variaveis Carta 01
    char Estado1[30];
    char Codigo1[3];
    char Cidade1[50];
    unsigned long int Populacao1;
    float AreaKm21;
    float PIB1;
    int PontosTuristicos1;
    float DensidadePopulacional1;
    float PibPercapta1;
    float SuperPoder1;

    //Varia¡veis Carta 02
    char Estado2[30];
    char Codigo2[3];
    char Cidade2[50];
    unsigned long int Populacao2;
    float AreaKm22;
    float PIB2;
    int PontosTuristicos2;
    float DensidadePopulacional2;
    float PibPercapta2;
    float SuperPoder2;

    //Entrada de dados

    // Carta 01 Estado A
    printf("Digite o nome do Estado1:[^\n]");
    fgets(Estado1, sizeof(Estado1), stdin);
    remove_newline(Estado1);

    printf("Digite o codigo da carta1:\n");
    scanf("%s", Codigo1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade1:[^\n]");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    remove_newline(Cidade1);

    printf("Digite a populacao1:\n");
    scanf("%lu", &Populacao1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a Areakm21:\n");
    scanf("%f", &AreaKm21);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o PIB1 em R$1:\n");
    scanf("%f", &PIB1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite os Pontos Turisticos1:\n");
    scanf("%d", &PontosTuristicos1);
    getchar(); // Limpa o buffer de entrada


    //Carta 02 Estado B
    printf("Digite o nome do estado2:[^\n]");
    fgets(Estado2, sizeof(Estado2), stdin);
    remove_newline(Estado2);

    printf("Digite o codigo da carta2:\n");
    scanf("%s", Codigo2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da cidade2:[^\n]");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    remove_newline(Cidade2);

    printf("Digite a populacao2:\n");
    scanf("%lu", &Populacao2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite a Areakm22:\n");
    scanf("%f", &AreaKm22);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o PIB2 em R$2:\n");
    scanf("%f", &PIB2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite os pontos turisticos2:\n");
    scanf("%d", &PontosTuristicos2);
    getchar(); // Limpa o buffer de entrada



    //Calculos carta 01
    DensidadePopulacional1 = Populacao1 / AreaKm21;
    PibPercapta1 = PIB1 / Populacao1;
    SuperPoder1 = (Populacao1 + AreaKm21 + PIB1 + PontosTuristicos1 + PibPercapta1 + 1 / DensidadePopulacional1);

    //Calculos carta 02
    DensidadePopulacional2 = Populacao2 / AreaKm22;
    PibPercapta2 = PIB2 / Populacao2;
    SuperPoder2 = (Populacao2 + AreaKm22 + PIB2 + PontosTuristicos2 + PibPercapta2 + 1 / DensidadePopulacional2);

       
    // Desenvolva menu interativo para a escolha de cartas 
    // Escolha do Jogador
    printf ("Jogo de Super Trunfo\n");
    printf ("escolha uma cidade\n");
    printf ("escolha uma caracteristica:\n");
    printf ("1. Populacao\n");
    printf ("2. Area\n");
    printf ("3. PIB\n");
    printf ("4. Numero de Pontos Turisticos\n");
    printf ("5. PIB Percapta\n");
    printf ("6. Densidade Demografica\n");
    printf ("7. Super Poder\n");
    
     // inicializa o gerador de numeros aleatorios
    srand(time(0));
        
        
    //Loop do jogo
     // Loop do jogo
    do {
        // Turno do jogador
        printf("Escolha uma característica (1 a 7 ou 0 para sair): ");
        scanf("%d", &escolhaJogador);

        if (escolhaJogador == 0) {
            printf("Encerrando o jogo...\n");
            break; // Sai do loop se o jogador escolher 0
        }

        if (escolhaJogador >= 1 && escolhaJogador <= 7) {
            printf("Jogador escolheu a característica %d\n", escolhaJogador);

   
    // Comparar as cartas
    // Desenvolva a logica de comparacao entre duas cartas.
       // Escolha aleatória do computador
            escolhaComputador = rand() % 7 + 1; // Valor entre 1 e 7
            printf("Computador escolheu a característica %d\n", escolhaComputador);

            // Estrutura de decisão para comparar jogador e computador
            switch (escolhaJogador) {
            case 1:
                printf("Jogador: Populacao\n");
                printf("Computador: Populacao\n");
                break;
            case 2:
                printf("Jogador: Area\n");
                printf("Computador: Area\n");
                break;
            case 3:
                printf("Jogador: PIB\n");
                printf("Computador: PIB\n");
                break;
            case 4:
                printf("Jogador: Numero de Pontos Turisticos\n");
                printf("Computador: Numero de Pontos Turisticos\n");
                break;
            case 5:
                printf("Jogador: PIB Percapta\n");
                printf("Computador: PIB Percapta\n");
                break;
            case 6:
                printf("Jogador: Densidade Demografica\n");
                printf("Computador: Densidade Demografica\n");
                break;
            case 7:
                printf("Jogador: Super Poder\n");
                printf("Computador: Super Poder\n");
                break;
            default:
                printf("Opcao Invalida!\n");
                break;
            }
        } else {
            printf("Escolha inválida! Por favor, escolha um número entre 1 e 7 ou 0 para sair.\n");
        }

    } while (escolhaJogador != 0);
                    
        
    // Exibicao dos Resultados:
    // se carta 01 = 1 resultado - carta 01 venceu
    // se carta 01 = 0 resultado - carta 02 venceu

    if(Populacao1 > Populacao2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: População\n");
        printf ("A populacao da Cidade é: %lu\n",Populacao1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a População\n");
        printf ("A populacao da Cidade é: %lu\n",Populacao2);  
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (Populacao1 < Populacao2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi a População\n");
        printf ("A populacao da Cidade é: %lu\n",Populacao1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a População\n");
        printf ("A populacao da Cidade é: %lu\n",Populacao2);  
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    }else if(Populacao1 == Populacao2){
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: População\n");
        printf ("A populacao da Cidade é: %lu\n",Populacao1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a População\n");
        printf ("A populacao da Cidade é: %lu\n",Populacao2); 
        printf ("Houve um empate!\n");
    }
        
       if(AreaKm21 > AreaKm22) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: AreaKm2\n");
        printf ("A Area em Km2 da Cidade é: %f\n",AreaKm21);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a AreaKm2\n");
        printf ("A Area em km2 da Cidade é: %f\n",AreaKm22);  
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (AreaKm21 < AreaKm22) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: AreaKm2\n");
        printf ("A Area em Km2 da Cidade é: %f\n",AreaKm21);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a AreaKm2\n");
        printf ("A Area em km2 da Cidade é: %f\n",AreaKm22);   
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    }else if (AreaKm21 == AreaKm22){
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi a AreaKm2\n");
        printf ("A Area em km2 da Cidade é: %f\n",AreaKm21); 
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a AreaKm2\n");
        printf ("A Area em km2 da Cidade é: %f\n",AreaKm22); 
        printf ("Houve um empate!\n");
    }
        
       if(PIB1 > PIB2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: PIB\n");
        printf ("O PIB da Cidade é: %f\n",PIB1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a PIB\n");
        printf ("O PIB da Cidade é: %f\n",PIB2);  
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (PIB1 < PIB2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: PIB\n");
        printf ("O PIB da Cidade é: %f\n",PIB1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a AreaKm2\n");
        printf ("O PIB da Cidade é: %f\n",PIB2);   
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    }else if (PIB1 == PIB2){
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi a PIB\n");
        printf ("O PIB da Cidade é: %f\n",PIB1); 
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi a PIB\n");
        printf ("O PIB da Cidade é: %f\n",PIB2); 
        printf ("Houve um empate!\n");
    }
 
    if(PontosTuristicos1 > PontosTuristicos2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Pontos Turisticos\n");
        printf ("O numero de Pontos Turisticos da Cidade é: %d\n",PontosTuristicos1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Pontos Turisticos\n");
        printf ("O numero de Pontos Turisticos da Cidade é: %d\n",PontosTuristicos2);
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (PontosTuristicos1 > PontosTuristicos2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Pontos Turisticos\n");
        printf ("O numero de Pontos Turisticos da Cidade é: %d\n",PontosTuristicos1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Pontos Turisticos\n");
       printf ("O numero de Pontos Turisticos da Cidade é: %d\n",PontosTuristicos2);
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    }else if (PontosTuristicos1 == PontosTuristicos2){
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Pontos Turisticos\n");
        printf ("O numero de Pontos Turisticos da Cidade é: %d\n",PontosTuristicos1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Pontos Turisticos\n");
        printf ("O numero de Pontos Turisticos da Cidade é: %d\n",PontosTuristicos2);
        printf ("Houve um empate!\n");
    }

    if(DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf ("A Densidade Populacional da Cidade é: %f\n",DensidadePopulacional1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf ("A Densidade Populacional da Cidade é: %f\n",DensidadePopulacional2);
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (DensidadePopulacional1 < DensidadePopulacional2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf("A Densidade Populacional da Cidade é: %f\n", DensidadePopulacional1);
        printf("Estado2: %s\n", Estado2);
        printf("Codigo2: %s\n", Codigo2);
        printf("Cidade2: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf ("A Densidade Populacional da Cidade é: %f\n",DensidadePopulacional2);
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    }else if (DensidadePopulacional1 == DensidadePopulacional2){
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf ("A Densidade Populacional da Cidade é: %f\n",DensidadePopulacional1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf ("A Densidade Populacional da Cidade é: %f\n",DensidadePopulacional2);
        printf ("Houve um empate!\n");
        }       
        
    if(PibPercapta1 > PibPercapta2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Pib Percapta\n");
        printf ("O Pib Percapta da Cidade é: %f\n",PibPercapta1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Densidade Populacional\n");
        printf ("O Pib Percapta da Cidade é: %f\n",DensidadePopulacional2);
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (PibPercapta1 < PibPercapta2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: PIB Percapta\n");
        printf ("O Pib Percapta da Cidade é: %f\n",PibPercapta1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: PIB Percapta\n");
        printf ("O Pib Percapta da Cidade é: %f\n",PibPercapta2);
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    }else if (PibPercapta1 == PibPercapta2){
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: PIB Percapta\n");
        printf ("O Pib Percapta da Cidade é: %f\n",PibPercapta1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: PIB Percapta\n");
        printf ("O Pib Percapta da Cidade é: %f\n",PibPercapta2);
        printf ("Houve um empate!\n");      
    }        

    if(SuperPoder1 > SuperPoder2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Super Poder\n");
        printf ("O Super Poder da Cidade é: %f\n",SuperPoder1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Super Poder\n");
        printf ("O Super Poder da Cidade é: %f\n",SuperPoder2);
        printf ("Jogador Venceu!\n");
        printf ("turno do computador");
    }else if (SuperPoder1 < SuperPoder2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Super Poder\n");
        printf ("O Super Poder da Cidade é: %f\n",SuperPoder1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Super Poder\n");
        printf ("O Super Poder da Cidade é: %f\n",SuperPoder2);
        printf("Computador Venceu!\n"); 
        printf ("turno do jogador"); 
    } else if (SuperPoder1 == SuperPoder2) {
        printf("Estado: %s\n", Estado1);                         
        printf("Codigo: %s\n", Codigo1);
        printf("Cidade: %s\n", Cidade1);
        printf("A caracteristica escolhida foi: Super Poder\n");
        printf("O Super Poder da Cidade é: %f\n", SuperPoder1);
        printf("Estado: %s\n", Estado2);
        printf("Codigo: %s\n", Codigo2);
        printf("Cidade: %s\n", Cidade2);
        printf("A caracteristica escolhida foi: Super Poder\n");
        printf("O Super Poder da Cidade é: %f\n", SuperPoder2);
        printf("Houve um empate!\n");
    }
    
     return 0;
}
