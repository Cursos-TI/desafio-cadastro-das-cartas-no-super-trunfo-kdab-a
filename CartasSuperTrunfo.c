#include <stdio.h>

int main() {
    //A seguir, a declaração das variáveis usadas.
    char estado, codigo[4], cidade[30];
    int populacao, pontos;
    float area, pib, denspop, pibpc;

    //A seguir, a requisição ao usuário para que insira as informações necessárias para definir a primeira carta.
    printf("A seguir, insira os dados da primeira carta:\nDigite uma letra de A a H, representando um dos oito estados:\n");
    scanf(" %c", &estado);
    printf("Digite o código da carta, contendo a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos);
    getchar();

    //A seguir, o cálculo da densidade populacional e do PIB per Capita para a Carta 1.
    denspop = populacao / area;
    pibpc = pib / populacao;

    //A seguir, a exibição da primeira Carta.
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, pontos, denspop, pibpc);

    //A seguir, a requisição ao usuário para que insira as informações necessárias para definir a segunda carta.
    printf("\nA seguir, insira os dados da segunda carta:\nDigite uma letra de A a H, representando um dos oito estados:\n");
    scanf(" %c", &estado);
    printf("Digite o código da carta, contendo a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Digite o número de pontos turísticos da cidade:\n");
    scanf("%d", &pontos);

    //A seguir, o cálculo da densidade populacional e do PIB per Capita para a Carta 2.
    denspop = populacao / area;
    pibpc = pib / populacao;

    //A seguir, a exibição da segunda Carta.
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado, codigo, cidade, populacao, area, pib, pontos, denspop, pibpc);

    return 0;
}
