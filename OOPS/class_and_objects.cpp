#include <iostream>
#include <vector>

using namespace std;

class teamDetails
{
public:
    // data members (attributes)
    string teamName;            // name of the team
    int rating;                 // Rating of team(Value)
    vector<string> playerNames; // list of players of the team

    // Member function

    void displayteamDetails()
    {
        cout << "Team Name : " << teamName << endl;
        cout << "Rating of team : " << rating << endl;
        cout << "Players of team : ";
        for (string playerNames : playerNames)
        {
            cout << playerNames << " ";
        }
        cout << endl;
    }
};

int main()
{
    teamDetails teamOne;

    teamOne.teamName = "Manchester United";
    teamOne.rating = 9;
    teamOne.playerNames = {"Eric Cantona", ",", "Cristiano Ronaldo", ",", "Roy Keane", ",", "Paul Scholes", ",", "Ryan Giggs"};

    teamOne.displayteamDetails();

    teamDetails teamTwo;

    teamTwo.teamName = "Kolkata Knight Riders";
    teamTwo.rating = 8;
    teamTwo.playerNames = {"Gautam Gambhir", ",", "Sourav Ganguly", ",", "Sunil Narine", ",", "Andre Russel", ",", "Yusuf Pathan"};

    teamTwo.displayteamDetails();

    return 0;
}