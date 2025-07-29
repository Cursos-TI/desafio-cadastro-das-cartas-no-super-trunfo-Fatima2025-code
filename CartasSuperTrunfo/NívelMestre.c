#include <stdio.h>
#include <stdlib.h>  // system("clear")
#include <unistd.h>  // sleep()

struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos;
};

struct Carta cadastrarCarta(int numero) {
    struct Carta c;
    printf("\n🃏 CADASTRO DA CARTA %d 🃏\n", numero);
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

void exibirCarta(struct Carta c, int numero) {
    printf("\n📄 CARTA %d:\n", numero);
    printf("População: %d\n", c.populacao);
    printf("Área: %.2f km²\n", c.area);
    printf("PIB: %.2f\n", c.pib);
    printf("Pontos turísticos: %d\n", c.pontos);
}

void animarComparacao() {
    printf("\nComparando cartas");
    for (int i = 0; i < 3; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n\n");
}

void mostrarResultado(int valor1, int valor2, char atributo[]) {
    printf("🔎 Atributo escolhido: %s\n", atributo);
    printf("Carta 1: %d\n", valor1);
    printf("Carta 2: %d\n", valor2);
    
    if (valor1 > valor2) {
        printf("🏆 Carta 1 venceu no quesito %s! Parabéns!\n", atributo);
    } else if (valor1 < valor2) {
        printf("🏆 Carta 2 venceu no quesito %s! Boa jogada!\n", atributo);
    } else {
        printf("🤝 Empate técnico no %s! Que disputa acirrada!\n", atributo);
    }
}

void mostrarResultadoFloat(float valor1, float valor2, char atributo[]) {
    printf("🔎 Atributo escolhido: %s\n", atributo);
    printf("Carta 1: %.2f\n", valor1);
    printf("Carta 2: %.2f\n", valor2);

    if (valor1 > valor2) {
        printf("🏆 Carta 1 venceu no %s com folga!\n", atributo);
    } else if (valor1 < valor2) {
        printf("🏆 Carta 2 dominou no %s!\n", atributo);
    } else {
        printf("🤝 Empate no %s! Ninguém levou essa!\n", atributo);
    }
}

int main() {
    system("clear"); // use "cls" se estiver no Windows
    printf("🎮 BEM-VINDO AO SUPER TRUNFO – PAÍSES 🎮\n");
    sleep(1);
    printf("Prepare-se para a batalha entre cartas!\n\n");

    struct Carta carta1 = cadastrarCarta(1);
    struct Carta carta2 = cadastrarCarta(2);

    system("clear");
    printf("✅ CARTAS PRONTAS!\n");
    sleep(1);

    exibirCarta(carta1, 1);
    exibirCarta(carta2, 2);

    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    int escolha;
    printf("Digite o número do atributo: ");
    scanf("%d", &escolha);

    animarComparacao();

    if (escolha == 1) {
        mostrarResultado(carta1.populacao, carta2.populacao, "População");
    } else if (escolha == 2) {
        mostrarResultadoFloat(carta1.area, carta2.area, "Área");
    } else if (escolha == 3) {
        mostrarResultadoFloat(carta1.pib, carta2.pib, "PIB");
    } else if (escolha == 4) {
        mostrarResultado(carta1.pontos, carta2.pontos, "Pontos turísticos");
    } else {
        printf("❌ Escolha inválida! Tente novamente.\n");
    }

    printf("\n🎉 Fim do duelo! Obrigado por jogar!\n");

    return 0;
}
