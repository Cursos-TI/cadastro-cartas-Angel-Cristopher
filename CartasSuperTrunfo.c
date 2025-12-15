#include <stdio.h>

int main(){
//Variáveis carta 1
    char estado_1, codigoCarta_1[3], nomeCidade_1[50];
    int populacao_1, pontosTuristicos_1;
    float area_1, pib_1, densidadePopulacional_1, pibPerCapita_1;

//Variáveis carta 2
    char estado_2, codigoCarta_2[3], nomeCidade_2[50];
    int populacao_2, pontosTuristicos_2;
    float area_2, pib_2, densidadePopulacional_2, pibPerCapita_2;

//Inserir informações carta 1
    printf("Cadastro de informações carta 1: \n"
        "Insira o Estado (A-H): \n");
    scanf(" %c", &estado_1);
    printf("Insira o Código da Carta (1-4): \n");
    scanf("%s", codigoCarta_1);
    printf("Insira o nome da Cidade: \n");
    scanf("%s", nomeCidade_1);
    printf("Insira a População: \n");
    scanf("%d", &populacao_1);
    printf("Insira a Área: \n");
    scanf("%f", &area_1);
    printf("Insira o PIB: \n");
    scanf("%f", &pib_1);
    printf("Insira o número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos_1);

//Processar dados calculados carta 1
    densidadePopulacional_1 = (float) populacao_1 / area_1;
    pibPerCapita_1 = (float) pib_1 /  populacao_1;

//Inserir informações carta 2
    printf("\nCadastro de informações carta 2: \n"
        "Insira o Estado (A-H): \n");
    scanf(" %c", &estado_2);
    printf("Insira o Código da Carta (1-4): \n");
    scanf("%s", codigoCarta_2);
    printf("Insira o nome da Cidade: \n");
    scanf("%s", nomeCidade_2);
    printf("Insira a População: \n");
    scanf("%d", &populacao_2);
    printf("Insira a Área: \n");
    scanf("%f", &area_2);
    printf("Insira o PIB: \n");
    scanf("%f", &pib_2);
    printf("Insira o número de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos_2);

//Processar dados calculados carta 2
    densidadePopulacional_2 = (float) populacao_2 / area_2;
    pibPerCapita_2 = (float) pib_2 /  populacao_2;

//Impressão de informações no terminal carta 1
    printf("\nCarta 1: \n"
        "Estado: %c \n"
        "Código: %c0%s \n"//Jogador terá de digitar apenas o número da carta
        "Nome da Cidade: %s \n"
        "População: %d \n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais \n" 
        "Número de Pontos Turísticos: %d \n"
        "Densidade Populacional: %.2f hab/km² \n"
        "PIB per Capita: R$ %.2f bilhões \n",
        estado_1, estado_1, codigoCarta_1, nomeCidade_1, populacao_1, area_1, pib_1, pontosTuristicos_1, densidadePopulacional_1, pibPerCapita_1);

//Impressão de informações no terminal carta 2
    printf("\nCarta 2: \n"
        "Estado: %c \n"
        "Código: %c0%s \n"//Jogador terá de digitar apenas o número da carta
        "Nome da Cidade: %s \n"
        "População: %d \n"
        "Área: %.2f km²\n"
        "PIB: %.2f bilhões de reais \n" 
        "Número de Pontos Turísticos: %d \n"
        "Densidade Populacional: %.2f hab/km² \n"
        "PIB per Capita: R$ %.2f bilhões \n",
        estado_2, estado_2, codigoCarta_2, nomeCidade_2, populacao_2, area_2, pib_2, pontosTuristicos_2, densidadePopulacional_2, pibPerCapita_2);

return 0;

}