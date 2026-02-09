#include<iostream>
using namespace std;

class Vehicle{
    private:
        int speed = 0;

    public:
        void setSpeed(int s){
            speed = s;
        }
        int getSpeed(){
            return speed;
        }
};

int main(){

    Vehicle v;
    v.setSpeed(80);
    cout<<"Vehicle is at "<< v.getSpeed() <<endl;

    return 0;
}