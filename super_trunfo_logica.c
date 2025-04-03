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

    // Exibição das opções para escolha de atributos
    int escolha1, escolha2;
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
    
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &escolha2);
    } while (escolha1 == escolha2);

    float valor1_carta1, valor2_carta1, valor1_carta2, valor2_carta2;
    
    // Definição dos valores para comparação
    switch (escolha1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2; break;
        case 2: valor1_carta1 = area1; valor1_carta2 = area2; break;
        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; break;
        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; break;
        case 5: valor1_carta1 = 1.0 / densidadePopulacional1; valor1_carta2 = 1.0 / densidadePopulacional2; break;
        case 6: valor1_carta1 = pibPerCapita1; valor1_carta2 = pibPerCapita2; break;
    }
    
    switch (escolha2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; break;
        case 2: valor2_carta1 = area1; valor2_carta2 = area2; break;
        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; break;
        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; break;
        case 5: valor2_carta1 = 1.0 / densidadePopulacional1; valor2_carta2 = 1.0 / densidadePopulacional2; break;
        case 6: valor2_carta1 = pibPerCapita1; valor2_carta2 = pibPerCapita2; break;
    }

    // Cálculo da soma dos atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    // Exibição do resultado
    printf("\nComparação de cartas:\n");
    printf("%s: %.2f e %.2f (Total: %.2f)\n", nomeCidade1, valor1_carta1, valor2_carta1, soma1);
    printf("%s: %.2f e %.2f (Total: %.2f)\n", nomeCidade2, valor1_carta2, valor2_carta2, soma2);
    
    printf("Resultado: %s\n", (soma1 > soma2) ? nomeCidade1 : (soma1 < soma2) ? nomeCidade2 : "Empate!");

    return 0;
}
