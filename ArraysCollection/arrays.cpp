#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int player[6] = {1, 2, 3, 4, 5, 6};
    int ratings[6] = {83, 85, 89, 87, 78, 75};
    // cout << "Ratings of players : " << endl;
    for (i = 0; i < 6; i++)
    {
        // for (j = 0; j < i; j++)

        // cout << ratings[i] << endl; - isme ek rating ke baad agle line me rating aata hai
        // cout << ratings[i] << " ";
        cout << "Rating of player " << player[i] << " is " << ratings[i] << endl;
    }
    return 0;
}