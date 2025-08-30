#include <stdio.h>

int main() {
    // Carta 1
    char codigo1[5];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char codigo2[5];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Codigo da cidade (ex: A01): ");
    scanf("%s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Codigo da cidade (ex: B02): ");
    scanf("%s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibir Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    // Exibir Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
