/*Write a C++ program to create a class Robot with a default constructor that initializes the robot’s name to "Alpha" and battery level to 100. The class should have a member function performTask() that reduces the battery level by 10 and another function displayStatus() to print the robot’s name and battery. Include a destructor that prints a shutdown message when the robot object is destroyed.*/
#include <iostream>
using namespace std;
class Robot{
    string name;
    int bat_level;
    public: 
    Robot(){
        name="Aplha";
        bat_level=100;
    }
    void performTask(){
        if (bat_level>=10)
        {   
            
            cout<<"Task Successful "<<endl;
            bat_level-=10;
        }else{
            cout<<"Low Battery, Please connect charger."<<endl;
        }
        
    }
    void displayStatus(){
        cout<<"Robot's name: "<<name<<"\t";
        cout<<"Battery Level: "<<bat_level<<endl;
    }
    ~Robot(){
        cout<<"Shutting down Robot"<<endl;
    }
};
int main()
{       
    Robot r1;
    r1.displayStatus();
    r1.performTask();
    r1.performTask();
    r1.displayStatus();
return 0;
}