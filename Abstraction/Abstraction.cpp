#include<iostream>
using namespace std;

class Vehicle{
public:
    virtual void start(){}
};

class Bike : public Vehicle{
public:
    void start(){
        cout<<"Bike is starting..."<<endl;
    }
};

int main(){

    Vehicle* v = new Bike();
    v->start();
    
    return 0;
}