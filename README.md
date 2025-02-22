# Numero-Secreto
Jogo simples do Número Secreto em C.

**Número Secreto:**
Definido como const int NUMERO_SECRETO = 42. Você pode mudar esse valor (entre 1 e 50, por exemplo).

**Variáveis:**
palpite: Armazena o número que o usuário digita.
tentativas: Conta quantas vezes o usuário tentou.
op: Controla o menu.

**Estrutura:**
Um menu simples com "Jogar" e "Sair" usando switch-case.
Dentro da opção "Jogar", um while continua pedindo palpites até o usuário acertar.

**Lógica do Jogo:**
Se o palpite for menor que o número secreto, diz "MAIOR".
Se for maior, diz "MENOR".
Se estiver fora do intervalo (1-50), avisa o usuário.
Quando acerta, exibe uma mensagem de parabéns com o número de tentativas.

**Como Testar**
Compilar:
text
Wrap
Copy
gcc numero-surpresa.c -o numero

**Executar:**
Windows: numero.exe
Linux/Mac: ./numero
Exemplo de uso:
text
Wrap
Copy

Espero que consiga executar, sinta-se livre para adicionar mais detalhes! 

Autor gg_Dev
