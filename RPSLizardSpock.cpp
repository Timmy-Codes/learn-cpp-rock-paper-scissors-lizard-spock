/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)
*/

#include <iostream>
#include <stdlib.h>

int main() {
  
  srand (time(NULL));
  int computer = rand() % 5 + 1; //random number between 1-3 inclusive
  int user = 0;
  
  // prompt user for input
  std::cout << "====================\n";
  std::cout << "Rock Paper Scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
  std::cout << "4) 🖖\n";
  std::cout << "5) 🦎\n";

  std::cout <<  "Shoot! ";
  std::cin >> user;

  std::cout << "Computer chose: " << computer << std::endl;
  
  if (user == computer){
    std::cout << "It's a Tie!!" << std::endl;
  }
  else if (computer == user + 1 || computer == user+3 || computer == user-2 || computer == user/5){
    std::cout << "You Lose!" << std::endl;
  }
  else{
    std::cout << "You Win!" << std::endl;
  }
  return 0;
}
