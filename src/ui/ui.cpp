#ifndef UI_H_INCLUDE
#define UI_H_INCLUDE

#include <iostream>

// ! Funciones de mensajes para imprimir

void showHeaderMessage(){
    std::cout << "*********AHORCADO*********";
}
void showChooseDifficultyMessage(){
  showHeaderMessage();
    std::cout << "\n\n"
              << "¿Con qué dificultad quieres jugar?"
              << "\n\n"
              << "Dificultad Fácil (3 - 5 letras): 1"
              << "\n"
              << "Dificultad Normal (6 - 9 letras): 2"
              << "\n"
              << "Dificultad Difícil (más de 10 letras): 3"
              << "\n\n"
              << "Introduzca su respuesta: ";
}
void ShowInputMessage(const std::string wordOutput, std::string drawnDoll, const bool stateLetterInput, const std::string lettersInput){
    showHeaderMessage();
    std::cout << "\n\n"
              << "Adivina la palabra: "
              << wordOutput
              << "\n"
              << drawnDoll
              << "\n";
    if(stateLetterInput){
      std::cout << "Ya introdujiste esta letra"
                << "\n";
    }
    if(lettersInput != ""){
      std::cout << "Has introducido estas letras: "
                << "'" 
                << lettersInput 
                << "'"
                << "\n";
    }
    std::cout 
              << "Introduce una letra: ";
}
void ShowIsGameWonMessage(const std::string& wordGame, const std::string drawnDoll, const std::string lettersInput){
    showHeaderMessage();
    std::cout << "\n\n"
              << "¡Ganaste! La palabra es: "
              << wordGame
              << "\n"
              << drawnDoll
              << "\n"
              << "Has introducido estas letras: "
              << "'" 
              << lettersInput 
              << "'"
              << "\n"
              << "Felicitaciones"
              << "\n"
              << std::endl;
}
void ShowIsGameLostMessage(const std::string& wordGame, const std::string drawnDoll, const std::string lettersInput){
    showHeaderMessage();
    std::cout << "\n\n"
              << "Perdiste. La palabra es: "
              << wordGame
              << "\n"
              << drawnDoll
              << "\n"
              << "Has introducido estas letras: "
              << "'" 
              << lettersInput 
              << "'"
              << "\n"
              << "Suerte para la proxima :C"
              << "\n"
              << std::endl;
}
void ShowNewGameMessage(){
    std::cout << "¿Quieres jugar de nuevo?"
              << "\n\n"
              << "1: Si"
              << "\n"
              << "2: No"
              << "\n"
              << "Ingresa tu opción: ";
}
void ShowNoInputErrorMessage(){
    std::cout << "Error: !No ingresaste nada¡" << '\n' << std::endl;
}
void ShowErrorValidateNewGameMessage(){
    std::cout << "Error: Solo puede introducir las opciones (1: Sí) o (2: No), no puedes introducir caracteres alfabéticos, signos de puntuación o un número que no sea 1 o 2" << '\n' << std::endl;
}
void ShowErrorValidateDifficulty(){
    std::cout << "Error: Solo puede introducir las opciones (1: Fácil), (2: Normal) o (3: Difícil) no puedes introducir ni caracteres alfabéticos, signos de puntuación o un numero que no sea 1 o 2" << '\n' << std::endl;
}
void ShowErrorValidateInput(){
    std::cout << "Error: Solo puedes introducir una (1) letra, no puedes introducir números, signos de puntuación y no más de un carácter alfabético" << '\n' << std::endl;
}
void ShowFarewellMessage(){
    std::cout << '\n' << "Hasta la próxima";
}

#endif
