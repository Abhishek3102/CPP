#include <iostream>
#include <vector>

using namespace std;

// FootballTeam class
class FootballTeam
{
private:
    string teamName;        // Team name
    int numberOfPlayers;    // Number of players in the team
    vector<string> players; // List of player names

public:
    // Default constructor
    FootballTeam()
    {
        teamName = "Unknown Team";
        numberOfPlayers = 11;
        players = {"Player1", "Player2", "Player3", "Player4", "Player5",
                   "Player6", "Player7", "Player8", "Player9", "Player10", "Player11"};
    }

    // Parameterized constructor
    FootballTeam(string name, int numPlayers, vector<string> playerList)
    {
        teamName = name;
        numberOfPlayers = numPlayers;
        players = playerList;
    }

    // Getter for team name
    string getTeamName()
    {
        return teamName;
    }

    // Setter for team name
    void setTeamName(string name)
    {
        teamName = name;
    }

    // Getter for number of players
    int getNumberOfPlayers()
    {
        return numberOfPlayers;
    }

    // Setter for number of players
    void setNumberOfPlayers(int numPlayers)
    {
        numberOfPlayers = numPlayers;
    }

    // Getter for players list
    vector<string> getPlayers()
    {
        return players;
    }

    // Setter for players list
    void setPlayers(vector<string> playerList)
    {
        players = playerList;
    }

    // Method to display team details
    void displayTeamDetails()
    {
        cout << "Team Name: " << teamName << endl;
        cout << "Number of Players: " << numberOfPlayers << endl;
        cout << "Players: ";
        for (string player : players)
        {
            cout << player << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Creating a FootballTeam object using the default constructor
    FootballTeam team1;
    team1.setTeamName("Manchester United");
    team1.setNumberOfPlayers(11);
    team1.setPlayers({"De Gea", "Shaw", "Martinez", "Varane", "Dalot",
                      "Casemiro", "Bruno", "Rashford", "Fernandes", "Antony", "Weghorst"});

    // Display the details of the team
    team1.displayTeamDetails();

    return 0;
}
