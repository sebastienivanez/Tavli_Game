/*! \file
 * Description
 */
 
/* INCLUDES */
#include <cstdlib> // To call atoi()/rand()/srand()
#include <iostream> // To call cout/cin
#include <string>
#include <time.h>
#include "player.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Constructor
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
Player::Player()
{
  time_t t;
  srand(time(&t));
  this->name = "toto";
  
  for (int i = 0; i < NB_DICE; i++) {
    this->dice[i] = 0;
  }

  for (int j = 0; j < NB_COINS; j++) {
    this->coins[j] = 0;
  }
}

/*!
 * \details Constructor
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
Player::Player(const string name)
{
  time_t t;
  srand(time(&t));
  this->name = name;
  
  for (int i = 0; i < NB_DICE; i++) {
    this->dice[i] = 0;
  }

  for (int j = 0; j < NB_COINS; j++) {
    this->coins[j] = 0;
  }
}

/*!
 * \details Get player's name
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
string Player::getName()
{
  return this->name;
}

/*!
 * \details Set player's name
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
void Player::setName(string name)
{
  this->name = name;
}


int Player::throwDice()
{
  this->dice[0] = (rand()%6) + 1;
  this->dice[1] = (rand()%6) + 1;

  cout << this->name << ": " << this->dice[0] << " " << this->dice[1] << endl;

  return (this->dice[0] + this->dice[1]);
}
