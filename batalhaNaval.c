#include <stdio.h>
#include <stdlib.h>
#define n 10


int main(){

      char tabuleiro[n][n];
      char cabecalho[10] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J' };
      int coluna [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };



    printf(" #####   #####  #######  #####   #       #   #   #####           ###     #   #####  #      #   #####   #\n");
    printf(" #   #   #   #     #     #   #   #       #   #   #   #           #  #    #   #   #  #      #   #   #   #\n");
    printf(" #####   #####     #     #####   #       #####   #####   ****    #   #   #   #####   #    #    #####   #\n");
    printf(" #   #   #   #     #     #   #   #       #   #   #   #           #    #  #   #   #    #  #     #   #   #\n");
    printf(" #####   #   #     #     #   #   #####   #   #   #   #           #     ###   #   #     ##      #   #   #####\n\n\n");


    printf("                       #\n");
    printf("                      ###\n");
    printf("                     #####\n");
    printf("                    ########\n");
    printf("                   ##########\n");
    printf("                  #############\n");
    printf("                 ###############\n");
    printf(" ###########################################################################################################\n");
    printf("   #######################################################################################################\n");
    printf("    #####################################################################################################\n");
    printf("     ###################################################################################################\n");
    printf("      ################################################################################################\n");
    printf("       #############################################################################################\n\n\n");


      // TABULEIRO


      printf(" TABULEIRO\n\n");

      for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = '0';
        }
      }

      // CABECALHO DO TABULEIRO
      printf("    ");
      for(int i = 0; i < 10; i++){
        printf("%4c", cabecalho[i]);
      }

      printf("\n");

      //NAVIO NA VERTICAL

         tabuleiro[5][7] = '3';
         tabuleiro[6][7] = '3';
         tabuleiro[7][7] = '3';

      //NAVIO NA HORIZONTAL

         tabuleiro[4][2] = '3';
         tabuleiro[4][3] = '3';
         tabuleiro[4][4] = '3';

      //NAVIOS NA DIAGONAL 1

          tabuleiro[0][0] = '3';
          tabuleiro[1][1] = '3';
          tabuleiro[2][2] = '3';

      //NAVIO NA DIAGONAL 2

          tabuleiro[0][9] = '3';
          tabuleiro[1][9-1] = '3';
          tabuleiro[2][9-2] = '3';


      // COLUNA DO TABULEIRO

      for(int i = 0; i < 10; i++){
        printf("%4d", coluna[i]);
            for(int j = 0; j < 10; j++){
            printf("%4c", tabuleiro[i][j]);
        }
        printf("\n");
      }


    return 0;
}
