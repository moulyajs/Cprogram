#include <stdio.h>
#include <stdlib.h>
char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice = 0, player = 0;

int check_for_win();
void display_board();
void mark_board(char mark);
int main()
{
    // char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    // int choice = 0, player = 0;

    // int check_for_win();
    // void display_board();
    // void mark_board(char mark);
    int game_status = 0;
    char mark = ' ';
    player = 1;
    do
    {

        display_board();
        player = (player % 2) ? 1 : 2;
        printf("player %d , enter a number ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        mark_board(mark);
        game_status = check_for_win();
        player++;

    } while (game_status == -1);
    if (game_status == 1)
        printf("==>\aPlayer %d win", --player);
    else
        printf("==>\a game draw");

    return 0;
}
// 1 for game is over with result
// -1 for game in progress
// 0 game is over and no result
int check_for_win()
{
    int return_value = 0;
    if (square[1] == square[2] && square[2] == square[3])
        return_value = 1;
    else if (square[4] == square[5] && square[5] == square[6])
        return_value = 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return_value = 1;
    else if (square[1] == square[5] && square[5] == square[9])
        return_value = 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return_value = 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return_value = 1;
    else if (square[1] == square[4] && square[4] == square[7])
        return_value = 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return_value = 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
        return_value = 0;
    else
        return_value = -1;
    return return_value;

    // function to draw board

    void display_board()
    {
        system("cls");

        printf("\n\n\tTIC TAC TOE\n\n");
        printf("player1 (X) -   player2 (O)\n\n");

        printf("   |   |   \n\n");
        printf(" %c | %c | %c \n", square[1], square[2], square[3]);
        printf("___|___|___\n");
        printf("   |   |   \n");
        printf(" %c | %c | %c \n", square[4], square[5], square[6]);
        printf("___|___|___\n");
        printf("   |   |   \n");
        printf(" %c | %c | %c \n", square[7], square[8], square[9]);
        printf("   |   |   \n\n");
    }
    void mark_board(char mark)
    {
        if (choice == 1 && square[1] == '1')
            square[1] = mark;
        else if (choice == 2 && square[2] == '2')
            square[2] = mark;
        else if (choice == 3 && square[3] == '3')
            square[3] = mark;
        else if (choice == 4 && square[4] == '4')
            square[4] = mark;
        else if (choice == 5 && square[5] == '5')
            square[5] = mark;
        else if (choice == 6 && square[6] == '6')
            square[6] = mark;
        else if (choice == 7 && square[7] == '7')
            square[7] = mark;
        else if (choice == 8 && square[8] == '8')
            square[8] = mark;
        else if (choice == 9 && square[9] == '9')
            square[9] = mark;
        else
        {
            printf("invalid move");
            player--;
            getchar();
        }
    }
}
