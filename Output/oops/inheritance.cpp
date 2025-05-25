/*

FootballTeam constructor called for Manchester United
Manchester United constructor called
FootballTeam constructor called for Arsenal
Arsenal constructor called
Manchester United tactics: Fast counter-attacking football.
Lineup for Manchester United with 11 players.
Arsenal tactics: Possession-based attacking football.
Lineup for Arsenal with 11 players.
Manchester United destructor called
FootballTeam destructor called for Manchester United
Arsenal destructor called
FootballTeam destructor called for Arsenal

--------------------------------------------------------------------

Explanation :

Inheritance:
The ManchesterUnited and Arsenal classes inherit from the base class FootballTeam. This allows them to share common functionality (such as the teamName and numOfPlayers attributes) but also define their specific behaviors (e.g., tactics()).

Constructor Initialization:
When a derived class object is created, it calls the base class constructor to initialize the inherited members. In the ManchesterUnited and Arsenal constructors, we use the member initializer list (: FootballTeam("Team Name", numOfPlayers)) to initialize the base class with appropriate values.

Virtual Methods (Polymorphism):
Methods like tactics() and lineup() are declared virtual in the base class. This allows them to be overridden in derived classes, providing specific implementations for each team. Using virtual ensures that the correct method is called even when using pointers or references to the base class (FootballTeam).

Override and final:
The override keyword is used to indicate that a method in a derived class is overriding a virtual method in the base class. This helps catch errors if the base class method is changed (e.g., signature change).

The final keyword is used in the Arsenal::tactics() method to indicate that this method cannot be overridden by further derived classes. In this case, the SuperTeam class would not be able to override tactics() (as shown in the commented-out code).

Dynamic Memory Allocation and Deallocation:
The new keyword is used to allocate memory dynamically for the team objects (team1 and team2). The delete keyword is used to deallocate this memory, ensuring there are no memory leaks.

Virtual Destructor:
The virtual keyword is used for destructors in the base class to ensure that the destructor of the derived class is called when an object is deleted through a base class pointer. This prevents memory leaks when objects are deleted.

Pointer to Base Class:
Both team1 and team2 are pointers to FootballTeam, but they point to objects of the derived classes (ManchesterUnited and Arsenal). This demonstrates polymorphism, where the actual method called (such as tactics()) depends on the object type, not the pointer type.

*/
