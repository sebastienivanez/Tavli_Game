/*! \file
 * Description
 */
 
/* INCLUDES */
#include <iostream> // To call cout/cin
#include "game.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Constructor
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
Game::Game(Player player1, Player player2)
{
  this->player1.setName(player1.getName());
  this->player2.setName(player2.getName());
}

/*!
 * \details Defines who plays first
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
void Game::start()
{
  int player1_dice = 0;
  int player2_dice = 0;
  
  do {
    player1_dice = this->player1.throwDice();
    player2_dice = this->player2.throwDice();

    if (player1_dice < player2_dice) {
      cout << this->player2.getName() << " starts !" << endl;
    } else if (player1_dice > player2_dice) {
      cout << this->player1.getName() << " starts !" << endl;
    } else {
      cout << "Tie, throw again" << endl;
    }
  } while(player1_dice == player2_dice);
}
