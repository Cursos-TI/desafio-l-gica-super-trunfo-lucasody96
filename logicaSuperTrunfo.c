#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Estados
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades

    char estado1, estado2; //Definindo as váriaveis de estado.
    char codigoCarta1[4], codigoCarta2[4]; // Definindo as variáveis do código da carta
    char nomeCidade1[50], nomeCidade2[50]; //Definindo as varíaveis do nome da cidade
    unsigned long int populacao1, populacao2; //Definindo as váriaveis da população.
    float area1, area2; //Definindo as váriaveis de área.
    double pib1, pib2;//Definindo as váriaveis do PIB.
    int quantPontosTuristicos1, quantPontosTuristicos2; //Definindo a quantidade de pontos turísticos.
    //Variáveis do desafio aventureiro
    float densidadePopulacional1, densidadePopulacional2; //Definindo as variáveis de densidade populacional
    float pibPerCapita1, pibPerCapita2;//Definindo as variáveis de PIB per Capita
    float superPoder1, superPoder2;
    
    printf("Bem vindo ao jogo Super Trunfo - Estados!\n");// Como foi solicitado variáveis referentes ao estado e não ao país, ajustei a introdução do desafio
    printf("\n"); //deixando um espaço para uma leitura mais fluída do usuário
    printf("Para começarmos, vamos realizar o cadastro das cartas que mostrarão os dados dos estados\n");
    printf("\n");

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio.
    //Inserção dos dados pelo usuário
    //Bloco de dados informados pelo usuário para a primeira carta
    printf("Primeiramente, vamos realizar o cadastro da primeira carta.\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados: ");
    scanf(" %c", &estado1);

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (Exemplo: A01, B03): ");
    scanf("%3s", codigoCarta1);

    // Bloco que permite que o nome possa ser com espaço após o primeiro nome
    //Consumir o '\n' deixado pelo scanf anterior
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, 50, stdin);
    // Remover o caractere de nova linha '\n' ao final
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Informe o número de habitantes da cidade: ");
    scanf("%lu",&populacao1);
    
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib1);// Na leitura do PIB, se variável double.

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &quantPontosTuristicos1);
    printf("\n");

    //Bloco de dados informados pelo usuário para a segunda carta
    printf("Agora, vamos realizar o cadastro da segunda carta.\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados: ");
    scanf(" %c", &estado2);

    printf("Escreva a letra do estado seguida de um número de 01 a 04 (Exemplo: A01, B03): ");
    scanf("%3s", codigoCarta2);

    // Bloco que permite que o nome possa ser com espaço após o primeiro nome
    //Consumir o '\n' deixado pelo scanf anterior
    getchar();
    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);
    // Remover o caractere de nova linha '\n' ao final
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Informe o número de habitantes da cidade: ");
    scanf("%lu",&populacao2);
    
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Informe o PIB (Produto Interno Bruto) da cidade: ");
    scanf("%lf", &pib2);// Na leitura do PIB, se variável double

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%i", &quantPontosTuristicos2);
    printf("\n");

    printf("Segue abaixo a impressão dos dados cadastrados das duas cartas: \n");
    printf("\n");

    //Cálculo da Densidade populacional
    densidadePopulacional1 = (float)populacao1/area1;
    densidadePopulacional2 = (float)populacao2/area2;

    //Cálculo do Pib Per Capita
    pibPerCapita1 = (float)pib1/(float)populacao1;
    pibPerCapita2 = (float)pib2/(float)populacao2;

    //Impressão dos dados da carta 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f de reais\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", quantPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");

    //Impressão dos dados da carta 2
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", quantPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    //Impressão da comparação dos atributos das cartas
    printf("\nComparação de cartas:\n");

    //Comparação entre o atributo: população
    if (populacao1 > populacao2)
    {
        printf("População: Carta 1 venceu\n");
    }else{
        printf("População: Carta 2 venceu\n");
    }
    
    //Comparação entre o atributo: Área
    if (area1 > area2)
    {
        printf("Área: Carta 1 venceu\n");
    }else{
        printf("Área: Carta 2 venceu\n");
    }

    //Comparação entre o atributo: PIB
    if (pib1 > pib2)
    {
        printf("PIB: Carta 1 venceu\n");
    }else{
        printf("PIB: Carta 2 venceu\n");
    }
    
    //Comparação entre o atributo: Quantidade de pontos turísticos
    if (quantPontosTuristicos1 > quantPontosTuristicos2)
    {
        printf("Quantidade de pontos turísticos: Carta 1 venceu\n");
    }else{
        printf("Quantidade de pontos turísticos: Carta 2 venceu\n");
    }

    //Comparação entre o atributo: Densidade populacional
    if (densidadePopulacional1 < densidadePopulacional2)
    {
        printf("Densidade populacional: Carta 1 venceu\n");
    }else{
        printf("Densidade populacional: Carta 2 venceu\n");
    }

    //Comparação entre o atributo: Pip Per Capita
    if ( pibPerCapita1 > pibPerCapita2)
    {
        printf("Pip Per Capita: Carta 1 venceu\n");
    }else{
        printf("Pip Per Capita: Carta 2 venceu\n");
    }

    //cálculo do superpoder - (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    superPoder1 = (float)populacao1 +
                  area1 +
                  (float)pib1 +
                  (float)quantPontosTuristicos1 +
                  pibPerCapita1 +
                  (1.0 / densidadePopulacional1);

    superPoder2 = (float)populacao2 +
                  area2 +
                  (float)pib2 +
                  (float)quantPontosTuristicos2 +
                  pibPerCapita2 +
                  (1.0 / densidadePopulacional2);

    //Comparação entre o atributo: Super poder
    if (superPoder1 > superPoder2)
    {
        printf("Super poder: Carta 1 venceu\n");
    }else{
        printf("Super poder: Carta 2 venceu\n");
    }

    return 0;
}
