#include <iostream>
using namespace std;

int main()
{
    int valuesOfPlayers[4][6] = {
        {13, 19, 26, 28, 34, 39},
        {17, 22, 24, 31, 37, 28},
        {16, 14, 29, 38, 44, 38},
        {12, 10, 19, 32, 41, 36},
    };

    for (int i = 0; i < 4; i++)
    {
        cout << "\n Accessing values of player " << i + 1 << " :\n ";
        for (int j = 0; j < 6; j++)
        {
            cout << valuesOfPlayers[i][j] << " ";
        }
    }

    return 0;
}