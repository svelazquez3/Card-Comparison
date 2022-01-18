#include <iostream>
#include <string>

using namespace std; 
class Deck{
  public: 
    string typeR, numberR; // Place holders to store card type and its value

    Deck();
    int cardType(); // Gets random card type (Diamonds, Spades, Cloves, Hearts)
    int cardNumber(); // Gets random card number (from A to K)
    void cardGenerated(int num);  // Results from cardType(); and cardNumber(); 
    void createCards(); // Creates card one and two
    void Comparison(); // Compares both cards to one another and outputs greatest
    
  private:
    int typeRank, numberRank; // Card one
    int typeRank2, numberRank2; // Card two 
    // typeRank is the symbol rank of the card. If typeRank = 0, then the card is a card of clubs.
    // numberRank is the card number itself. if numberRank = 0, then the card is A 
    
}; 