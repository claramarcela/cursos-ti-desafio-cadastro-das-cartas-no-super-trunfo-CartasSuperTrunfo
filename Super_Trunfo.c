#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

    // Seguem abaixo as variáveis para cada atributo.
 
    char estado[30];
    char codigo[5]; 
    char nome[30];
    int populacao, pontoturistico;
    float pib, area;

    // Cadastro das cartas utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    
    //Carta 1
   
    printf("Vamos cadastrar duas cartas para dar início ao nosso jogo? \n");
    printf("Vamos começar com a Carta 1: \n");
    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Qual é a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km2): \n");
    scanf("%f", &area);

    printf("Qual é o PIB da cidade?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem nessa cidade?: \n");
    scanf("%d", &pontoturistico);   


    // Exibição dos dados retidas para a Carta 1:


    printf("Super Trunfo - Carta 1 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome); 
    printf("População: %d \n", populacao);
    printf("Área em km2: %.2f \n", area);
    printf("PIB em Bilhões: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontoturistico);


    // Cadastro da Carta 2:

    printf("Agora vamos para a Carta 2: \n");
    printf("Digite a primeira letra do estado: \n");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Qual é a população da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km2): \n");
    scanf("%f", &area);

    printf("Qual é o PIB da cidade?: \n");
    scanf("%f", &pib);

    printf("Quantos pontos turísticos tem nessa cidade?: \n");
    scanf("%d", &pontoturistico);   


    // Exibição dos dados retidas para a Carta 2:


    printf("Super Trunfo - Carta 2 \n");
    printf("Estado: %s \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome); 
    printf("População: %d \n", populacao);
    printf("Área em km2: %.2f \n", area);
    printf("PIB em Bilhões: %.2f \n", pib);
    printf("Pontos turísticos: %d \n", pontoturistico);


    return 0;
}
