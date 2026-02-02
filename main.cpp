#include <iostream>
using namespace std;

//function that calls n and adds to make the sum
int sum(int n) {
  int total =0;
  for (int i = 1; i <=  n; i++) {
    total += i;
      }
  return total;
}

//function for the product
int prod(int n){
  int result = 1;
  for (int i = 2; i <= n; i++) {
    result += i;
  }
  return result;
}

int main () {

  int n;

  cout<< "Enter a number: ";
 cin>> n;

 int s = sum(n);
 int p = prod(n);
   cout<< "The sum is: "<< s << endl;
 cout<< "The product is: "<< p << endl;
 
  return 0;
}
