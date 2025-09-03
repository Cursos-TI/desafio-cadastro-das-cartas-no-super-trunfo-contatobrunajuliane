#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);


    printf("Carta 2:\n");
    
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

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
