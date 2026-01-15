#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio: nível novato

int main() {

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];

    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float capita1, capita2;
    float super1, super2;

    // CARTA 1
    printf("=== Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %2s", estado1);

    printf("Codigo: ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    capita1 = (pib1 * 1000000000.0f) / populacao1;

    // CARTA 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %2s", estado2);

    printf("Codigo: ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Cálculo Super
    super1 = (float)populacao1 + area1 + pib1 + pontos1 + capita1 + (1.0f / densidade1);
    super2 = (float)populacao2 + area2 + pib2 + pontos2 + capita2 + (1.0f / densidade2);

    // RESULTADOS
    printf("\n\nCarta 1:\n\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    printf("\nCarta 2:\n\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    // Comparação
    printf("\nComparacao de cartas (Atributo: Populacao): \n");
    printf("Carta 1 %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 %s (%s): %lu\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    return 0;
}
