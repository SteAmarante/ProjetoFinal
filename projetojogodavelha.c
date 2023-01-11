#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int jn = 1;
  int linha, coluna, l, c, jj, check = 0, cont = 0;
  while (jn == 1) {
    // declaração de matriz, separar por linha. A primeira chave é para explicar
    // o que vai dentro da matriz, depois cada chave dentro da matriz separa as
    // linhas
    char tab[3][3] = {
                        {' ', ' ', ' '}, 
                        {' ', ' ', ' '}, 
                        {' ', ' ', ' '}
                    };
    // criação do tabuleiro

    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    printf("# Menu Inicial #\n");
    printf("1 - Jogador vs Jogador\n");
    printf("2 - Jogador x CPU\n");
    scanf("%d", &jj);
  
    printf("\n");
    printf("          Coluna 0   Coluna 1   Coluna 2\n");
    printf("Linha 0      %c     |   %c      |   %c\n", tab[0][0], tab[0][1],
           tab[0][2]);
    printf("          ---------+----------+---------\n");
    printf("Linha 1      %c     |   %c      |   %c\n", tab[1][0], tab[1][1],
           tab[1][2]);
    printf("          ---------+----------+---------\n");
    printf("Linha 2      %c     |   %c      |   %c\n", tab[2][0], tab[2][1],
           tab[2][2]);
    printf("\n");

    // looping INICIAR O JOGO
    while (1) {
      while (check != 1) {
        printf("\nEntre com as coordenadas da sua jogada L e C: \n");
        scanf("%d%d", &linha, &coluna);
        if (tab[linha][coluna] == ' ') {
          tab[linha][coluna] = 'X';
          check = 1;
        } 
          else {
                printf("\nVocê já jogou aqui! Escolha outra coordenada!\n");
              }
      }

      printf("\n");
      printf("          Coluna 0   Coluna 1   Coluna 2\n");
      printf("Linha 0      %c     |   %c      |   %c\n", tab[0][0], tab[0][1],
             tab[0][2]);
      printf("          ---------+----------+---------\n");
      printf("Linha 1      %c     |   %c      |   %c\n", tab[1][0], tab[1][1],
             tab[1][2]);
      printf("          ---------+----------+---------\n");
      printf("Linha 2      %c     |   %c      |   %c\n", tab[2][0], tab[2][1],
             tab[2][2]);
      printf("\n");

      if ((tab[0][0] == 'X' && tab[0][1] == 'X' && tab[0][2] == 'X') ||
          (tab[1][0] == 'X' && tab[1][1] == 'X' && tab[1][2] == 'X') ||
          (tab[2][0] == 'X' && tab[2][1] == 'X' && tab[2][2] == 'X') ||
          (tab[0][0] == 'X' && tab[1][0] == 'X' && tab[2][0] == 'X') ||
          (tab[0][1] == 'X' && tab[1][1] == 'X' && tab[2][1] == 'X') ||
          (tab[0][2] == 'X' && tab[1][2] == 'X' && tab[2][2] == 'X') ||
          (tab[0][0] == 'X' && tab[1][1] == 'X' && tab[2][2] == 'X') ||
          (tab[0][2] == 'X' && tab[1][1] == 'X' && tab[2][0] == 'X')) {
        printf("\nPlayer 1 - Vitória do jogador X!\n");
        break;
      }

      check = 0;
      cont++;
      if (cont == 9) {
        printf("\nIh!Deu velha!\n");
        break;
      }
      if (jj == 1) { // IF DE ESCOLHA DO MENU PARA PVP

        while (check != 1) {
          printf("\nEntre com as coordenadas da sua jogada L e C:\n");
          scanf("%d%d", &linha, &coluna);
          if (tab[linha][coluna] == ' ') {
            tab[linha][coluna] = 'O';
            check = 1;
          } 
            else {
                printf("\nVocê já jogou aqui! Escolha outra coordenada!\n");
                }
        }

        printf("\n");
        printf("          Coluna 0   Coluna 1   Coluna 2\n");
        printf("Linha 0      %c     |   %c      |   %c\n", tab[0][0], tab[0][1],
               tab[0][2]);
        printf("          ---------+----------+---------\n");
        printf("Linha 1      %c     |   %c      |   %c\n", tab[1][0], tab[1][1],
               tab[1][2]);
        printf("          ---------+----------+---------\n");
        printf("Linha 2      %c     |   %c      |   %c\n", tab[2][0], tab[2][1],
               tab[2][2]);
        printf("\n");

        if ((tab[0][0] == 'O' && tab[0][1] == 'O' && tab[0][2] == 'O') ||
            (tab[1][0] == 'O' && tab[1][1] == 'O' && tab[1][2] == 'O') ||
            (tab[2][0] == 'O' && tab[2][1] == 'O' && tab[2][2] == 'O') ||
            (tab[0][0] == 'O' && tab[1][0] == 'O' && tab[2][0] == 'O') ||
            (tab[0][1] == 'O' && tab[1][1] == 'O' && tab[2][1] == 'O') ||
            (tab[0][2] == 'O' && tab[1][2] == 'O' && tab[2][2] == 'O') ||
            (tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O') ||
            (tab[0][2] == 'O' && tab[1][1] == 'O' && tab[2][0] == 'O')) {
          printf("\nPlayer 2 - Vitória do jogador O!\n");
          break;
        }

        check = 0;
        cont++;
      }else if (jj == 2) { // IF DE ESCOLHA DO MENU PARA SER CPU

      printf("\nCPU: Minha vez! \n");
      while (check != 1) {
        l = rand() % 3;
        c = rand() % 3;
        if (tab[l][c] == ' ') {
          tab[l][c] = 'O';
          check = 1;
        }
      }
    printf("\n");
    printf("          Coluna 0   Coluna 1   Coluna 2\n");
    printf("Linha 0      %c     |   %c      |   %c\n", tab[0][0], tab[0][1],
           tab[0][2]);
    printf("          ---------+----------+---------\n");
    printf("Linha 1      %c     |   %c      |   %c\n", tab[1][0], tab[1][1],
           tab[1][2]);
    printf("          ---------+----------+---------\n");
    printf("Linha 2      %c     |   %c      |   %c\n", tab[2][0], tab[2][1],
           tab[2][2]);
    printf("\n");
    printf("\nCPU: Pronto, já joguei! =P \n");

    if ((tab[0][0] == 'O' && tab[0][1] == 'O' && tab[0][2] == 'O') ||
        (tab[1][0] == 'O' && tab[1][1] == 'O' && tab[1][2] == 'O') ||
        (tab[2][0] == 'O' && tab[2][1] == 'O' && tab[2][2] == 'O') ||
        (tab[0][0] == 'O' && tab[1][0] == 'O' && tab[2][0] == 'O') ||
        (tab[0][1] == 'O' && tab[1][1] == 'O' && tab[2][1] == 'O') ||
        (tab[0][2] == 'O' && tab[1][2] == 'O' && tab[2][2] == 'O') ||
        (tab[0][0] == 'O' && tab[1][1] == 'O' && tab[2][2] == 'O') ||
        (tab[0][2] == 'O' && tab[1][1] == 'O' && tab[2][0] == 'O')) {
      printf("\nCPU: Vitória do jogador O!\n");
      break;
    }
      check = 0;
      cont++;
      }//encerramento jj == 2   
    }//encerramento while(1)
    printf("\nVocê deseja jogar novamente? 1-SIM ou 2-NÃO\n");
    scanf("%d", &jn);
    if(jn == 2)printf("Agradecemos a preferência! Volte Sempre!");
    cont = 0; //limpar o contator cont
    check = 0;
  } // fechamento do while de jn
  return 0;
}//encerramento main