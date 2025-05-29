#include <iostream>
#include <vector>

using namespace std;

class KKR
{
public:
    string teamName;
    int championshipsWon;
    vector<string> players;
    // Delegating constructor: This constructor takes only the team name as an argument
    // and delegates to the main constructor. It also provides default values for
    // the number of championships (0) and a list of players (Shubman Gill, Andre Russell,
    // Sunil Narine). This allows the creation of a KKR object with just the team name.
    KKR(string name) : KKR(name, 3, {"Gautam Gambhir", "Andre Russell", "Sunil Narine"}) {}

    // Main Constructor: This constructor is responsible for initializing the class
    // with specific values for teamName, championshipsWon, and players. It allows full
    // customization of the KKR object by passing all the necessary information.
    // The `this` pointer is used here to refer to the instance's variables and avoid ambiguity.
    KKR(string name, int championships, vector<string> playerList)
    {
        this->teamName = name;
        this->championshipsWon = championships;
        this->players = playerList;

        cout << "Main Constructor called!" << endl;
    }

    // Method to display KKR details: This method prints the details of the KKR team,
    // including its name, the number of championships it has won, and the list of players.
    // It uses a loop to iterate through the vector of players and print each player's name.
    void displayKKRDetails()
    {
        cout << "Team Name: " << teamName << endl;
        cout << "Championships Won: " << championshipsWon << endl;
        cout << "Players: ";
        // Looping through the list of players and displaying each player's name
        for (string player : players)
        {
            cout << player << " ";
        }
        cout << endl;
    }
};

int main()
{
    // Creating an object of KKR using the delegating constructor.
    // Here, the constructor only takes the team name ("Kolkata Knight Riders") and
    // delegates to the main constructor with default values for championships and players.
    KKR kkrTeam("Kolkata Knight Riders");

    kkrTeam.displayKKRDetails();

    return 0;
}
