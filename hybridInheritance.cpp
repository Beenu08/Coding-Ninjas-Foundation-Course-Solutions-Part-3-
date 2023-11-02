#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(int x){
        cout<<"vehicle's default constructor"<<x<<endl;
    }
};
class Car:public virtual Vehicle{
    public:
    Car(): Vehicle(2) {
        cout<<"Car's default constructor"<<endl;
    }
};
class Truck: public virtual  Vehicle{
    public:
    Truck(): Vehicle(5) {
        cout<<"Truck's default constructor"<<endl;
    }
};
class Bus: public Car, public Truck{
    public:
    Bus():Vehicle(10) {
        cout<<"Bus's default constructor"<<endl;
    }
};
int main(){
    Bus b;
    // b.Car::print();
    return 0;
}