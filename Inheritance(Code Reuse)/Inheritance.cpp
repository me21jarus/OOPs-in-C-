#include<iostream>
using namespace std;

class Vehicle{
    protected:
        int maxSpeed;
    
    public:
        Vehicle(int speed){
            maxSpeed = speed;
        }
        void showSpeed(){
            cout<<"Max Speed: "<< maxSpeed<< "km/h" <<endl;
        }
        void move(){
            cout<<"Vehicle is Moving"<<endl;
        }

};

class Bike : public Vehicle{
    public:
        Bike(int speed) : Vehicle(speed){}
        void bikeInfo(){
            cout<<"Bike Details: "<<endl;
            showSpeed();
        }
};

class Car : public Vehicle{
private:
    int doors;
public:
    Car(int speed,int d) : Vehicle(speed){
        doors = d;
    }
    void carInfo(){
        cout<<"Car Details: \n Doors: "<<doors<<endl;
        showSpeed(); 
    }
};

int main(){

    Car car(180,4);
    Bike bike(120);

    car.carInfo();
    car.move();

    cout<<endl;

    bike.bikeInfo();
    bike.move();

    return 0;
}