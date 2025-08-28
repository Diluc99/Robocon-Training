#include <iostream>
using namespace std;
int main()
{
  //  cout<<"Hey..\n";       
    // Data Type
  /*  
    int num =10;
    float num2 =10.25;
    double num3 =10.55445;
*/
//    cout<<"Name: Shivam Kumar Jha\nReg. No: RA2411056010039\nDepartment: DSBS";
/*
cout<<"Using for loop";
for(int i=1;i<=5;i++){
    cout<<i<<"\n";
}
cout<<"Using while loop";
int i =1;
while(i<=5 )
{
    cout<<i<<"\n";
    i+=1;
    
}*/
// Conditional Statement
/*
int age;
cout<<"Enter AGE: ";
cin>>age;
if (age>0&&age<18)
{
    cout<<"Not eligible for voting";
}else if (age>=18)
{
    cout<<"Eligible for voting";
}else{
    cout<<"Invalid Age input";
}  */


/*
int year;
cout<<"Enter year: ";
cin>>year;
if((year%4==0 && year%100!=0)||year%400==0)
{
    cout<<"Leap";
}
else{
    cout<<"Non Leap";

}
    */
  // int arr1[];
   int arr2[]={1,2,3,4,5};
   int arr_size= sizeof(arr2)/sizeof(arr2[0]);
   //cout<<"NO. of elements in array: "<<arr_size;

   int tgt=5;
   int sum = 0;
    for (int i = 0; i <arr_size-1 ; i++)
    {
        sum=arr2[i]+arr2[i+1];    
        if (sum==tgt){
            cout<<arr2[i]<<" and "<<arr2[i+1]<<" are the desired elements";
            break;
        }
    }
        
    }
    
    
    


    return 0;
}