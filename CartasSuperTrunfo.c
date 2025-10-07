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

    
    int vPopulacao = populacao1 > populacao2;
    int vArea = area1 > area2;
    int vPIB = pib1 > pib2;
    int vPontos = pontosTuristicos1 > pontosTuristicos2;
    int vDensidade = densidade1 < densidade2; // menor vence
    int vPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int vSuperPoder = superPoder1 > superPoder2;

    
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vPopulacao);
    printf("Área: Carta 1 venceu (%d)\n", vArea);
    printf("PIB: Carta 1 venceu (%d)\n", vPIB);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vPontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vDensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vPIBperCapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vSuperPoder);

    int opcao;


int atributo1, atributo2;
float valor1_carta1, valor1_carta2;
float valor2_carta1, valor2_carta2;

// Menu para o primeiro atributo
printf("\nEscolha o primeiro atributo para comparar:\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Demográfica\n");
scanf("%d", &atributo1);

// Menu dinâmico para o segundo atributo
printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
for (int i = 1; i <= 5; i++) {
    if (i != atributo1) {
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica\n"); break;
        }
    }
}
scanf("%d", &atributo2);

// Validação
if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
    printf("Erro: atributos inválidos ou repetidos.\n");
    return 1;
}

// Função auxiliar (em forma de macro simples)
#define GET_VAL(attr, carta) ( \
    attr == 1 ? (carta == 1 ? populacao1 : populacao2) : \
    attr == 2 ? (carta == 1 ? area1 : area2) : \
    attr == 3 ? (carta == 1 ? pib1 : pib2) : \
    attr == 4 ? (carta == 1 ? pontosTuristicos1 : pontosTuristicos2) : \
                (carta == 1 ? densidade1 : densidade2) )

// Obter valores
valor1_carta1 = GET_VAL(atributo1, 1);
valor1_carta2 = GET_VAL(atributo1, 2);
valor2_carta1 = GET_VAL(atributo2, 1);
valor2_carta2 = GET_VAL(atributo2, 2);


int v1 = (atributo1 == 5) ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
int v2 = (atributo2 == 5) ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);


float soma1 = valor1_carta1 + valor2_carta1;
float soma2 = valor1_carta2 + valor2_carta2;


printf("\nComparando %s vs %s\n", nome1, nome2);
printf("Atributo 1: %s\n", atributo1 == 1 ? "População" :
                             atributo1 == 2 ? "Área" :
                             atributo1 == 3 ? "PIB" :
                             atributo1 == 4 ? "Pontos Turísticos" : "Densidade Demográfica");
printf("%s: %.2f | %s: %.2f\n", nome1, valor1_carta1, nome2, valor1_carta2);

printf("Atributo 2: %s\n", atributo2 == 1 ? "População" :
                             atributo2 == 2 ? "Área" :
                             atributo2 == 3 ? "PIB" :
                             atributo2 == 4 ? "Pontos Turísticos" : "Densidade Demográfica");
printf("%s: %.2f | %s: %.2f\n", nome1, valor2_carta1, nome2, valor2_carta2);

printf("\nSoma dos atributos:\n");
printf("%s: %.2f\n", nome1, soma1);
printf("%s: %.2f\n", nome2, soma2);


if (soma1 > soma2)
    printf("Vencedora: %s\n", nome1);
else if (soma2 > soma1)
    printf("Vencedora: %s\n", nome2);
else
    printf("Empate!\n");

            return 0;
    }
