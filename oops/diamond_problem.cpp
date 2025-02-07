// important and famous question
// question
// when 2 instance of base classes are present in the derived class
// b derives A, C derives A and D derives B+C.
// Now D has two instance of A


// B me A ki proberty and C me bhi A ke property
// Similarty D has B and C and also A property

#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
    private:
    int a_ka_private;
    protected:
    int a_ka_protected;
};
class B: virtual public A{
    public:
    int b_ka_public;
    private:
    int b_ka_private;
    protected:
    int b_ka_protected;
};

class C: virtual public A{
    public:
    int c_ka_public;
    private:
    int c_ka_private;
    protected:
    int c_ka_protected;
};
class D: public C,public B{
    public:
    int d_ka_public;
    void show(){
        // this does not work because a is inheriteed from B AND C AND ALSO A SO TO SHOW IT I NEED TO USE SPECIFIER :: AND C/A/B FROM WHICH I WANT'S
        // IN ANOTHER WAY TO ASSCESS IT THAT I USE "VIRTUAL" ISSE EK HI INSTANCE BANEGE
        //cout<<a_ka_public
    }
};
int main(){
    D d;
    d.show();

    // another way to geneate this;;;
    // e.g like that i can use;
    // Student * s= new Student("name",roll,marks);
    return 0;
}