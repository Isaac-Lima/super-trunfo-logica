#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Declaração de variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    int opcao;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %49s", nomeCidade1);
    printf("Digite a população: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área em km²: ");
    scanf(" %f", &area1);
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos para a primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados para a segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %49s", nomeCidade2);
    printf("Digite a população: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área em km²: ");
    scanf(" %f", &area2);
    printf("Digite o PIB em bilhões de reais: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos para a segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Menu de escolha do atributo para comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção: ");
    scanf(" %d", &opcao);

    printf("\nComparação de Cartas:\n");
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("Carta 2 - %s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (populacao2 > populacao1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", nomeCidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (area2 > area1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões de reais\n", nomeCidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões de reais\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pib2 > pib1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("Carta 2 - %s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", nomeCidade1, densidadePopulacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", nomeCidade2, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Resultado: Carta 1 venceu!\n");
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Resultado: Carta 2 venceu!\n");
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
