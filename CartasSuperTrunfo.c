#include <stdio.h>

int main() {
    // Declaração das variáveis para as informações das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;

    // Entrada de dados para a carta 1
    printf("Digite as informações da carta 1:\n");

    // Estado
    printf("Estado: ");
    scanf(" %c", &estado1); // Espaço antes de %c para capturar corretamente o caractere

    // Código da carta
    printf("Código da Carta: ");
    scanf("%s", codigo1);

    // Nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Captura o nome da cidade com espaços

    // População
    printf("População: ");
    scanf("%d", &populacao1);

    // Área
    printf("Área (em km²): ");
    scanf("%f", &area1);

    // PIB
    printf("PIB: ");
    scanf("%f", &pib1);

    // Número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados para a carta 2
    printf("\nDigite as informações da carta 2:\n");

    // Estado
    printf("Estado: ");
    scanf(" %c", &estado2); // Espaço antes de %c para capturar corretamente o caractere

    // Código da carta
    printf("Código da Carta: ");
    scanf("%s", codigo2);

    // Nome da cidade
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2); // Captura o nome da cidade com espaços

    // População
    printf("População: ");
    scanf("%d", &populacao2);

    // Área
    printf("Área (em km²): ");
    scanf("%f", &area2);

    // PIB
    printf("PIB: ");
    scanf("%f", &pib2);

    // Número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);

    return 0;
}