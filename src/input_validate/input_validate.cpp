#ifndef INPUT_VALIDATE_H_INCLUDE
#define INPUT_VALIDATE_H_INCLUDE

#include <iostream>
#include <regex>

#include "../ui/ui.cpp"
#include "../utils/utils.cpp"
#include "../config/constans.cpp"

// ! Funciones de entrada y validación de datos

char inputGame(const std::string& wordOutput, const std::string drawnDoll, const bool stateLetterInput, const std::string letterInput) {

  std::string temp;
  bool inputValid = true;

  while (inputValid) {

    ShowInputMessage(wordOutput, drawnDoll, stateLetterInput, letterInput);

    std::getline(std::cin, temp);

    if (temp.empty()) {

      clearScreen();
      ShowNoInputErrorMessage();
      continue;

    } else if (!(std::regex_match(temp, std::regex(REG_EX_WORD_INPUT)))){

      clearScreen();
      ShowErrorValidateInput();
      continue;

    } else  {
      inputValid = false;
    }
  }

  return tolower(temp[0]);
}


int inputDifficulty(){  

  bool validateDifficulty = true;
  std::string inputDifficulty = "";

  while (validateDifficulty) { 

    showChooseDifficultyMessage();

    std::getline(std::cin, inputDifficulty);

    if (inputDifficulty.empty()) {

      clearScreen();
      ShowNoInputErrorMessage();
      continue;

    }
    else if (!(std::regex_match(inputDifficulty, std::regex(REG_EX_DIFFICULTY)))){

      clearScreen();
      ShowErrorValidateDifficulty();
      continue;

    }
    else{
      validateDifficulty = false;
    }
  }
  
  return std::stoi(inputDifficulty);
  
}


bool inputControlNewGame(){

  std::string newGameValidate;

  int newGame = 2; // 2 caso por defecto (No quiere jugar más)
  int newGameAccepted = 1; // 1 caso idoneo (Quiere jugar de nuevo)
  
  bool validateNewGame = true;


  while (validateNewGame) {

    ShowNewGameMessage();

    std::getline(std::cin, newGameValidate);

    if (newGameValidate.empty()) {

      clearScreen();
      ShowNoInputErrorMessage();
      continue;

    }
    else if (!(std::regex_match(newGameValidate, std::regex(REG_EX_NEW_GAME)))){

      clearScreen();
      ShowErrorValidateNewGameMessage();
      continue;

    }
    else{
      validateNewGame = false;
      newGame = std::stoi(newGameValidate);
    }
  }

  return newGame == newGameAccepted;
}

#endif
