#include <iostream>
using namespace std;
class ServoMotor{
    public:
        int freq;
        int rotAngle;

        ServoMotor(){
            cout<<"enter desired angle of rotation: ";
            cin>>rotAngle;
            cout<<"enter desired freq of rotation in sec: ";
            cin>>freq;
        }
        void display(){
            cout<<"Angle of rotation: "<<rotAngle<<endl;
            cout<<"No. of rotation per min: "<<60/freq<<endl;
            cout<<"No. of rotation for complete 360 degree: "<<360/rotAngle<<endl;
            cout<<"Time of rotation for complete 360 degree: "<<(360/rotAngle)*freq<<endl;

        }
};

int main()
{   ServoMotor m1;
    m1.display();

return 0;
}