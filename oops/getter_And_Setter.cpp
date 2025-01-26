//member function
// classes ke andhar hm function bhi banan sakte hai 
#include<iostream>
#include<cstring> // Required for strcpy
using namespace std;
class Player {
    private: // data memeber should be private and the function will be public
    int score;
    int health;
    public: 
// setter
    void setScore(int s){
        score=s;
    }
    void setHealth(int h){
        health=h;
    }
    void showHealth(){
        cout<<"Health is :"<<health<<endl;
    }

    // getter
    int getScore(){
        return score;
    }
    int getHealth(){
        return health;
    }
};
int main() {
    Player amit; 
    // amit.health = 90;  these is bad practice and may cause security issure
    // amit.score = 100; 

    amit.setScore(100);
    amit.setHealth(20);
    // printing
    cout << "Score is: " << amit.getScore() << endl;
    cout << "Health is: " << amit.getHealth() << endl;

    // using showHealth method
    amit.showHealth();
    return 0;
}


