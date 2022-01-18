#include <iostream> 
#include <string> 
#include <array> 
#include "Deck.h" 

using namespace std; 

int main(){
  Deck ofCards;
  cout << "This program compares two random generated cards and determines which one is the greatest. An instance is shown below: \n"; 
  ofCards.createCards();

  bool keepGoing; 
  keepGoing = true; 
  char userResponse; 

  while(keepGoing == true)
  {
    cout << "\nTo get another comparison, enter Y, else enter N: "; 
    cin >> userResponse; 
    if(userResponse == 'Y')
    {
      system("clear");
      cout << "New Comparison:\n ";
      ofCards.createCards(); 
      keepGoing = true; 
    }
    else
    {
      cout << "Goodbye."; 
      keepGoing = false;
    }
  }
  return 0; 
  }

  // Later create a program that compares user input card vs programmed generator car