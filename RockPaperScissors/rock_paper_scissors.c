
#include "rock_paper_scissors.h"
#include <string.h>

const char* determineWinner(const char player1[], const char player2[])
{
    // Check whether either player's choice is invalid
    if ((strcmp(player1, "Rock") != 0 &&
        strcmp(player1, "Paper") != 0 &&
        strcmp(player1, "Scissors") != 0) ||

        (strcmp(player2, "Rock") != 0 &&
            strcmp(player2, "Paper") != 0 &&
            strcmp(player2, "Scissors") != 0))
    {
        return "Invalid";
    }

    // Check for a draw
    if (strcmp(player1, player2) == 0)
    {
        return "Draw";
    }

    // Rock beats Scissors
    if (strcmp(player1, "Rock") == 0 &&
        strcmp(player2, "Scissors") == 0)
    {
        return "Player1";
    }

    // Scissors beats Paper
    if (strcmp(player1, "Scissors") == 0 &&
        strcmp(player2, "Paper") == 0)
    {
        return "Player1";
    }

    // Paper beats Rock
    if (strcmp(player1, "Paper") == 0 &&
        strcmp(player2, "Rock") == 0)
    {
        return "Player1";
    }

    // If none of the above applies, Player 2 wins
    return "Player2";
}
