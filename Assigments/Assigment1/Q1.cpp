// 1. Input a number and print how many times each digit (0–9) appears.
#include <iostream>
using namespace std;
int main()
{
    int num,freq[10]={0};
    cout<<"Enter a number: ";
    cin>>num;
    while (num>0)
    {
        int  dig= num%10;
        freq[dig]++;
        num/=10;
    }
 for (int i = 0; i < 10 ;i++)
 {
    cout<<i<<" appears "<<freq[i]<<" times.\n";
 }
 
    
return 0;
}