# 🏆 Super Trunfo: A Batalha das Cidades!

### Desafio Final: Comparação Avançada com Múltiplos Atributos em C

Bem-vindo ao repositório do Super Trunfo de Cidades! Este projeto é a culminação de um desafio de programação, onde aprimoramos o clássico jogo de cartas para uma experiência de linha de comando mais sofisticada e dinâmica. Nele, você pode registrar duas cartas de cidades e, em seguida, travar uma batalha épica usando uma lógica de comparação de múltiplos atributos.

O objetivo do jogo é simples: cadastrar os dados de duas cartas de cidades e usar sua estratégia para escolher os dois atributos que levarão sua carta à vitória!

## ✨ Funcionalidades Principais

Este projeto foi construído para demonstrar o domínio de conceitos fundamentais da linguagem C, aplicados a um projeto interativo:

* **Menus Dinâmicos e Interativos:** A escolha do primeiro atributo de comparação afeta as opções disponíveis para a segunda escolha, garantindo uma experiência de usuário inteligente e prevenindo a seleção do mesmo atributo duas vezes.

* **Batalhas de Múltiplos Atributos:** A vitória não se resume a um único ponto. O jogo compara as cartas com base em dois atributos diferentes, levando em conta regras específicas, como na **Densidade Populacional**, onde o menor valor é o vencedor.

* **Super Poder Secreto:** Um atributo especial é calculado com uma fórmula que combina população, área, PIB, pontos turísticos e densidade, criando um valor único que pode virar o jogo!

* **Pontuação Final Definidora:** O vencedor final é determinado pela **soma dos valores** dos dois atributos escolhidos, adicionando uma camada extra de estratégia à seleção.

* **Validação de Entrada:** O programa lida com entradas inválidas do usuário de forma robusta, exibindo mensagens de erro claras e encerrando a execução para evitar falhas ou comportamentos inesperados.

## 🛠️ Como Compilar e Executar

Para compilar e executar este projeto, você precisará de um compilador C, como o **GCC**.

1.  Salve o código-fonte em um arquivo chamado `super_trunfo.c`.
2.  Abra o terminal e navegue até a pasta onde o arquivo está salvo.
3.  Compile o código com o seguinte comando:
    ```bash
    gcc super_trunfo.c -o super_trunfo
    ```
4.  Execute o programa com o comando:
    ```bash
    ./super_trunfo
    ```

## 🎮 Exemplo de Uso

Ao executar o programa, você será guiado por um fluxo interativo. Primeiro, você registrará os dados das duas cartas:

```
===========================================
 Bem vindo ao jogo Super Trunfo - Cidades! 
===========================================

Para começarmos, vamos realizar o cadastro das cartas que mostrarão os dados das cidades

Primeiramente, vamos realizar o cadastro da primeira carta.
Digite uma letra de A a H que representa uma das 8 cidades: A
Escreva a letra do estado seguida de um número de 01 a 04 (Exemplo: A01, B03): A01
Digite o nome da cidade: Sao Paulo
Informe o número de habitantes da cidade: 12396372
...
```

Após cadastrar as duas cartas, o menu de atributos será exibido. Observe como a segunda escolha é dinâmica, excluindo a opção já selecionada:

```
*** Selecione o primeiro atributo a ser comparado informando uma das opções abaixo: ***
[1]. População
[2]. Área
[3]. PIB
[4]. Quantidade de Pontos Turísticos
[5]. Densidade Populacional
[6]. PIB Per Capita
[7]. Super Poder
Qual o primeiro atributo que você deseja comparar as cartas? 1

*** Selecione o segundo atributo a ser comparado informando uma das opções abaixo: ***
[2]. Área
[3]. PIB
[4]. Quantidade de Pontos Turísticos
[5]. Densidade Populacional
[6]. PIB Per Capita
[7]. Super Poder
Qual o segundo atributo que você deseja comparar as cartas? 3
```

O jogo então exibirá os resultados da comparação, tanto para cada atributo individualmente quanto a soma total, revelando o grande vencedor da rodada!

## 💻 Tecnologias e Bibliotecas

* **Linguagem:** C
* **Bibliotecas Padrão:**
    * `stdio.h` (para entrada e saída de dados)
    * `string.h` (para manipulação de strings)
    * `ctype.h` (para funções de caracteres, como `toupper`)

## 🤝 Contato e Colaboração

Se você tiver sugestões, quiser contribuir ou apenas entrar em contato, sinta-se à vontade!

* **Nome:** Lucas Ody
* **Email:** lucasody@gmail.com
* **LinkedIn:** https://www.linkedin.com/in/lucas-o-6a912086
* **GitHub:** https://github.com/lucasody96

## 🙏 Créditos

Este projeto foi desenvolvido como parte de um desafio de programação, com o objetivo de consolidar conceitos de lógica de programação, estruturas de decisão, manipulação de dados e usabilidade em aplicações de linha de comando na linguagem C.