🏆 Super Trunfo: A Batalha das Cidades!
Desafio Final: Comparação Avançada com Múltiplos Atributos em C
Bem-vindo ao repositório do Super Trunfo! Este projeto é a culminação de um desafio de programação, onde aprimoramos o clássico jogo de cartas para uma experiência de linha de comando mais sofisticada e dinâmica. Nele, você pode registrar duas cartas de cidades e, em seguida, travar uma batalha épica usando uma lógica de comparação de múltiplos atributos.

O objetivo do jogo é simples: criar duas cartas de cidades com seus respectivos dados e, em seguida, usar sua estratégia para escolher os atributos que levarão à vitória.

✨ Funcionalidades Principais
Este projeto foi construído para demonstrar o domínio de conceitos avançados em C, incluindo:

Menus Dinâmicos e Interativos: A escolha do primeiro atributo de comparação afeta as opções disponíveis para a segunda escolha, garantindo uma experiência de usuário inteligente.

Batalhas de Múltiplos Atributos: A vitória não se resume a um único ponto. O jogo compara as cartas com base em dois atributos diferentes, levando em conta regras específicas (como a densidade populacional, onde o menor valor vence).

Super Poder Secreto: Um atributo especial é calculado com uma fórmula complexa, combinando vários dados para criar um valor único que pode virar o jogo!

Pontuação Final Definidora: O vencedor final é determinado pela soma dos valores dos dois atributos escolhidos, adicionando uma camada extra de estratégia.

Validação de Entrada: O programa lida com entradas inválidas do usuário de forma robusta, exibindo mensagens de erro claras e evitando falhas.

🛠️ Como Compilar e Executar
Para compilar e executar este projeto, você precisará de um compilador C, como o GCC.

Clone este repositório (se estiver no GitHub) ou salve o código em um arquivo chamado supertrunfo.c.

Abra o terminal e navegue até a pasta onde o arquivo está salvo.

Compile o código com o seguinte comando:

$ gcc -o supertrunfo supertrunfo.c


Execute o programa:

$ ./supertrunfo


🎮 Exemplo de Uso
Ao executar o programa, você será guiado por um menu interativo. Primeiro, você registrará os dados das duas cartas:

===========================================
 Bem vindo ao jogo Super Trunfo - Estados! 
===========================================

Para começarmos, vamos realizar o cadastro das cartas que mostrarão os dados dos estados

Primeiramente, vamos realizar o cadastro da primeira carta.
Digite uma letra de A a H que representa um dos 8 estados: A
Escreva a letra do estado seguida de um número de 01 a 04 (Exemplo: A01, B03): A01
Digite o nome da cidade: São Paulo
Informe o número de habitantes da cidade: 12396372
...


Após cadastrar as duas cartas, o menu de atributos será exibido para que você possa escolher qual deles comparar. Observe como a segunda escolha de atributos é dinâmica, excluindo a opção já selecionada:

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


O jogo então exibirá os resultados da comparação, tanto individualmente quanto a soma total, revelando o vencedor!

💻 Tecnologias
Linguagem: C

Bibliotecas:

stdio.h

string.h

ctype.h

🤝 Contato e Colaboração
Se você tiver sugestões, quiser contribuir ou apenas entrar em contato, sinta-se à vontade! Você pode me encontrar em:

[Seu nome/alias]: [Seu link de contato, ex: e-mail, perfil do LinkedIn, etc.]

GitHub: [Link do seu perfil no GitHub]

🙏 Créditos
Este projeto foi desenvolvido como parte de um desafio de programação, com o objetivo de consolidar conceitos de lógica, estruturas de decisão e usabilidade em aplicações de linha de comando.