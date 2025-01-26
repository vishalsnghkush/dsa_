//  DATA ABSTRACTION
// three type of ACCESS  modifier..
// 1. Public
// 2. Private
// 3. Protected

// e.g -->>
#include<iostream>
#include<cstring> // Required for strcpy
using namespace std;
// here public private or protected can be used as per requiremnet
class Player {
public: /// after doing it public any one can access
    int score;
private:   /// after write private i can't access the health and name --    
    int health;
    char name[20];
};
// here the player is the way to encapsulate the score, health,and name..

int main() {
    Player amit; // here amit is the object  
    amit.health = 100;
    amit.score = 100;
    strcpy(amit.name, "Vishal"); // Correct way to assign string to character array

    cout << "Player Name: " << amit.name << endl;
    cout << "Score: " << amit.score << endl;
    cout << "Health: " << amit.health << endl;

    return 0;
}

// class is like a blue print ...like an structure...
