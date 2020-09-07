#include<iostream>
#include<stdio.h>
using namespace std;


class ecu{
    public:      // This is the data from the ECU that can be shown to driver and to the mechanics
    void rpm(){
        cout<<"This is RPM"<<endl;
    }
    void tirepressure(){
        cout<<"This it the Tire Pressure"<<endl;
    }
    void temp(){
        cout<<"This is the Engine Tempeture"<<endl;
    }
    void seattemp(){
        cout<<"This is the Tempeture of heated and cool seats of the car"<<endl;
    }

    protected:      // This is the data from ECU that can't be shown to driver and is limited to mechanic
    void turbospin(){
        cout<<"This is rev of turbo/inch"<<endl;
    }
    void wrongshifts(){
        cout<<"This is the number of wrong shifts made by the driver"<<endl;
    }
    void drivingconditions(){
        cout<<"This is the calculated stats of rookie driving"<<endl;
    }
    private:      //This is the data that is only required by the car to make ride as smooth as possible 
    void suspenadj(){
        cout<<"This is data that adjusts suspension seeing the turns and bumps on the road ahead"<<endl;
    }
    void injectiondetails(){
        cout<<"This stores data of fuel to air ratio to be injected in a piston during one stroke"<<endl;
    }
    void pistonseq(){
        cout<<"This is the sequence in which pistons are fired"<<endl;
    }
};


class mechanic: public ecu{
    void mechni(){
        void wrongshifts();
        void turbospin();
        void drivingconditions();
    }
};


class cust: protected mechanic{
    void customer(){
        void tirepressure();
        void rpm();
        void temp();
        void seattemp();
    }
};

int main(){
    cust obj;
    mechanic obj1;
    // obj1.mechni();



    return 0;
}