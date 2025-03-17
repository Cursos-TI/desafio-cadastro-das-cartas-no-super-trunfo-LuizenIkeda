#include <stdio.h>

int main() {
    // Declaração das variáveis para as informações das cartas
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2, pib_per_capita1, pib_per_capita2;

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
    scanf("%f", &pib1);  // O PIB é agora fornecido diretamente em reais

    // Número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;  // PIB per Capita agora considerando o PIB em reais

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
    scanf("%f", &pib2);  // O PIB é agora fornecido diretamente em reais

    // Número de pontos turísticos
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;  // PIB per Capita agora considerando o PIB em reais

    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);  // Exibindo o PIB em reais
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);  // Exibindo o PIB em reais
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
