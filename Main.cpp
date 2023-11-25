#include <iostream> 
#include <string>
using namespace std;
#include "Player.h" // Player class header

int main() {
  Player player1 = Player("Frankie Arancelli", 8); // Create an object of Player

  // Print attribute values
  cout << player1.getName() << "\n";
  cout << player1.getNumber();
  return 0;
}

