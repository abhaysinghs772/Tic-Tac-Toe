#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char current_Marker;
int current_Player;

void draw_Board()
{
    // cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    // cout << "-------\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << " " << board[i][j] << " | ";
        }
        cout << endl
             << "--------------\n"
             << endl;
    }
}

void place_Marker(int slot)
{
    int row = slot / 3;
    int col = (slot % 3) - 1; // for multiples of 3 i.e; 3,,6,9
    if (slot % 3 == 0)
    {
        row = row - 1;
        col = 2;
    }

    board[row][col] = current_Marker;
}

int winner()
{
    for (int i = 0; i < 3; i++)
    {
        // rows
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return current_Player;

        // colomns
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return current_Player;
    }

    // diagonal
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return current_Player;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return current_Player;

    return 0;
}

void game()
{
    cout << "Player one, choose your marker : ";
    char marker_P1;
    cin >> marker_P1;

    current_Player = 1;
    current_Marker = marker_P1;

    draw_Board();
    for (int i = 0; i < 9; i++)
    {
        cout << "It's player " << current_Player << "'s turn. Enter your slot : ";
        int slot;
        cin >> slot;
        place_Marker(slot);
        draw_Board();
    }
    
}


int main()
{
    game();
    return 0;
}

// 22