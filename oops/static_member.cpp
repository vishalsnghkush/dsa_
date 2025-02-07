// static keyword is used with a variable to make the memory of the variable of the static 
// once a static variable is declared its memeory can't be changed
// same for all the function
// :: scope resoluter
#include<iostream>
using namespace std;
class bike{
    
    public:
    static int NoOfBike;
    int tyreSize;
    int engineSize;
// constructor
    bike(int tyreSize,int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
    }

    static void increaser(){
        NoOfBike++;
    }
};
int bike::NoOfBike=13;  // imp to intilize like this
int main(){
    bike RoyalEnfield(20,300);
    bike Bajaj(16,200);


    cout<<bike::NoOfBike<<endl;
    cout<<RoyalEnfield.NoOfBike<<endl;
    cout<<Bajaj.NoOfBike<<endl;

    Bajaj.increaser();   // increase the value of noofbike
    cout<<bike::NoOfBike<<endl;
    cout<<RoyalEnfield.NoOfBike<<endl;
    cout<<Bajaj.NoOfBike<<endl;


    RoyalEnfield.increaser();
    cout<<bike::NoOfBike<<endl;
    cout<<RoyalEnfield.NoOfBike<<endl;
    cout<<Bajaj.NoOfBike<<endl;
    
    cout<<RoyalEnfield.tyreSize<< " "<<RoyalEnfield.engineSize<<endl;
    cout<<Bajaj.tyreSize<<" "<<Bajaj.engineSize<<" "<<endl;  
    return 0;
}