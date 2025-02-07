// hirecracy order
//public--->protected--->private


#include<iostream>
using namespace std;
#include<string>
class vehicle{
    public:
    int tyreSize;
    int engineSize;
    int light;
    string Companyname;
    // let's check if the constructor is created or nor
    vehicle(){
        cout<<"Vehicle ka constructor call hua !\n";
    }
    void setCompanyname(string Companyname){
        this->Companyname=Companyname;
    }
};
class Car: public vehicle{
    public:
    int Steringsize;
    // car ka constructor
    Car(){
    cout<<"Vehicle ka constructor call hua !\n";
    }
};
class Bike :public vehicle{
    int date;
};
int main(){
    vehicle Four_Wheeler;
    Car Range_Rover; // it construct the constructor because it also inherite the property of the  car vehile class

    Four_Wheeler.setCompanyname("Tata");
}

