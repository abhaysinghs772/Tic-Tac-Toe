#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

char current_Marker;


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
    int row = slot/3 ;
    int col = (slot % 3) - 1;
    if (slot % 3 == 0)
    {
        row = row - 1;
        col = 2;
    }
    // else
    // {
    //     col = (slot % 3) - 1;
    // }   

    cout << row << ',' << col;
}


int main()
{
    // draw_Board();
    place_Marker(9);
    return 0;
}

// 12:28

// testing