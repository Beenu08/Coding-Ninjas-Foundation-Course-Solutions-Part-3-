#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout<<"A"<<endl;
    }
};
class B: public A{
    public:
    void print(){
        cout<<"B"<<endl;
    }
};
int main(){
    B b;
    b.print(); //B
    A *a1 = new A;
    a1->print(); //A
    A* a2;
    a2= &b;
    a2->print(); //A
    return 0;
}