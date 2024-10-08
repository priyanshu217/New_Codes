#include<iostream>
using namespace std;

int main(){

    // PROGRAM TO FIND SUM OF FIRST N NATURAL NUMBER USING WHILE LOOP AND FOR LOOP

    int i,n, sum = 0;
    cout<<"Enter the number"endl;
    cin>>n;
    i = 1;

    while (i<=n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout<<"sum ="<<sum;
    return 0;
}