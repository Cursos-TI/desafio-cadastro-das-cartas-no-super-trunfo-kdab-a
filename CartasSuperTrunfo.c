#include <stdio.h>

int main() {
    //No bloco abaixo, a declaração das variáveis usadas.
    char estado, codigo[4], cidade[30];
    int populacao, pontos;
    float area, pib;

    //No bloco abaixo, a requisição ao usuário para que insira as informações necessárias para definir a primeira carta e, após, exibi-la.
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
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\n", estado, codigo, cidade, populacao, area, pib, pontos);

    //No bloco abaixo, a requisição ao usuário para que insira as informações necessárias para definir a segunda carta e, após, exibi-la.
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
    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f\nPIB: %.2f\nNúmero de Pontos Turísticos: %d", estado, codigo, cidade, populacao, area, pib, pontos);

    return 0;
}
