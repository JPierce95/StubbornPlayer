#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  int timesToPlay,wins;
  char input;
  SecretDoor game;
  
  cout << "How many times would you like to play? ";
  cin >> timesToPlay;
  cout << endl;
  
  for(int i = 0; i < timesToPlay; i++){
    game.newGame();
    cout << "Which door would you liek to choose? (A/B/C)";
    do{
      cin >> input;
      if(!(input == 'a' || input == 'b' || input == 'c' || input == 'A' || input == 'B' || input == 'C')){
       cout << "You didn't enter a valid response. Please choose from (A/B/C)"; 
      }
    }
    while(!(input == 'a' || input == 'b' || input == 'c' || input == 'A' || input == 'B' || input == 'C'));
    game.guessDoorC();
    cout << "The prize is not behind door C" << endl;
    
    cout << "Which door would you like to choose next? (A/B/C)" <<endl;
    
    do{
      cin >> input;
      if(!(input == 'a' || input == 'b' || input == 'c' || input == 'A' || input == 'B' || input == 'C')){
       cout << "You didn't enter a valid response. Please choose from (A/B/C)"; 
      }
    }
    while(!(input == 'a' || input == 'b' || input == 'c' || input == 'A' || input == 'B' || input == 'C'));
    
    game.guessDoorC();
    
    if(game.isWinner()){
     wins++; 
    }
    
    cout << endl;
    cout << endl; //This is here so that there is a visible barrier between the two games.
    cout << endl;
  }
  
  cout << "You won " << wins << " games!" << endl;
    
  return 0;
}
