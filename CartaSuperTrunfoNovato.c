#include <stdio.h>

int main() {
    // Dados da Carta 1
    int populacao1, pontos1;
    float area1, pib1;

    // Dados da Carta 2
    int populacao2, pontos2;
    float area2, pib2;

    // Entrada de dados - Carta 1
    printf("CARTA 1:\n");
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Entrada de dados - Carta 2
    printf("\nCARTA 2:\n");
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Exibição dos dados cadastrados
    printf("\n==== CARTAS CADASTRADAS ====\n");

    printf("\nCARTA 1:\n");
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);

    printf("\nCARTA 2:\n");
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);

    return 0;
}
