#include<iostream>
using namespace std;

int main(){

    // PROGRAM TO FIND SUM OF FIRST N NATURAL NUMBER USING WHILE LOOP AND FOR LOOP

    int i,n, sum = 0;
    cout<<"Enter the number";
    cin>>n;
    i = 1;

     while (i<=n)
     {
        sum = sum + i;
        i++;
     }

     cout<<"The sum of first N Natural Number is :"<<sum;

     

    // FOR LOOP TO FIND SUM OF FIRST N NATURAL NUMBER 

    
    return 0;
}