// type ; paratamized ,, default ,, copy constructor

// hidden function which intilizatie the memory 

#include<iostream>
#include<string>
using namespace std;

class Bike{
public:
    int tyreSize;
    int engineSize;
    // default constructor 
    // constructor have no name unlike function
    Bike(int tyreSize,int engineSize){
        this->engineSize=engineSize;
        this->tyreSize=tyreSize;
    }
};


int main(){
    // class is also similar to the function
    Bike tvs(14,150);  //  object cretion// constructor ko call jayega
    Bike Royal(20,200);  // jitne baar bhi class banega utni baar constructor ko call jayege
    Bike Honda(15,160);
    cout<<tvs.engineSize<<endl;
    cout<<Royal.tyreSize;
    return 0;
}