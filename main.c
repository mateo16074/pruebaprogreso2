#include <stdio.h>
#include "player.h"
#include "maze.h"


// Función para mostrar el menú y obtener la opción seleccionada
int mostrarMenu() {
    int opcion;
    printf("\n--- Menú ---\n");
    printf("1. Jugar\n");
    printf("2. Créditos\n");
    printf("3. Salir\n");
    printf("Ingrese una opción: ");
    scanf("%d", &opcion);
    return opcion;
}

// Función para jugar
void jugar() {
    laberinto;
    imprimirLaberinto;
    verificarMovimientoValido
    moverJugador;
    obtenerContadorMovimientos;
}

// Función para mostrar los créditos
void mostrarCreditos() {
    printf("\n--- Créditos ---\n");
    printf("Un juego realizado por : \n");
    printf("\n--- Mateo Vaca---\n");
    printf("A001084441\n");
}

int main() {
    int opcion;

    
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                jugar();
                break;
            case 2:
                mostrarCreditos();
                break;
            case 3:
                printf("\n¡Hasta luego!\n");
                break;
            default:
                printf("\nOpción inválida. Por favor, ingrese una opción válida.\n");
                break;
        }
    

    return 0;
}