#Secret-Number

A simple Secret Number game in C.

Secret Number:

Defined as const int NUMERO_SECRETO = 42. You can change this value (e.g., between 1 and 50).

Variables:

palpite: Stores the number entered by the user.
tentativas: Counts how many times the user has tried.
op: Controls the menu.
Structure:

A simple menu with "Play" and "Exit" options using switch-case.

Inside the "Play" option, a while loop keeps asking for guesses until the user gets it right.

Game Logic:

If the guess is less than the secret number, it says "HIGHER".
If it’s greater, it says "LOWER".
If it’s outside the range (1-50), it warns the user.
When the user guesses correctly, it displays a congratulatory message with the number of attempts.
How to Test

Compile:

text
Wrap
Copy
gcc numero-surpresa.c -o numero
Run:

Windows: numero.exe
Linux/Mac: ./numero
Example Usage:

text
Wrap
Copy

Feel free to update or change anything!

Author: gg_Dev

--------------------------------------------------------------------------------------------------------------------
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
