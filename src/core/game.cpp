#ifndef GAME_H_INCLUDE
#define GAME_H_INCLUDE

#include <string>
#include <vector>

#include "../logic/logic.cpp"
#include "../input_validate/input_validate.cpp"
#include "../utils/utils.cpp"
#include "../config/constans.cpp"
#include "../ui/ui.cpp"



void playGame(){

    std::vector<std::string> wordArr = difficulty();
  
    std::string wordGame = wordArr[randomNumber(0, wordArr.size() - 1)];

    int indexDoolFigureArr = 0;
    std::string drawnDoll = DOLL_FIGURE_ARR[indexDoolFigureArr];

    std::string wordOutput(wordGame.length(), '_');

    std::unordered_set<char> storeChars = {};
    std::string lettersInput = "";

    bool stateLetterInput =  false;

    while (!(wordGame == wordOutput || indexDoolFigureArr == DOLL_FIGURE_ARR.size() - 1)) {

      clearScreen();

      char charInput = inputGame(wordOutput, drawnDoll, stateLetterInput, lettersInput);
      stateLetterInput = storeValidateChars(charInput, storeChars, lettersInput);

      if(stateLetterInput) {
        continue;
      }

      if (!compareLetters(wordGame, charInput, wordOutput)) {
        indexDoolFigureArr += 1;
        drawnDoll = DOLL_FIGURE_ARR[indexDoolFigureArr];
      }
    }

  clearScreen();

  wordOutput == wordGame
  ? ShowIsGameWonMessage(wordGame, drawnDoll, lettersInput) 
  : ShowIsGameLostMessage(wordGame, drawnDoll, lettersInput);

}

#endif
