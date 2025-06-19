#ifndef UTILS_U_INCLUDE
#define UTILS_U_INCLUDE

#include <iostream>
#include <random>

// ! Función para Limpiar y posicionar la pantalla de la terminal

void clearScreen() {
  std::cout << "\033[2J\033[H" << std::endl; // Secuencia ANSI
}

int randomNumber(const int rangeToStart, const int rangeToEnd){

    std::random_device rd;  // Obtiene semilla aleatorias del Sistema operativo, proporciona una mayor aleatoridad
    std::mt19937 gen(rd()); // Un generador pseudoaleatorio
    std::uniform_int_distribution <> distrib(rangeToStart, rangeToEnd); // Crea un rango y garantiza que todos los numero del rango tengan la misma probabilidad
    int numberGenerate = distrib(gen);

    return numberGenerate;
}

#endif
