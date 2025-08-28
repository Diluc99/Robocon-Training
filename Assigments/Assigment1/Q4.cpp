// 4. Input a number and print its prime factors.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    while (num%2 == 0) {
        cout<<2<< " ";
        num/=2;
    }
for (int i=3;i*i <= num;i+= 2) {
       while (num%i == 0) {
           cout<<i<<" ";
          num/= i;
        }
    }
  if (num>2)
        cout<<num<< " ";
       
return 0;
}