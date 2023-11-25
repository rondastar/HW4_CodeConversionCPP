#include "Player.h" // Player class header

// Player constructor
Player::Player(string name, int number)
{
  SetPlayer(name, number);
}

// Setter
void Player::SetPlayer(string name, int number)
{
  m_number = number;
  m_name = name;
}

// Getters
string Player::getName() {return m_name;}
int Player::getNumber() {return m_number;}

