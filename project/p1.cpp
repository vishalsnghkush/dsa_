/*
You are tasked with implementing a simple number guessing game in c++ involving a
Guesser, three player and an Umpire . The game operates as follow->

Guesser -> This entity will guess a number x
Players -> Each of the three players will guess a number
Umpire  -> This entities will connect the guesser from Guesser and the players
            and detrime which players if any have guessed the same number as the Guesser.
*/


/*
Classes->player,umpire,guesser


main will do -> create umpire 
                cget the no frim guesser
                get the no from all three player
                print the result
                exit the game


*/
#include<bits/stdc++.h>
using namespace std;

class Guesser{
public:    
    int guessedNum;
    int takeGuesserInput(){
        int x;
        cout<<" Give the no for the guesser : "<<endl;
        cin>>x;
        guessedNum=x;
        return guessedNum;
    }
};


class Player{   
    public:
        int playerNum;
        int takePlayerInput(){
            int p;
            cin>>p;
            playerNum=p;
            return playerNum;
        }
    };

    
class Umpire{
public:
    int g;
    int p1num;
    int p2num;
    int p3num;

    void GetTheNumberFormGuesser(){
        Guesser g1;
        g=g1.takeGuesserInput();
        cout<<"No guessed by the guesser : "<<g<<endl;
    }

    void GetTheNumberFormPlayers(){
        Player p1;
        Player p2;
        Player p3;

        cout<<"Give the number for the player 1 :"<<endl;
        p1num=p1.takePlayerInput();
        cout<<"Give the number for the player 2 :"<<endl;
        p2num=p2.takePlayerInput();
        cout<<"Give the number for the player 3 :"<<endl;
        p3num=p3.takePlayerInput();

    }

    void printTheResult(){
        if(g==p1num){
            cout<<"The player 1 has won the game "<<endl;
        }
        else if(g==p2num){
            cout<<"The player 2 has won the game "<<endl;
        }
        else if(g==p3num){
            cout<<"The player 3 has won the game "<<endl;
        }
        else{
            cout<<"Neither of any won the game ! "<<endl;
        }
    }
   
};


int main(){
    cout<<" ----------Let's start the Game ----------"<<endl;
    
    // create umpire object
    
    Umpire u;
    u.GetTheNumberFormGuesser();

    u.GetTheNumberFormPlayers();
    
    u.printTheResult();
    cout<<" ---------- End Game ----------"<<endl;
    return 0;
}