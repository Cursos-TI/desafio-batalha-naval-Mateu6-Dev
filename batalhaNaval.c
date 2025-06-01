#include <stdio.h>

//Desafio Novato Batalha Naval

int main()
{   //Vetor e Matriz do tabuleiro criado
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }
    //Vetor da localização dos navios
    int navhoriz[3] = {3, 3, 3};
    int navavert[3] = {3, 3, 3};

    int linhaH = 2, colunah = 4;
    int linhaV = 5, colunaV = 6;
    int colocar = 1;
    //Loops para colocar o navio em seus lugares no tabuleiro
    //Esse e do navio na horizontal
    for(int i = 0;i < 3;i++){
        for(int j = 0; j < 1;j++){
            if(colocar){
                    tabuleiro[linhaH][colunah + i] = navhoriz[i];

            }
        }
    }
    //E este da da vertical
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 1;j++){
            if(colocar){
                   tabuleiro[linhaV + i][colunaV] = navavert[i];
            }
        }
    }

    //E esses sao os loops da forma do tabuleiro do jogo
    printf(" Tabuleiro da batalha naval \n");
    printf("   ");
    for(int j = 0;j < 10;j++){
        printf("%c ", linha[j]);
    }
    printf("\n");

    for(int i = 0;i < 10;i++){
        printf("%d  ", i);
        for(int j = 0; j < 10;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
