#include <stdio.h>

// Estrutura para armazenar os dados de uma carta
struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos;
};

// Função para cadastrar os dados
struct Carta cadastrarCarta(int numero) {
    struct Carta c;

    printf("\nCARTA %d:\n", numero);
    printf("População: ");
    scanf("%d", &c.populacao);
    printf("Área: ");
    scanf("%f", &c.area);
    printf("PIB: ");
    scanf("%f", &c.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &c.pontos);

    return c;
}

// Função para calcular densidade
float calcularDensidade(struct Carta c) {
    return c.populacao / c.area;
}

// Função para calcular PIB per capita
float calcularPIBPerCapita(struct Carta c) {
    return c.pib / c.populacao;
}

// Função para exibir os dados da carta
void exibirCarta(struct Carta c, int numero) {
    float densidade = calcularDensidade(c);
    float pibPerCapita = calcularPIBPerCapita(c);

    printf("\nCARTA %d:\n", numero);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f\n", c.area);
    printf("PIB: %.2f\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontos);
    printf("Densidade demográfica: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pibPerCapita);
}

int main() {
    // Cadastra as duas cartas usando função
    struct Carta carta1 = cadastrarCarta(1);
    struct Carta carta2 = cadastrarCarta(2);

    // Exibe as cartas com os cálculos
    printf("\n==== RESULTADOS ====\n");
    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    return 0;
}
