#include "utils/utils.cpp"
#include "input_validate/input_validate.cpp"
#include "ui/ui.cpp"
#include "core/game.cpp"


int main() {

// ! Bucle principal del programa. Se repite mientras el jugador quiera jugar nuevamente.

  do { 

    clearScreen();

    playGame();

  } while (inputControlNewGame());
  
  ShowFarewellMessage();

  return 0;
}
