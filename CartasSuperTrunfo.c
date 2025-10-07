#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Carta 1
    char estado1[50], codigo1[50], nome1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float pib1, area1;
    float densidade1, pibPerCapita1, superPoder1;

    // Carta 2
    char estado2[50], codigo2[50], nome2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float pib2, area2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("Carta 1:\n");
    printf("Código da carta: ");
    scanf("%s", codigo1);
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Nome da cidade: ");
    scanf("%s", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidade1);

    // Entrada Carta 2
    printf("\nCarta 2:\n");
    printf("Código da carta: ");
    scanf("%s", codigo2);
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Nome da cidade: ");
    scanf("%s", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidade2);

    // Comparações
    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPIB = pib1 > pib2;
    int vPontos = pontosTuristicos1 > pontosTuristicos2;
    int vDensidade = densidade1 < densidade2; // menor vence
    int vPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    // Exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPIBperCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    int opcao;

// Menu interativo
printf("\nEscolha o atributo para comparar:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
printf("Digite o número da opção: ");
scanf("%d", &opcao);

// Exibição dos nomes
printf("\nComparando %s vs %s\n", nome1, nome2);

// Switch para comparação
switch (opcao) {
    case 1:
        printf("Atributo: População\n");
        printf("%s: %lu\n", nome1, populacao1);
        printf("%s: %lu\n", nome2, populacao2);
        if (populacao1 > populacao2)
            printf("Vencedora: %s\n", nome1);
        else if (populacao2 > populacao1)
            printf("Vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("Atributo: Área\n");
        printf("%s: %.2f km²\n", nome1, area1);
        printf("%s: %.2f km²\n", nome2, area2);
        if (area1 > area2)
            printf("Vencedora: %s\n", nome1);
        else if (area2 > area1)
            printf("Vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("Atributo: PIB\n");
        printf("%s: %.2f bilhões\n", nome1, pib1);
        printf("%s: %.2f bilhões\n", nome2, pib2);
        if (pib1 > pib2)
            printf("Vencedora: %s\n", nome1);
        else if (pib2 > pib1)
            printf("Vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("Atributo: Pontos Turísticos\n");
        printf("%s: %d\n", nome1, pontosTuristicos1);
        printf("%s: %d\n", nome2, pontosTuristicos2);
        if (pontosTuristicos1 > pontosTuristicos2)
            printf("Vencedora: %s\n", nome1);
        else if (pontosTuristicos2 > pontosTuristicos1)
            printf("Vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("Atributo: Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", nome1, densidade1);
        printf("%s: %.2f hab/km²\n", nome2, densidade2);
        if (densidade1 < densidade2)
            printf("Vencedora: %s\n", nome1);
        else if (densidade2 < densidade1)
            printf("Vencedora: %s\n", nome2);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida. Tente novamente com um número de 1 a 5.\n");
        break;
}

            return 0;
    }
