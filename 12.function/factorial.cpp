#include <iostream>
using namespace std;

int factorial(int n){
   if (n < 0)
      return (-1); /*Wrong value*/
   if (n == 0)
      return (1); /*Terminating condition*/
   else{
      return (n * factorial(n - 1));
   }
};

// main function//
int main(){
   int factorial(int);
   int fact, value;
   cout << "Enter the positive number for factorial : ";
   cin >> value;
   fact = factorial(value);
   cout << "Factorial of a number is: " << fact << endl;
   return 0;
}
