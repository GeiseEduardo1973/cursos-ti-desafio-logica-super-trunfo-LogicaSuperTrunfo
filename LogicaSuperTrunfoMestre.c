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
    // Nivel: Mestre
    
    int escolhaJogador,escolhaJogador1, escolhaJogador2, escolhaComputador1, escolhaComputador2;
    int atributoJogador[7], atributoComputador[7]; // Valores fictícios para os atributos
    int i;
    int soma1, soma2;
 
               
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
    
   // Inicializando os valores fictícios para atributos das cartas
    srand(time(0));
    for (i = 0; i < 7; i++) {
        atributoJogador[i] = rand() % 100 + 1; // Valores aleatórios entre 1 e 100
        atributoComputador[i] = rand() % 100 + 1;
    }
        
    //Loop do jogo
     do {
        // Escolha do jogador
        printf("\nJogador, escolha o primeiro atributo (1 a 7): ");
        scanf("%d", &escolhaJogador1);
        if (escolhaJogador1 > 7){
        printf("Opçao inválida, tente novamente!"); 
        }
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        do {
            scanf("%d", &escolhaJogador2);
            if (escolhaJogador2 == escolhaJogador1) {
                printf("Você já escolheu esse atributo. Escolha outro: ");
            }
            
        } while (escolhaJogador2 == escolhaJogador1);
        
    // Exibindo os valores escolhidos
    printf("Jogador escolheu os atributos %d e %d\n", escolhaJogador1, escolhaJogador2);
    printf("Atributo %d do jogador: %d | Computador: %d\n", escolhaJogador1, atributoJogador[escolhaJogador1 - 1], atributoComputador[escolhaJogador1 - 1]);
    printf("Atributo %d do jogador: %d | Computador: %d\n", escolhaJogador2, atributoJogador[escolhaJogador2 - 1], atributoComputador[escolhaJogador2 - 1]);


   
    // Comparar as cartas
    // Desenvolva a logica de comparacao entre duas cartas.
    //Jogador    
     if (escolhaJogador2 == 6) {     
    // Atributo 6: vence quem tiver o menor valor    
    if (atributoJogador[escolhaJogador1 - 1] < atributoComputador[escolhaJogador1 - 1]) {
        printf("Jogador venceu no atributo %d (Densidade Demográfica)!\n", escolhaJogador1);
    } else if (atributoJogador[escolhaJogador1 - 1] > atributoComputador[escolhaJogador1 - 1]) {
        printf("Computador venceu no atributo %d (Densidade Demográfica)!\n", escolhaJogador1);
    } else {
        printf("Empate no atributo %d (Densidade Demográfica)!\n", escolhaJogador1);
    } 
}
    // Para os outros atributos: vence quem tiver o maior valor
    if (atributoJogador[escolhaJogador1 - 1] > atributoComputador[escolhaJogador1 - 1]) {
        printf("Jogador venceu no atributo %d!\n", escolhaJogador1);
    } else if (atributoJogador[escolhaJogador1 - 1] < atributoComputador[escolhaJogador1 - 1]) {
        printf("Computador venceu no atributo %d!\n", escolhaJogador1);
    } else {
        printf("Empate no atributo %d!\n", escolhaJogador1);
    }
   
    if (escolhaJogador2 == 6) {
    // Atributo 6: vence quem tiver o menor valor
    if (atributoJogador[escolhaJogador2 - 1] < atributoComputador[escolhaJogador2 - 1]) {
        printf("Jogador venceu no atributo %d (Densidade Demográfica)!\n", escolhaJogador2);
    } else if (atributoJogador[escolhaJogador2 - 1] > atributoComputador[escolhaJogador2 - 1]) {
        printf("Computador venceu no atributo %d (Densidade Demográfica)!\n", escolhaJogador2);
    } else {
        printf("Empate no atributo %d (Densidade Demográfica)!\n", escolhaJogador2);
    }  
}
    // Para os outros atributos: vence quem tiver o maior valor
    if (atributoJogador[escolhaJogador2 - 1] > atributoComputador[escolhaJogador2 - 1]) {
        printf("Jogador venceu no atributo %d!\n", escolhaJogador2);
    } else if (atributoJogador[escolhaJogador2 - 1] < atributoComputador[escolhaJogador2 - 1]) {
        printf("Computador venceu no atributo %d!\n", escolhaJogador2);
    } else {
        printf("Empate no atributo %d!\n", escolhaJogador2);
    }

       // Escolha aleatória do computador
           escolhaComputador1 = rand() % 7 + 1;
        do {
            escolhaComputador2 = rand() % 7 + 1;
        } while (escolhaComputador2 == escolhaComputador1);

        printf("\nAgora é a vez do computador!\n");
        printf("Computador escolheu os atributos %d e %d\n", escolhaComputador1, escolhaComputador2);
        printf("Atributo %d do computador: %d | Jogador: %d\n", escolhaComputador1,
               atributoComputador[escolhaComputador1 - 1], atributoJogador[escolhaComputador1 - 1]);
        printf("Atributo %d do computador: %d | Jogador: %d\n", escolhaComputador2,
               atributoComputador[escolhaComputador2 - 1], atributoJogador[escolhaComputador2 - 1]);

    // Comparação dos valores escolhidos pelo computador
    printf("\nResultados:\n");
      if (escolhaJogador2 == 6) {   
    // Atributo 6: vence quem tiver o menor valor
    if (atributoComputador[escolhaComputador1 - 1] < atributoJogador[escolhaComputador1 - 1]) {
        printf("Computador venceu no atributo %d (Densidade Demográfica)!\n", escolhaComputador1);
    } else if (atributoComputador[escolhaComputador1 - 1] > atributoJogador[escolhaComputador1 - 1]) {
        printf("Jogador venceu no atributo %d (Densidade Demográfica)!\n", escolhaComputador1);
    } else {
        printf("Empate no atributo %d (Densidade Demográfica)!\n", escolhaComputador1);
    }
}     
    // Para os outros atributos: vence quem tiver o maior valor
    if (atributoComputador[escolhaComputador1 - 1] > atributoJogador[escolhaComputador1 - 1]) {
        printf("Computador venceu no atributo %d!\n", escolhaComputador1);
    } else if (atributoComputador[escolhaComputador1 - 1] < atributoJogador[escolhaComputador1 - 1]) {
        printf("Jogador venceu no atributo %d!\n", escolhaComputador1);
    } else {
        printf("Empate no atributo %d!\n", escolhaComputador1);
    }    
    if (escolhaJogador2 == 6) {
    // Atributo 6: vence quem tiver o menor valor
    if (atributoComputador[escolhaComputador2 - 1] < atributoJogador[escolhaComputador2 - 1]) {
        printf("Computador venceu no atributo %d (Densidade Demográfica)!\n", escolhaComputador2);
    } else if (atributoComputador[escolhaComputador2 - 1] > atributoJogador[escolhaComputador2 - 1]) {
        printf("Jogador venceu no atributo %d (Densidade Demográfica)!\n", escolhaComputador2);
    } else {
        printf("Empate no atributo %d (Densidade Demográfica)!\n", escolhaComputador2);
    }
} 
    // Para os outros atributos: vence quem tiver o maior valor
    if (atributoComputador[escolhaComputador2 - 1] > atributoJogador[escolhaComputador2 - 1]) {
        printf("Computadorr venceu no atributo %d!\n", escolhaComputador2);
    } else if (atributoJogador[escolhaComputador2 - 1] < atributoJogador[escolhaComputador2 - 1]) {
        printf("Jogador venceu no atributo %d!\n", escolhaComputador2);
    } else {
        printf("Empate no atributo %d!\n", escolhaComputador2);
    } 
        if (escolhaJogador1 > 7){ 
        printf("Escolha inválida! Por favor, escolha um número entre 1 e 7 ou 0 para sair.\n");
    } while (escolhaJogador != 0);
    
    //Soma dos atributos 
    soma1 = atributoJogador[escolhaJogador1 - 1]  + atributoJogador[escolhaJogador2 - 1];
    soma2 = atributoComputador[escolhaComputador1 - 1] + atributoComputador[escolhaComputador2 - 1];
    
        
    // Exibicao dos Resultados Finais:
    // se carta 01 = 1 resultado - carta 01 venceu
    // se carta 01 = 0 resultado - carta 02 venceu

        // Exibicao dos Resultados Finais:
    // se carta 01 = 1 resultado - carta 01 venceu
    // se carta 01 = 0 resultado - carta 02 venceu

    printf("\nResultados finais:\n");
    printf("%-20s %-20s %-20s\n", "Atributo", "Jogador (Cidade1)", "Computador (Cidade2)");
    printf("------------------------------------------------------------\n");
    printf("%-20s %-20d %-20d\n", "Populacao", atributoJogador[0], atributoComputador[0]);
    printf("%-20s %-20.2d %-20.2d\n", "Area", atributoJogador[1], atributoComputador[1]);
    printf("%-20s %-20.2d %-20.2d\n", "PIB", atributoJogador[2], atributoComputador[2]);
    printf("%-20s %-20d %-20d\n", "Pontos Turisticos", atributoJogador[3], atributoComputador[3]);
    printf("%-20s %-20.2d %-20.2d\n", "PIB Percapta", atributoJogador[4], atributoComputador[4]);
    printf("%-20s %-20.2d %-20.2d\n", "Densidade Demografica", atributoJogador[5], atributoComputador[5]);
    printf("%-20s %-20.2d %-20.2d\n", "Super Poder", atributoJogador[6], atributoComputador[6]);
    printf("O resultado da soma do Jogador é: %d\n", soma1);
    printf("O resultado da soma do Computador é: %d\n", soma2);

    if (soma1 > soma2) {
    printf("Jogador Venceu o Jogo!\n");
    } else {
    printf("Computador Venceu o Jogo!\n");
    }
    
    return 0;
    }

}
