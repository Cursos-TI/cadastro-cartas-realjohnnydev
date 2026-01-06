#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    char codigo_carta1[4];
    char cidade1[50];
    float population1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    printf("Olá, bem-vindo ao jogo Super Trunfo!\n");
    printf("Iremos pedir os dados das novas cartas que serão adicionadas ao seu deck.\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1);

    printf("Digite a quantidade de habitantes: ");
    scanf("%f", &population1);

    printf("Digite a área da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("Digite o código da carta (Ex.: A01): ");
    scanf("%3s", codigo_carta1);

    char codigo_carta2[4];
    char cidade2[50];
    float population2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    printf("Agora, iremos pedir os dados da segunda carta.\n\n");

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2);

    printf("Digite a quantidade de habitantes: ");
    scanf("%f", &population2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("Digite o código da carta (Ex.: A01): ");
    scanf("%3s", codigo_carta2);

    printf("\nMuito bem! Você adicionou duas cartas ao seu deck:\n\n");

    printf("\nCarta 1:\n\n");
    printf("Cidade: %s\n", cidade1);
    printf("População: %.2f\n", population1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Código da Carta: %s\n", codigo_carta1);

    printf("\nCarta 2:\n\n");
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", population2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Código da Carta: %s\n", codigo_carta2);

    return 0;
}