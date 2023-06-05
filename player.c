#include <stdio.h>
#include "maze.h"

int jugadorPosX = 0;
int jugadorPosY = 0;
int contadorMovimientos = 0;

int verificarMovimientoValido(char direccion, int nuevaPosX, int nuevaPosY) {
    if (nuevaPosX < 0 || nuevaPosX >= FILAS || nuevaPosY < 0 || nuevaPosY >= COLUMNAS) {
        return 0;
    }

    if (laberinto[nuevaPosX][nuevaPosY] == 1) {
        return 0;
    }

    return 1;
}

void moverJugador(char direccion) {
    int nuevaPosX = jugadorPosX;
    int nuevaPosY = jugadorPosY;

    printf("ingrese su movimiento:");

    switch (direccion) {
        case 'W':
        case 'w':
            nuevaPosX--;
            break;
        case 'A':
        case 'a':
            nuevaPosY--;
            break;
        case 'S':
        case 's':
            nuevaPosX++;
            break;
        case 'D':
        case 'd':
            nuevaPosY++;
            break;
    }

    if (verificarMovimientoValido(direccion, nuevaPosX, nuevaPosY)) {
        jugadorPosX = nuevaPosX;
        jugadorPosY = nuevaPosY;
        contadorMovimientos++;
    }
}

int obtenerContadorMovimientos() {
    return contadorMovimientos;

}
