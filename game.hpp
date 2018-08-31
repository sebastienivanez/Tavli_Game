/*! \file
 * Description
 */
#ifndef _GAME_H
#define _GAME_H

/* INCLUDES */
#include "player.hpp"

/* MACROS */

/*!
 * \details class Player
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
class Game {
    Player player1;
    Player player2;

  public:
    // Constructors
    Game(Player player1, Player player2);

    // Set/Get methods

    // Other methods
    void start();
    void playDice();
    void playMove();
};
#endif
