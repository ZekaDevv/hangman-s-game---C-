#ifndef LOGIC_H_INCLUDE
#define LOGIC_H_INCLUDE


#include <string>
#include <unordered_set>
#include <vector>

#include "../ui/ui.cpp"
#include "../utils/utils.cpp"
#include "../input_validate/input_validate.cpp"
#include "../config/constans.cpp"

bool storeValidateChars(const char input, std::unordered_set<char> &storeChars, std::string &lettersInput) {

  if(storeChars.count(input)){
    return true;
  }else {
    storeChars.insert(input);

    if (!lettersInput.empty()) lettersInput += " - ";
    lettersInput += input;

    return false;
  }
}

std::vector<std::string> difficulty(){
  
  int difficultyAcceptedEasy = 1,                    
      difficultyAcceptedNormal = 2,
      difficultyAcceptedHard = 3;

  int difficulty = inputDifficulty();

  if(difficulty == difficultyAcceptedEasy){
    return WORDS_EASY;
  }else if (difficulty == difficultyAcceptedNormal){
    return WORDS_NORMAL;
  }else if(difficulty == difficultyAcceptedHard){
    return WORDS_HARD;
  }
  return WORDS_EASY;

} 

bool compareLetters(const std::string& wordGame, const char charInput, std::string &wordOutput){
  int count = 0;

  for (int i = 0; i < wordGame.length(); i++) {

    if (charInput == wordGame[i]) {
      wordOutput[i] = charInput;
      count += 1;
    }
  }
  return count > 0;
}

#endif
