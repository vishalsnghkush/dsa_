#include<iostream>
using namespace std;
// 

class Player{
    private:
    string name;
    int age;
    int height;
    // getter and setter 
    public:
    void setname(string name){
        this->name=name;
    }
    void setAge(int age){
        this->age=age;
    }
    void setHeight(int height){
        this->height=height;
    }
    // getter
    void getname(){
        cout<<name;
    }
    void getAge(){
        cout<<age;
    }
    void getHeight(){
        cout<<height;
    }
};
int main(){
    Player Vishal,Kushwaha;
    Vishal.setname("VISHAL");
    Kushwaha.setname("kUSHWAHA");
    Vishal.setAge(10);
    Kushwaha.setAge(11);
    return 0;
}
