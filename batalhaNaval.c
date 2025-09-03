#include <stdio.h>
#include <stdlib.h>

#define n 10

// ---------- TABULEIRO ----------

void imprimeTabuleiro(int tabuleiro[n][n]){
 for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        printf("%4d", tabuleiro[i][j]);
    }
    printf("\n");
 }
}

// ---------- TRIANGULO ----------

void triangulo(){
   int tabuleiro[n][n] = {0};
   int altura = 3;

   for(int i = 0; i < altura; i++){
     int inicio = (n - (2 * i + 1)) / 2;
     for(int j = 0; j < 2 * i + 1; j++){
        tabuleiro[i][inicio + j] = 3;
     }
   }

   printf("\n\n===  habilidade Triangulo === \n\n");
   imprimeTabuleiro(tabuleiro);
   printf("\n");
}

// ---------- OCTETO (LOSANGO) ----------

void octeto(){
   int tabuleiro[n][n] = {0};
   int altura =  3;
   int centro = n / 2;
   // ---------- Parte de cima) ----------
   for(int i = 0; i < altura; i++){
     int inicio = centro - i;
     int fim = centro + i;
     for(int j = inicio; j <= fim; j++){
        tabuleiro[i][j] = 3;
     }
   }
   // ---------- Parte de baixo (Simétrica) ----------
   for(int i = altura; i < 2 * altura; i++){
    int desloca = i - altura + 1;
    int inicio = centro - (altura - 1 - desloca);
    int fim = centro + (altura -1 - desloca);
    for(int j = inicio; j <= fim; j++){
        tabuleiro[i][j] = 3;
     }
   }
   printf("\n\n===  habilidade Octeto === \n\n");
   imprimeTabuleiro(tabuleiro);
   printf("\n");
}

// ---------- CRUZ ----------

void cruz(){
   int tabuleiro[n][n] = {0};
   int centro = n / 2;

   // Coluna
   for(int i = 0; i < n; i++){
      tabuleiro[i][centro] = 1;
   }
   //Linha horizontal
   for(int j = centro - 3; j <= centro + 3; j++){
      tabuleiro[centro][j] = 1;
   }
   printf("\n\n===  habilidade Cruz === \n\n");
   imprimeTabuleiro(tabuleiro);
   printf("\n");
}


int main()
{

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


      // TABULEIRO DOS NAVIOS


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
      printf("      ---------------------------------------\n");



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


    triangulo();
    octeto();
    cruz();

    return 0;
}
