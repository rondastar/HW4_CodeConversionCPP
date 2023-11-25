#ifndef PLAYER_H
#define PLAYER_H

#include <iostream> 
using namespace std;

class Player {       // The class - Player
private:             // Access specifier - private
    // string m_name{};  // Attribute (string variable - player name)
    string m_name; // Attribute (string variable - player name)
    int m_number;  // Attribute (int variable - player number)

public:
    // Constructor
    Player(string, int ); // prototype, needs only return type, name and type of parameters

    // Setter
    void SetPlayer(string, int );

    // Getter
    string getName();
    int getNumber();
};

#endif
