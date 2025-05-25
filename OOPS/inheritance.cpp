#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class for all football teams
class FootballTeam
{
protected:
    string teamName;
    int numOfPlayers; // Number of players in the team
public:
    // Constructor to initialize team name and number of players
    FootballTeam(string name, int players) : teamName(name), numOfPlayers(players)
    {
        cout << "FootballTeam constructor called for " << teamName << endl;
    }

    // Virtual method for team tactics (to be overridden in derived classes)
    virtual void tactics() const
    {
        cout << "Generic tactics for " << teamName << endl;
    }

    // Virtual method to display team lineup
    virtual void lineup() const
    {
        cout << "Lineup for " << teamName << " with " << numOfPlayers << " players." << endl;
    }

    // Virtual destructor to ensure correct cleanup of derived class objects
    virtual ~FootballTeam()
    {
        cout << "FootballTeam destructor called for " << teamName << endl;
    }
};

// Derived class representing Manchester United
class ManchesterUnited : public FootballTeam
{
public:
    // Constructor initializes parent class with "Manchester United" and number of players
    ManchesterUnited(int players) : FootballTeam("Manchester United", players)
    {
        cout << "Manchester United constructor called" << endl;
    }

    // Overriding tactics to implement Manchester United's strategy
    void tactics() const override
    {
        cout << "Manchester United tactics: Fast counter-attacking football." << endl;
    }

    // Destructor with a message
    ~ManchesterUnited()
    {
        cout << "Manchester United destructor called" << endl;
    }
};

// Derived class for another football team (e.g., Arsenal), where tactics are fixed (final method)
class Arsenal : public FootballTeam
{
public:
    // Constructor initializes parent class with "Arsenal" and number of players
    Arsenal(int players) : FootballTeam("Arsenal", players)
    {
        cout << "Arsenal constructor called" << endl;
    }

    // Overriding tactics method for Arsenal (fixed, no further overrides allowed)
    void tactics() const override final
    {
        cout << "Arsenal tactics: Possession-based attacking football." << endl;
    }

    // Destructor with a message
    ~Arsenal()
    {
        cout << "Arsenal destructor called" << endl;
    }
};

// Example of a class that cannot override Arsenal's tactics method (commented out)
// class SuperTeam : public Arsenal {
//     public:
//         void tactics() const override {
//             cout << "Trying to override tactics of Arsenal!" << endl;  // Error: Cannot override final method
//         }
// };

int main()
{
    // Creating pointers to the base class (FootballTeam) that will refer to derived class objects
    FootballTeam *team1 = new ManchesterUnited(11); // 11 players in Manchester United
    FootballTeam *team2 = new Arsenal(11);          // 11 players in Arsenal

    // Calling overridden methods using base class pointers
    team1->tactics(); // Calls Manchester United's tactics
    team1->lineup();  // Displays lineup for Manchester United

    team2->tactics(); // Calls Arsenal's tactics
    team2->lineup();  // Displays lineup for Arsenal

    // Clean up dynamically allocated memory
    delete team1;
    delete team2;

    return 0;
}
