/*data structure with unique property

it store the unique element only 


insert        O(1)
search        O(1)
erase/delete  O(1)

not an linear data structure
it stores element at random order

s.insert(1)


for triversing the element of the sets 
we use for each loop

*/

#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(5);
    // size
    cout<<s.size()<<endl; // print 5 becaz it ignore the repeated value


    s.erase(2); // 2 ko erase kr diya gya

    for(int ele : s){ // read as ele in s (sets)  .... data type likhte hai i.e int tha
        cout<<ele<<" ";
    }

    // for finding the target
    // syntax for the finding the element to the sets 
    // s.find() -> it search in the set and if
    // it is not found then it returns the last element 
    int target=3;
    if(s.find(target)!=s.end()){ // target exists   
        cout<<"Exists !";
    }
    else cout<<"Does not Exists !";

}