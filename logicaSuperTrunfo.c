#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio: nível aventureiro


int main()
{

    char estado1[3] = "SP";
    char estado2[3] = "RJ";

    char codigo1[4] = "A01";
    char codigo2[4] = "B02";

    char cidade1[50] = "Sao Paulo";
    char cidade2[50] = "Rio de Janeiro";

    unsigned long int populacao1 = 12325000;
    unsigned long int populacao2 = 6748000;

    // Pontos Turísticos vou deixar igual para verificar o empate

    int pontos1 = 30;
    int pontos2 = 30;

    float area1 = 1521.11;
    float area2 = 1200.25;

    float pib1 = 699.28;
    float pib2 = 300.50;

    float densidade1, densidade2;
    float capita1, capita2;
    float super1, super2;

    // atributos para a comparação
    //  resp para a resposta se vai jogar ou ver as regras ou sair
    // escolha para escolher uma carta 1 ou 2

    int atributos, resp;

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    capita1 = (pib1 * 1000000000.0f) / populacao1;

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1000000000.0f) / populacao2;

    // Cálculo Super
    super1 = (float)populacao1 + area1 + pib1 + pontos1 + capita1 + (1.0f / densidade1);
    super2 = (float)populacao2 + area2 + pib2 + pontos2 + capita2 + (1.0f / densidade2);

    // resp para a resposta se vai jogar ou ver as regras 

    printf("\n### MENU ###\n");
    printf("Digite 1 para iniciar o jogo: \n");
    printf("Digite 2 para ver as regras: \n");
    scanf("%d", &resp);

    switch (resp)
    {
    case 1:

        // Cartas

        printf("\n\nCarta 1:\n\n");
        printf("Estado: %s\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Nome da Cidade: %s\n", cidade1);
        printf("Populacao: %lu\n", populacao1);
        printf("Area: %.2f km\n", area1);
        printf("PIB: %.2f bilhoes de reais\n", pib1);
        printf("Numero de pontos turisticos: %d\n", pontos1);
        printf("Densidade Populacional: %.2f hab/km\n", densidade1);
        printf("PIB per Capita: %.2f reais\n", capita1);

        printf("\nCarta 2:\n\n");
        printf("Estado: %s\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Nome da Cidade: %s\n", cidade2);
        printf("Populacao: %lu\n", populacao2);
        printf("Area: %.2f km\n", area2);
        printf("PIB: %.2f bilhões de reais\n", pib2);
        printf("Numero de pontos turisticos: %d\n", pontos2);
        printf("Densidade Populacional: %.2f hab/km\n", densidade2);
        printf("PIB per Capita: %.2f reais\n", capita2);

        printf("Voce esta com a carta 1, escolha qual atributo deseja comparar: \n");
        printf("1-Populacao:\n");
        printf("2-Area:\n");
        printf("3-PIB:\n");
        printf("4-Numero de pontos turisticos:\n");
        printf("5-Densidade demografica:\n");
        scanf("%d", &atributos);

        switch (atributos)
        {
        case 1:
            printf("## Voce escolheu Populacao ##\n");
            printf("Jogador: %s (%s): %lu\n", cidade1, estado1, populacao1);
            printf("Computador: %s (%s): %lu\n", cidade2, estado2, populacao2);
            if (populacao1 == populacao2)
            {
                printf("Empate.");
            }
            else
            {
                if (populacao1 > populacao2)
                {
                    printf("Parabens voce ganhou");
                }
                else
                {
                    printf("Voce perdeu");
                }
            }
            break;

        case 2:
            printf("## Voce escolheu Area ##\n");
            printf("Jogador: %s (%s): %.2f\n", cidade1, estado1, area1);
            printf("Computador: %s (%s): %.2f\n", cidade2, estado2, area2);
            if (area1 == area2)
            {
                printf("Empate.");
            }
            else
            {
                if (area1 > area2)
                {
                    printf("Parabens voce ganhou");
                }
                else
                {
                    printf("Voce perdeu");
                }
            }
            break;

        case 3:
            printf("## Voce escolheu PIB ##\n");
            printf("Jogador: %s (%s): %.2f\n", cidade1, estado1, pib1);
            printf("Computador: %s (%s): %.2f\n", cidade2, estado2, pib2);
            if (pib1 == pib2)
            {
                printf("Empate.");
            }
            else
            {
                if (pib1 > pib2)
                {
                    printf("Parabens voce ganhou");
                }
                else
                {
                    printf("Voce perdeu");
                }
            }
            break;

        case 4:
            printf("## Voce escolheu Pontos turisticos ##\n");
            printf("Jogador: %s (%s): %d\n", cidade1, estado1, pontos1);
            printf("Computador: %s (%s): %d\n", cidade2, estado2, pontos2);
            if (pontos1 == pontos2)
            {
                printf("Empate.");
            }
            else
            {
                if (pontos1 > pontos2)
                {
                    printf("Parabens voce ganhou");
                }
                else
                {
                    printf("Voce perdeu");
                }
            }
            break;

        case 5:
            printf("## Voce escolheu Densidade Demografica ##\n");
            printf("jogador: %s (%s): %.2f\n", cidade1, estado1, densidade1);
            printf("Computador: %s (%s): %.2f\n", cidade2, estado2, densidade2);
            if (densidade1 == densidade2)
            {
                printf("Empate.");
            }
            else
            {
                if (densidade1 < densidade2)
                {
                    printf("Parabens voce ganhou");
                }
                else
                {
                    printf("Voce perdeu");
                }
            }
            break;

        default:

            printf("Numero invalido...\n");
            break;
        }
        break;

    case 2:
        // Regras
        printf("### REGRAS ###\n");
        printf("1- Escolha qual atributo voce deseja comparar.\n");
        printf("2- Ganha quem tiver o maior atributo escolhido.\n");
        printf("3- Para a Densidade Demografica, a regra inverte: vence a carta com o menor valor.\n");
        break;

    default:
        printf("Invalido...");
        break;
    }

    return 0;
}
