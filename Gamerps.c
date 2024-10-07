#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char random_move();
void get_winner(char x, char y, const char *player1_name, const char *player2_name);

int main()
{
    srand(time(0));
    
    //Move explanation to user
    printf("Moves are: \n'R' for rock \n'P' for Paper \n'S' for Scissor \n");

    // Game mode selection
    char choice;
    printf("Choose mode: \n1.vs Computer \n2.vs Player  \n");
    choice = getchar();
    getchar();

    // vs Computer
    if (choice == '1')
    {
        // Taking input from player1
        char player1;
        printf("Enter your move: ");
        player1 = getchar();
        getchar();

        // Input condition
        if (player1 != 'P' && player1 != 'R' && player1 != 'S')
        {
            printf("Invalid move \n");
            return 2;
        }

        // Taking random move from computer
        char computer = random_move();
        printf("Computer move is: %c \n", computer);

        // Evaluating and printing winner
        get_winner(player1, computer, "You", "Computer");
    }

    // vs Player
    else if (choice == '2')
    {
        // Taking input from player1
        char player1;
        printf("Player1 move: ");
        player1 = getchar();
        getchar();

        //Input condition
        if (player1 != 'P' && player1 != 'R' && player1 != 'S')
        {
            printf("Invalid move \n");
            return 3;
        }

        // Taking input from player2
        char player2;
        printf("Player2 move: ");
        player2 = getchar();
        getchar();

        // Input condition
        if (player2 != 'P' && player2 != 'R' && player2 != 'S')
        {
            printf("Invalid move \n");
            return 4;
        }

        // Evaluating and printing winner
        get_winner(player1, player2, "Player 1", "Player 2");
    }
    else
    {
        printf("Try again!");
        return 1;
    }

    return 0;
}

// Function to pick random of 3(R,P & S)
char random_move()
{
    int r = rand() % 3;
    if (r == 0)
    {
        return 'R';
    }
    else if (r == 1)
    {
        return 'P';
    }
    else
    {
        return 'S';
    }
}

// Funcction to get winner
void get_winner(char x, char y, const char *player1_name, const char *player2_name)
{
    // First case(player1 picks S)
    if (x == 'S' && y == 'R')
    {
        printf("%s wins!", player2_name);
    }
    else if (x == 'S' && y == 'S')
    {
        printf("Tie");
    }
    else if (x == 'S' && y == 'P')
    {
        printf("%s wins!", player1_name);
    }

    // Second case(player1 picks P)
    else if (x == 'P' && y == 'S')
    {
        printf("%s wins!", player2_name);
    }
    else if (x == 'P' && y == 'P')
    {
        printf("Tie");
    }
    else if (x == 'P' && y == 'R')
    {
        printf("%s wins!", player2_name);
    }

    // Tird case(player1 picks R)
    else if (x == 'R' && y == 'P')
    {
        printf("%s wins!", player2_name);
    }
    else if (x == 'R' && y == 'R')
    {
        printf("Tie");
    }
    else if (x == 'R' && y == 'S')
    {
        printf("%s wins!", player1_name);
    }
}
