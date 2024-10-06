#include<iostream>
using namespace std;

int main(){

    // int i = 1;
    // // cout<<"Here is the Result:";
    // while (i<=10)
    // {
    //  cout<<i <<"\n" ;
    //  i = i+1 ;

    // }

    // cout<<"Current Value of i is : "<<i;
      
    //   HERE ARE THE PROGRAM TO PRINT THE Nth NUMBER

    int i , n ;
    i = 1 ;
    cout<<"\nEnter the nth Number of Your Choice : ";
    cin>>n;

    while (i<=n)
    {
        cout << i << "\n";
        i = i+1;
    }
    

    
    return 0;
}
