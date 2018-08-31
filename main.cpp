/*! \file
 * Description
 */
 
/* INCLUDES */
#include <string>
#include "game.hpp"
#include "player.hpp"

/* MACROS */

/*! \namespace std */
using namespace std;

/*!
 * \details Entry function to project.
 * \author  Sebastien Ivanez
 * \date    30/08/2018
 */
int main() 
{
	Player seb("Sebastien");
	Player alexis("Alexis");
	
	Game tavli(seb, alexis);
	tavli.start();
	return 0;
}
