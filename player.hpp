/*! \file
 * Description
 */
#ifndef _PLAYER_H
#define _PLAYER_H

/* INCLUDES */
#include <string>

/* MACROS */
#define NB_DICE 2
#define NB_COINS 10

/*!
 * \details class Player
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
class Player {
    std::string name;
    int dice[NB_DICE]; // Dice is a value between 1 and 6
    int coins[NB_COINS]; // Coins takes values between init position and final position

  public:
    // Constructors
    Player();
    Player(const std::string name);

    // Set/Get methods
    std::string getName();
    void setName(std::string name);
    void getCoin();
    void setCoin();

    // Other methods
    int throwDice();
};
#endif
