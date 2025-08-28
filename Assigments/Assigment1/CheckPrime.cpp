#include <iostream>
using namespace std;
bool checkPrime(int n){
    int cnt=0;
    for(int i=1;i<=n/2;i++){
        if (n%i==0) cnt++;
    }
    if (cnt>1) return false;
    else return true;
}
int main()
{      
    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<checkPrime(num); 
return 0;
}