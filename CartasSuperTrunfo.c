#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    printf("Desafio Xadrez!\n");
    printf("Novo commit\n");

    char estado[50];
    char codigoDaCarta[50];
    char nomeDaCidade[50];
    int populacao;
    int pontosTuristicos;
    float pib;
    float areaEmKm2;
    float densidadePopulacional;
    float pibPerCapita;

    // Carta 1
    printf("Carta 1:\n");

    printf("Código da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Nome da cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &areaEmKm2);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    // Cálculos da carta 1
    densidadePopulacional = populacao / areaEmKm2;
    pibPerCapita = (pib * 1000000000) / populacao;

    // Exibição da carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaEmKm2);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    // Carta 2
    printf("\nCarta 2:\n");

    printf("Código da carta: \n");
    scanf("%s", codigoDaCarta);

    printf("Estado: \n");
    scanf("%s", estado);

    printf("Nome da cidade: \n");
    scanf("%s", nomeDaCidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &areaEmKm2);

    printf("PIB (em bilhões de reais): \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    // Cálculos da carta 2
    densidadePopulacional = populacao / areaEmKm2;
    pibPerCapita = (pib * 1000000000) / populacao;

    // Exibição da carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigoDaCarta);
    printf("Nome da Cidade: %s\n", nomeDaCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areaEmKm2);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    return 0;
}
