

                           // Finding the Greatest Number among Three Numbers in C++
         
//  #include <iostream>
//  using namespace std;
 
//  int main() {
//      int num1, num2, num3;
 
//      // Input three numbers
//      cout << "Enter first number: ";
//      cin >> num1;
//      cout << "Enter second number: ";
//      cin >> num2;
//      cout << "Enter third number: ";
//      cin >> num3;
 
//      // Find the greatest number
//      if (num1 >num2 && num1 > num3) {
//          cout << "The greatest number is: " << num1 << endl;
//      } else if (num2 > num1 && num2 > num3) {
//          cout << "The greatest number is: " << num2 << endl;
//      } else if (num3 > num1 && num3 > num2) {
//          cout << "The greatest number is: " << num3 << endl;
//      } else {
//          cout << "All Numbers are equal " << endl;
//      }
 
//      return 0;
//  }                           


 // *********************** METHOD SECOND ***********************

 #include <iostream>
 #include <algorithm>
 using namespace std;
 
 int main() {
     int num1, num2, num3;
 
     // Input three numbers
     cout << "Enter first number: ";
     cin >> num1;
     cout << "Enter second number: ";
     cin >> num2;
     cout << "Enter third number: ";
     cin >> num3;
 
     // Find the greatest number
     int greatest = max({num1, num2, num3});

     if (num1 >= num2 && num1 >= num3){
         cout << "All numbers are equal:" << endl;
     } else {
        cout << "The greatest number is :"<< greatest << endl;
     }
     
     return 0;
 }