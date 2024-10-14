#include<iostream>
using namespace std;


int main(){

    // WRITE A PROGRAM TO  FIND SUM OF DIGIT OF A GIVEN NUMBER

    // int n,sum=0;
    // cout<<"Enter the number : ";
    // cin>>n;

    // while(n>0){

    //     sum = sum + n%10; // (Jab Bhi ham kisi number ka 10 ke sath modulas karte hai toh hame uss number ka last digit milta hai)
    //     n = n/10; 

    // }
    // cout << "Sum of digit of the number is :"<< sum;


    // SAME PROGRAM USING WITH THE HELP OF FOR LOOP


    int n, sum = 0;
    cout<<"\nEnter the number :";
    cin>>n;

    for( ; n>0; n=n/10){

        sum = sum + n%10;
        
    }
    cout<<"\nSum of digit of the number is :"<<sum;


    return 0;

}