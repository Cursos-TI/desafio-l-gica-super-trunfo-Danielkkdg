#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desafio: nível mestre

int main()
{
    //siglas dos estados
    char estado1[3] = "SP";
    char estado2[3] = "RJ";

    //codigos dos estados
    char codigo1[4] = "A01";
    char codigo2[4] = "B02";

    //estados
    char cidade1[50] = "Sao Paulo";
    char cidade2[50] = "Rio de Janeiro";

    //população
    unsigned long int populacao1 = 12325000;
    unsigned long int populacao2 = 6748000;

    // Pontos Turísticos vou deixar igual para verificar o empate
    int pontos1 = 30;
    int pontos2 = 30;

    //area
    float area1 = 1521.11;
    float area2 = 1200.25;

    //PIB
    float pib1 = 699.28;
    float pib2 = 300.50;

    //Densidade Demográfica
    float densidade1, densidade2;

    float capita1, capita2;
    

    // atributos para a comparação
    // resp para a resposta se vai jogar ou ver as regras ou sair
    // Modificando a vareavel atributos para atr1 e atr2

    int atr1, atr2, resp;

    // Criando mais vareaveis para calcular os valores dos atributos
    
    float valor1_a1, valor2_a1;
    float valor1_a2, valor2_a2;
    

    // Atributos tipo char para o usuario ver o nome do atributo selecionado
    const char *atributo1;
    const char *atributo2;

    // Cálculos carta 1
    densidade1 = (float)populacao1 / area1;
    capita1 = (pib1 * 1000000000.0f) / populacao1;

    // Cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    capita2 = (pib2 * 1000000000.0f) / populacao2;

   

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

        // Alterado para escolher dois atributos
        // Irei trocar a vareavel atributos por atr1 e atr2
        // Primeiro atributo para escolhe

        printf("Voce esta com a carta 1, escolha dois atributo diferente que deseja comparar: \n");
        printf("Escolha o primeiro atributo: \n");
        printf("1-Populacao:\n");
        printf("2-Area:\n");
        printf("3-PIB:\n");
        printf("4-Numero de pontos turisticos:\n");
        printf("5-Densidade demografica:\n");
        scanf("%d", &atr1);

        // Segundo atributo para escolhe
        //

        printf("Escolha o segundo atributo: \n");
        if (atr1 != 1) printf("1-Populacao\n");
        if (atr1 != 2) printf("2-Area\n");
        if (atr1 != 3) printf("3-PIB\n");
        if (atr1 != 4) printf("4-Pontos Turisticos\n");
        if (atr1 != 5) printf("5-Densidade Demografica\n");
        scanf("%d", &atr2);

        // Verificador das respostas do usuario.

        if (atr1 == atr2)
        {
            printf("\nErro: voce nao pode escolher o mesmo atributo duas vezes.\n");
        }
        else
        {

            if ((atr1 > 0 && atr1 <= 5) && (atr2 > 0 && atr2 <= 5))
            {

                switch (atr1)
                {
                case 1:
                    valor1_a1 = populacao1;
                    valor2_a1 = populacao2;
                    atributo1 = "Populacao";
                    break;
                case 2:
                    valor1_a1 = area1;
                    valor2_a1 = area2;
                    atributo1 = "Area";

                    break;
                case 3:
                    valor1_a1 = pib1;
                    valor2_a1 = pib2;
                    atributo1 = "PIB";

                    break;
                case 4:
                    valor1_a1 = pontos1;
                    valor2_a1 = pontos2;
                    atributo1 = "Numero de pontos turisticos";

                    break;
                case 5:
                    valor1_a1 = densidade1;
                    valor2_a1 = densidade2;
                    atributo1 = "Densidade demografica";
                    
                    break;
                }

                switch (atr2)
                {
                case 1:
                    valor1_a2 = populacao1;
                    valor2_a2 = populacao2;
                    atributo2 = "Populacao";
                    break;
                case 2:
                    valor1_a2 = area1;
                    valor2_a2 = area2;
                    atributo2 = "Area";
                    break;
                case 3:
                    valor1_a2 = pib1;
                    valor2_a2 = pib2;
                    atributo2 = "PIB";
                    break;
                case 4:
                    valor1_a2 = pontos1;
                    valor2_a2 = pontos2;
                    atributo2 = "Numero de pontos turisticos";
                    break;
                case 5:
                    valor1_a2 = densidade1;
                    valor2_a2 = densidade2;
                    atributo2 = "Densidade demografica";
                    break;
                }

                
                // COMPARAÇÃO INDIVIDUAL (Operador Ternário)
                // Para Densidade (5), o menor valor (<) vence. Para os outros, o maior (>) vence.

                int decisao_1 = (valor1_a1 == valor2_a1) ? 0 :
                (atr1 == 5) ? (valor1_a1 < valor2_a1 ? 1 : -1)
                            : (valor1_a1 > valor2_a1 ? 1 : -1);

                int decisao_2 = (valor1_a2 == valor2_a2) ? 0 :
                (atr2 == 5) ? (valor1_a2 < valor2_a2 ? 1 : -1)
                            : (valor1_a2 > valor2_a2 ? 1 : -1);

                
                //soma1 = jogador = atributo 1 + atributo 2
                float soma1 = valor1_a1 + valor1_a2;
                //soma2 = compútador = atributo 1 + atributo 2
                float soma2 = valor2_a1 + valor2_a2;

                // RESULTADO

                printf("\n### RESULTADO ###\n");

                printf("Carta 1 (%s) vs Carta 2 (%s)  \n", cidade1, cidade2);
                printf("Atributo 1 (%s): %.2f vs %.2f = ",atributo1, valor1_a1, valor2_a1);
                if (decisao_1 == 1) printf("Vitoria Carta 1\n");
                else if (decisao_1 == -1) printf("Vitoria Carta 2\n");
                else printf("Empate\n");

                printf("Atributo 2 (%s): %.2f vs %.2f = ",
                    atributo2, valor1_a2, valor2_a2);
                if (decisao_2 == 1) printf("Vitoria Carta 1\n");
                else if (decisao_2 == -1) printf("Vitoria Carta 2\n");
                else printf("Empate\n");
                

                printf("\nResultado final: ");
                if (soma1 > soma2)
                    printf("Carta 1 venceu a rodada!\n");
                else if (soma2 > soma1)
                    printf("Carta 2 venceu a rodada!\n");
                else
                    printf("Empate geral!\n");




            }
            else{
                printf("Numero invalido.\n");
            }
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
