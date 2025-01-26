#include <iostream>
using namespace std;

class Cricketer {
private:
    string name;
    int age;
    int no_of_matches_played;
    float average;
public:
    // Setter functions
    void setName(string name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setMatches(int no_of_matches_played) {
        this->no_of_matches_played = no_of_matches_played;
    }
    void setAverage(float average) {
        this->average = average;
    }
    // Getter functions
    void getName() {
        cout << name;
    }    
    void getAge() {
        cout << age;
    }
    void getMatches() {
        cout << no_of_matches_played;
    }
    void getAverage() {
        cout << average;
    }
};

int main() {
    const int n = 3;
    Cricketer cricketers[n];
    for(int i = 0; i < n; i++) {
        string str;
        int cricketer_age, no_of_matches;
        float aver;
        
        cout << "Enter the name of " << i + 1 << " cricketer: ";
        cin.ignore();  // This is essential for clearing the input buffer
        getline(cin, str);
        
        cout << "Enter the age of the cricketer: ";
        cin >> cricketer_age;
        
        cout << "Enter the number of matches played by the cricketer: ";
        cin >> no_of_matches;
        
        cout << "Enter the average of the cricketer: ";
        cin >> aver;
        
        // Passing them into functions
        cricketers[i].setName(str);
        cricketers[i].setAge(cricketer_age);
        cricketers[i].setMatches(no_of_matches);
        cricketers[i].setAverage(aver);
    }

    // For displaying the values
    for(int i = 0; i < n; i++) {
        cout << "\nName of the cricketer: ";
        cricketers[i].getName();
        cout << "\nAge: ";
        cricketers[i].getAge();
        cout << "\nNo of Matches: ";
        cricketers[i].getMatches();
        cout << "\nAverage: ";
        cricketers[i].getAverage();
        cout << endl;
    }
    return 0;
}
