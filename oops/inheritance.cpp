// private can't be inherited nor assessed
// protected can't be assesed but it can be inherited

#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
    public:
    int a_ka_public;
};
// hm lower hirecracy wale ko higher me change nahi kr sakte
// it means hm protected ko public nahi bana sakte hai
// security badega to possible hai....
class B : public A{  // it mean that A se aaye hue data B ke liye Public hai
    public:
    int b_ka_public;
};
int main(){
    B b;
    b.a_ka_public=10;
    b.b_ka_public=10;
}