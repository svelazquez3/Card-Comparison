#include <iostream>
#include <stdlib.h> // for rand, rand
#include <time.h> // for time
#include "Deck.h"

using namespace std; 

Deck::Deck(){
  srand(time(NULL)); // Creates random seed
}

int Deck::cardType(){ // Generates the type of card rank that will be generated.  
  string symbol[4] = {"Clubs", "Diamonds", "Hearts", "Spades"}; 
  int index;

  index = rand() % 4; 
  typeR = symbol[index]; 

  return index; 
}

int Deck::cardNumber(){
  string number[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};  

  int index;
  index = rand() % 13; 
  numberR = number[index]; 

  return index; 
}

void Deck::cardGenerated(int number){
  if(number == 0)
    cout << "First card created: " << numberR << " of " << typeR << endl; 
  else
    cout << "Second card created: " << numberR << " of " << typeR << endl; 
}

void Deck::createCards(){
  int max = 0; 

  while(max != 2)
  {
    if(max == 0) // First card creation
    {
      numberRank = this->cardNumber(); 
      typeRank = this->cardType(); 
      this->cardGenerated(max); 
    }
    else // Second card creation
    {
      numberRank2 = this->cardNumber(); 
      typeRank2 = this->cardType();
      this->cardGenerated(max); 
    }
    max++;
  }
  this->Comparison(); 
}

void Deck::Comparison(){ // Compares both cards, outputs highest result
  if (typeRank > typeRank2)
    cout << "\nANSWER: First card is greatest. \n"; 
  else if(typeRank < typeRank2)
    cout << "\nANSWER: Second card is greatest. \n";
  else if(typeRank == typeRank2)
  {
    if(numberRank > numberRank2)
      cout << "\nANSWER: First card is greatest. \n"; 
    else if(numberRank < numberRank2)
      cout << "\nANSWER: Second card is greatest. \n"; 
  }
}