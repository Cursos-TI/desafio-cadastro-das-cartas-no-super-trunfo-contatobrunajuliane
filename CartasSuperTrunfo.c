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

    if(populacao1 > populacao2){
        printf("Carta 1 Venceu!\n");
    }
        else{
            printf("Carta 2 Venceu!\n");

        }

            return 0;

    }
