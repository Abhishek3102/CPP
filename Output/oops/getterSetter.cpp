/*

Team Name: Manchester United
Number of Players: 11
Players: De Gea Shaw Martinez Varane Dalot Casemiro Bruno Rashford Fernandes Antony Weghorst

---------------------------------------------------------------------------------------------------------

Explanation :

Constructors:
The default constructor initializes the teamName, numberOfPlayers, and players with default values.
The parameterized constructor allows initialization with custom values for the team name, number of players, and a list of players.

Getters and Setters:
Getters (getTeamName(), getNumberOfPlayers(), etc.) allow access to private members of the class.
Setters (setTeamName(), setNumberOfPlayers(), etc.) allow modification of private members.

Vector for Player List:
vector<string> players is used to store the list of players in the team.
You can easily modify the list of players using setPlayers() and retrieve it using getPlayers().

Method to Display Team Details:
The displayTeamDetails() method prints out the team name, number of players, and the list of players.

Use of for Loop:
In displayTeamDetails(), we use a range-based for loop to iterate through the players vector and print each player.

Encapsulation:
The teamName, numberOfPlayers, and players are private members of the class, and we use getters and setters to access and modify these members. This ensures that these values can only be changed in controlled ways.

Dynamic Initialization of Player List:
The list of players is passed as a vector<string> to the constructor. You can modify the player list based on the team’s actual players.

*/