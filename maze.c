#include <stdio.h>
#include "player.h"


int laberinto(int filas, int columnas, int cuadrado[filas][columnas]) {

 int maze[5] [5] = {
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 0}

    };

}



void imprimirLaberinto(int laberinto[5][5], int filaJugador, int columnaJugador) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == filaJugador && j == columnaJugador) {
                printf("X ");
            } else {
                printf("%d ", laberinto[i][j]);
            }
        }
        printf("\n");
    }
}