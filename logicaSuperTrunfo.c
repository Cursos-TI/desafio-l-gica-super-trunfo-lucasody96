#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Desafio Super Trunfo - Cidades
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    int escolhaJogador1, escolhaJogador2;//Define a condição no switch
    char cidade1, cidade2; //Definindo as váriaveis de estado.
    char codigoCarta1[4], codigoCarta2[4]; // Definindo as variáveis do código da carta
    char nomeCidade1[50], nomeCidade2[50]; //Definindo as varíaveis do nome da cidade
    unsigned long int populacao1, populacao2; //Definindo as váriaveis da população.
    double area1, area2; //Definindo as váriaveis de área.
    double pib1, pib2;//Definindo as váriaveis do PIB.
    int quantPontosTuristicos1, quantPontosTuristicos2; //Definindo a quantidade de pontos turísticos.
    //Variáveis do desafio aventureiro
    double densidadePopulacional1, densidadePopulacional2; //Definindo as variáveis de densidade populacional
    double pibPerCapita1, pibPerCapita2;//Definindo as variáveis de PIB per Capita
    double superPoder1, superPoder2;
    double somaAtributos1, somaAtributos2;

    printf("===========================================\n");
    printf(" Bem vindo ao jogo Super Trunfo - Cidades! \n");// Como foi solicitado variáveis referentes a cidade e não ao país, ajustei a introdução do desafio
    printf("===========================================\n");
    printf("\n"); //deixando um espaço para uma leitura mais fluída do usuário
    printf("Para começarmos, vamos realizar o cadastro das cartas que mostrarão os dados das cidades\n");
    printf("\n");

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio.
    //Inserção dos dados pelo usuário
    //Bloco de dados informados pelo usuário para a primeira carta
    printf("Primeiramente, vamos realizar o cadastro da primeira carta.\n");

    printf("Digite uma letra de A a H que representa uma das 8 cidades: ");
    scanf(" %c", &cidade1);
    cidade1 = toupper(cidade1);

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
    if (populacao1 == 0)
    {
      printf("População não pode ser zero. Programa está sendo encerrado..."); 
      return 1; 
    }
    
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%lf", &area1);
    if (area1 == 0)
    {
      printf("Área não pode ser zero. Programa está sendo encerrado..."); 
      return 1; 
    }

    printf("Informe o PIB (Produto Interno Bruto) da cidade (Em bilhões): ");
    scanf("%lf", &pib1);// Na leitura do PIB, se variável double.

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &quantPontosTuristicos1);
    printf("\n");
    printf("==================================================\n");

    //Bloco de dados informados pelo usuário para a segunda carta
    printf("Agora, vamos realizar o cadastro da segunda carta.\n");

    printf("Digite uma letra de A a H que representa um dos 8 estados: ");
    scanf(" %c", &cidade2);
    cidade2 = toupper(cidade2);

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
    if (populacao2 == 0)
    {
      printf("População não pode ser zero. Programa está sendo encerrado...");  
      return 1;
    }
    
    printf("Informe a área da cidade em quilômetros quadrados: ");
    scanf("%lf", &area2);
    if (area2 == 0)
    {
      printf("Área não pode ser zero. Programa está sendo encerrado..."); 
      return 1;
    }

    printf("Informe o PIB (Produto Interno Bruto) da cidade (Em bilhões): ");
    scanf("%lf", &pib2);// Na leitura do PIB, se variável double

    printf("Informe a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &quantPontosTuristicos2);
    printf("\n");
    printf("==================================================\n");

    //Cálculo da Densidade populacional
    densidadePopulacional1 = (double)populacao1/area1;
    densidadePopulacional2 = (double)populacao2/area2;

    //Cálculo do Pib Per Capita
    pibPerCapita1 = (pib1 * 1000000000.00)/(double)populacao1;
    pibPerCapita2 = (pib2 * 1000000000.00)/(double)populacao2;

    //cálculo do superpoder - (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")
    superPoder1 = (double)populacao1 +
                  area1 +
                  (pib1 * 1000000000.0) +
                  (double)quantPontosTuristicos1 +
                  pibPerCapita1 +
                  (1.0 / densidadePopulacional1);

    superPoder2 = (double)populacao2 +
                  area2 +
                  (pib2 * 1000000000.0) +
                  (double)quantPontosTuristicos2 +
                  pibPerCapita2 +
                  (1.0 / densidadePopulacional2);


    printf("Segue abaixo a impressão dos dados cadastrados das duas cartas: \n");
    printf("\n");

    //Impressão dos dados da carta 1
    printf("Carta 1: \n");
    printf("Cidade: %c\n", cidade1);
    printf("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Quantidade de pontos turísticos: %d\n", quantPontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("\n");
    printf("==================================================\n");


    //Impressão dos dados da carta 2
    printf("Carta 2: \n");
    printf("Cidade: %c\n", cidade2);
    printf("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Quantidade de pontos turísticos: %d\n", quantPontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("\n");
    printf("==================================================\n");

    //Escolha do primeiro atributo a ser comparado pelo usuário
   
    printf("\n*** Selecione o primeiro atributo a ser comparado informando uma das opções abaixo: ***\n");
    printf("[1]. População\n");
    printf("[2]. Área\n");
    printf("[3]. PIB\n");
    printf("[4]. Quantidade de Pontos Turísticos\n");
    printf("[5]. Densidade Populacional\n");
    printf("[6]. PIB Per Capita\n");
    printf("[7]. Super Poder\n");

    printf("Qual o primeiro atributo que você deseja comparar as cartas? ");
    scanf("%d", &escolhaJogador1);
  
    if ((escolhaJogador1 < 1) || (escolhaJogador1 > 7))
    {
        printf("Atributo selecionado incorreto, jogo sendo encerrado...");
        return 1;
    }
    

    printf("\n");
    printf("==================================================\n");

    //Escolha do segundo atributo a ser comparado pelo usuário, removendo o atributo escolhido anteriormente
    printf("\n*** Selecione o segundo atributo a ser comparado informando uma das opções abaixo: ***\n");
    if (escolhaJogador1 != 1)
    {
       printf("[1]. População\n");
    }

    if (escolhaJogador1 != 2)
    {
        printf("[2]. Área\n");
    }

    if (escolhaJogador1 != 3)
    {
       printf("[3]. PIB\n");
    }

    if (escolhaJogador1 != 4)
    {
        printf("[4]. Quantidade de Pontos Turísticos\n");
    }

    if (escolhaJogador1 != 5)
    {
        printf("[5]. Densidade Populacional\n");
    }

    if (escolhaJogador1 != 6)
    {
        printf("[6]. PIB Per Capita\n");
    }

    if (escolhaJogador1 != 7)
    {
        printf("[7]. Super Poder\n");
    }
    
    printf("Qual o segundo atributo que você deseja comparar as cartas? ");
    scanf("%d", &escolhaJogador2);
    printf("\n");

    if ((escolhaJogador2 < 1) || (escolhaJogador2 > 7))
    {
        printf("Atributo selecionado incorreto, jogo sendo encerrado...");
        return 1;
    }

    //Impressão da comparação dos atributos das cartas
    printf("\nComparação entre as cartas dos atributos escolhidos:\n");

    //Switch para demonstrar qual o primeiro atributo escolhido, comparação individual e armazenamento do atributo para posterior soma com o segundo.
    switch (escolhaJogador1)
    {
    case 1:
        printf ("O atributo 1 escolhido foi - População.\n");
        printf ("%s: %lu habitantes.\n", nomeCidade1, populacao1);
        printf ("%s: %lu habitantes.\n", nomeCidade2, populacao2);

        //Comparação entre o atributo: população
        if (populacao1 == populacao2)
        {
            printf("População: Empate!\n");
        }else
        {
            printf("População: Carta %d (%s) venceu!\n", 
                  (populacao1 > populacao2) ? 1 : 2,
                  (populacao1 > populacao2) ? nomeCidade1 : nomeCidade2);
        }
        
        
        somaAtributos1 = populacao1;
        somaAtributos2 = populacao2;

        break;
    case 2:
        printf ("O atributo 1 escolhido foi - Área.\n");
        printf ("%s: %.2f Km².\n", nomeCidade1, area1);
        printf ("%s: %.2f Km².\n", nomeCidade2, area2);

         //Comparação entre o atributo: Área
        if (area1 == area2)
        {
            printf("Área: Empate!\n");
        }else
        {
            printf("Área: Carta %d (%s) venceu!\n", 
                  (area1 > area2) ? 1 : 2,
                  (area1 > area2) ? nomeCidade1 : nomeCidade2);
        }

        somaAtributos1 = area1;
        somaAtributos2 = area2;

        break;
    case 3:
        printf ("O atributo 1 escolhido foi - PIB.\n");
        printf ("%s: %.2f bilhões de reais.\n", nomeCidade1, pib1);
        printf ("%s: %.2f bilhões de reais.\n", nomeCidade2, pib2);

        if (pib1 == pib2)
        {
            printf("PIB: Empate!\n");
        }else 
        {
            printf("PIB: Carta %d (%s) venceu!\n", 
                  (pib1 > pib2) ? 1 : 2,
                  (pib1 > pib2) ? nomeCidade1 : nomeCidade2);
        }

        somaAtributos1 = pib1;
        somaAtributos2 = pib2;

        break;
    case 4:
        printf ("O atributo 1 escolhido foi - Quantidade de Pontos Turísticos.\n");
        printf ("%s: %d.\n", nomeCidade1, quantPontosTuristicos1);
        printf ("%s: %d.\n", nomeCidade2, quantPontosTuristicos2);

        //Comparação entre o atributo: Quantidade de pontos turísticos
        if (quantPontosTuristicos1 == quantPontosTuristicos2)
        {
            printf("Quantidade de Pontos Turísticos: Empate!\n");
            
        }else 
        {
            printf("Quantidade de Pontos Turísticos: Carta %d (%s) venceu!\n", 
                  (quantPontosTuristicos1 > quantPontosTuristicos2) ? 1 : 2,
                  (quantPontosTuristicos1 > quantPontosTuristicos2) ? nomeCidade1 : nomeCidade2);
        }

        somaAtributos1 = quantPontosTuristicos1;
        somaAtributos2 = quantPontosTuristicos2;

        break;
    case 5:
        printf ("O atributo 1 escolhido foi - Densidade Populacional.\n");
        printf ("%s: %.2f hab/km².\n", nomeCidade1, densidadePopulacional1);
        printf ("%s: %.2f hab/km².\n", nomeCidade2, densidadePopulacional2);

         //Comparação entre o atributo: Densidade populacional
        if (densidadePopulacional1 == densidadePopulacional2)
        {
            printf("Densidade populacional: Empate!\n");
        }else 
        {
            printf("Densidade populacional: Carta %d (%s) venceu!\n", 
                  (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2,
                  (densidadePopulacional1 < densidadePopulacional2) ? nomeCidade1 : nomeCidade2);
        }

        somaAtributos1 = (1.00 / densidadePopulacional1);
        somaAtributos2 = (1.00 / densidadePopulacional2);

        break;
    case 6:
        printf ("O atributo 1 escolhido foi - PIB Per Capita.\n");
        printf ("%s: %.2f de reais.\n", nomeCidade1, pibPerCapita1);
        printf ("%s: %.2f de reais.\n", nomeCidade2, pibPerCapita2);

        //Comparação entre o atributo: Pip Per Capita
        if (pibPerCapita1 == pibPerCapita2)
        {
           printf("PIB Per Capita: Empate!\n");
        }else 
        {
            printf("PIB Per Capita: Carta %d (%s) venceu!\n", 
                  (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
                  (pibPerCapita1 > pibPerCapita2) ? nomeCidade1 : nomeCidade2);
        }

        somaAtributos1 = pibPerCapita1;
        somaAtributos2 = pibPerCapita2;

        break;
    case 7:
        printf ("O atributo 1 escolhido foi - Super Poder.\n");
        printf ("%s: %.2f.\n", nomeCidade1, superPoder1);
        printf ("%s: %.2f.\n", nomeCidade2, superPoder2);

         //Comparação entre o atributo: Super poder
        if (superPoder1 == superPoder2)
        {
            printf("Super Poder: Empate!\n");
        }else 
        {
            printf("Super Poder: Carta %d (%s) venceu!\n", 
                  (superPoder1 > superPoder2) ? 1 : 2,
                  (superPoder1 > superPoder2) ? nomeCidade1 : nomeCidade2);
        }

        somaAtributos1 = superPoder1;
        somaAtributos2 = superPoder2;

        break;
    default:
        printf("Opção inválida escolhida pelo jogador, o jogo está sendo encerrado...\n");
        return 1;
    }
    printf("\n");

    //Switch para demonstrar qual o segundo atributo escolhido individualmente e apresentado em tela a comparação de atributo e armazenamento da soma dos dois atributos
    if (escolhaJogador1 != escolhaJogador2){ 
        switch (escolhaJogador2)
        {
        case 1:
            printf ("O atributo 2 escolhido foi - População.\n");
            printf ("%s: %lu habitantes.\n", nomeCidade1, populacao1);
            printf ("%s: %lu habitantes.\n", nomeCidade2, populacao2);

            //Comparação entre o atributo: população
             if (populacao1 == populacao2)
            {
                printf("População: Empate!\n");
            }else
            {
                printf("População: Carta %d (%s) venceu!\n", 
                    (populacao1 > populacao2) ? 1 : 2,
                    (populacao1 > populacao2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += populacao1;
            somaAtributos2 += populacao2;

            break;
        case 2:
            printf ("O atributo 2 escolhido foi - Área.\n");
            printf ("%s: %.2f Km².\n", nomeCidade1, area1);
            printf ("%s: %.2f Km².\n", nomeCidade2, area2);

            //Comparação entre o atributo: Área
            if (area1 == area2)
            {
                printf("Área: Empate!\n");
            }else
            {
                printf("Área: Carta %d (%s) venceu!\n", 
                    (area1 > area2) ? 1 : 2,
                    (area1 > area2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += area1;
            somaAtributos2 += area2;       

            break;
        case 3:
            printf ("O atributo 2 escolhido foi - PIB.\n");
            printf ("%s: %.2f de reais.\n", nomeCidade1, pib1);
            printf ("%s: %.2f de reais.\n", nomeCidade2, pib2);

            if (pib1 == pib2)
            {
                printf("PIB: Empate!\n");
            }else 
            {
                printf("PIB: Carta %d (%s) venceu!\n", 
                    (pib1 > pib2) ? 1 : 2,
                    (pib1 > pib2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += pib1;
            somaAtributos2 += pib2;

            break;
        case 4:
            printf ("O atributo 2 escolhido foi - Quantidade de Pontos Turísticos.\n");
            printf ("%s: %d.\n", nomeCidade1, quantPontosTuristicos1);
            printf ("%s: %d.\n", nomeCidade2, quantPontosTuristicos2);

            if (quantPontosTuristicos1 == quantPontosTuristicos2)
            {
                printf("Quantidade de Pontos Turísticos: Empate!\n");
                
            }else 
            {
                printf("Quantidade de Pontos Turísticos: Carta %d (%s) venceu!\n", 
                    (quantPontosTuristicos1 > quantPontosTuristicos2) ? 1 : 2,
                    (quantPontosTuristicos1 > quantPontosTuristicos2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += quantPontosTuristicos1;
            somaAtributos2 += quantPontosTuristicos2;

            break;
        case 5:
            printf ("O atributo 2 escolhido foi - Densidade Populacional.\n");
            printf ("%s: %.2f hab/km².\n", nomeCidade1, densidadePopulacional1);
            printf ("%s: %.2f hab/km².\n", nomeCidade2, densidadePopulacional2);

            //Comparação entre o atributo: Densidade populacional
            if (densidadePopulacional1 == densidadePopulacional2)
            {
                printf("Densidade populacional: Empate!\n");
            }else 
            {
                printf("Densidade populacional: Carta %d (%s) venceu!\n", 
                    (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2,
                    (densidadePopulacional1 < densidadePopulacional2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += (1.00 / densidadePopulacional1);
            somaAtributos2 += (1.00 / densidadePopulacional2);

            break;
        case 6:
            printf ("O atributo 2 escolhido foi - PIB Per Capita.\n");
            printf ("%s: %.2f de reais.\n", nomeCidade1, pibPerCapita1);
            printf ("%s: %.2f de reais.\n", nomeCidade2, pibPerCapita2);

            //Comparação entre o atributo: Pip Per Capita
            if (pibPerCapita1 == pibPerCapita2)
            {
            printf("PIB Per Capita: Empate!\n");
            }else 
            {
                printf("PIB Per Capita: Carta %d (%s) venceu!\n", 
                    (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
                    (pibPerCapita1 > pibPerCapita2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += pibPerCapita1;
            somaAtributos2 += pibPerCapita2;

            break;
        case 7:
            printf ("O atributo 2 escolhido foi - Super Poder.\n");
            printf ("%s: %.2f.\n", nomeCidade1, superPoder1);
            printf ("%s: %.2f.\n", nomeCidade2, superPoder2);

            //Comparação entre o atributo: Super poder
            if (superPoder1 == superPoder2)
            {
                printf("Super Poder: Empate!\n");
            }else 
            {
                printf("Super Poder: Carta %d (%s) venceu!\n", 
                    (superPoder1 > superPoder2) ? 1 : 2,
                    (superPoder1 > superPoder2) ? nomeCidade1 : nomeCidade2);
            }

            somaAtributos1 += superPoder1;
            somaAtributos2 += superPoder2;

            break;
        default:
            printf("Opção inválida escolhida pelo jogador, o jogo está sendo encerrado...\n");
            return 1;
        }
        printf("\n");
    }else
    {
        printf("Atributo escolhido igual ao atributo 1 e deveria ser diferente!. Programa sendo encerrado...");
        return 1;
    }

    // Exibição do resultado da soma dos atributos para o jogador
    printf("*** Vencedor da soma dos atributos: ***\n");
    printf("Soma dos atributos da carta 1(%s): %.2f\n", nomeCidade1, somaAtributos1);
    printf("Soma dos atributos da carta 2(%s): %.2f\n", nomeCidade2, somaAtributos2);
    
    if (somaAtributos1 == somaAtributos2)
    {
        printf("Empate!\n");
    }else
    {
       printf("Carta %d (%s) venceu!\n",
             (somaAtributos1 > somaAtributos2) ? 1 : 2,
             (somaAtributos1 > somaAtributos2) ? nomeCidade1 : nomeCidade2);
    }
        
    printf("==================================================\n");
    printf("\nObrigado por jogar Super Trunfo - Cidades!\n");
    printf("==================================================\n");
    
    return 0;
}
