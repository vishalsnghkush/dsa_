//member function
// classes ke andhar hm function bhi banan sakte hai 
#include<iostream>
#include<cstring> // Required for strcpy
using namespace std;
class Player {
public: 
    int score;
    int health;
    char name[20];

    // making of member function
    void showHealth(){
        cout<<"Health is :"<<health;
    }
};
int main() {
    Player amit; // here amit is the object  
    amit.health = 90;
    amit.score = 100;
    strcpy(amit.name, "Vishal"); // Correct way to assign string to character array

    cout << "Player Name: " << amit.name << endl;
    cout << "Score: " << amit.score << endl;
    cout << "Health: " << amit.health << endl;
    amit.showHealth();

    return 0;
}

// class is like a blue print ...like an structure...
