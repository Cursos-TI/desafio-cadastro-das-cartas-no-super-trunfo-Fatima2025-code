#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    int populacao1, pontos1;
    float area1, pib1;

    // Declaração das variáveis da carta 2
    int populacao2, pontos2;
    float area2, pib2;

    // Entrada dos dados da carta 1
    printf("CARTA 1:\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada dos dados da carta 2
    printf("\nCARTA 2:\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculo das métricas adicionais
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibição dos dados cadastrados e calculados
    printf("\n==== RESULTADO DAS CARTAS ====\n");

    printf("\nCARTA 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);

    printf("\nCARTA 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);

    return 0;
}
