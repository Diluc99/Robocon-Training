// 3. Check whether an array contains duplicate values.
#include <iostream>
using namespace std;
int main()
{       
    int n;
    bool hasDuplicate = false;
    cout<<"Enter Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];        
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (arr[i]==arr[j])
           {
                hasDuplicate=true;
                break;
           }
        }
        if(hasDuplicate) break;         
    }
    if(hasDuplicate){
        cout<<"Array contains duplicate values";    
    }else{
        cout<<"Array does not contains duplicate values";

    }
return 0;
}