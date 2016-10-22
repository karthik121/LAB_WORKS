#include<iostream>
using namespace std;
int sumOfPrimes(int input) {
  int num, Prime, sum, isPrime;
  Prime = 2;
  sum = 0;
  if(input == 1)  {
    return Prime;
  }
  else {
    while(input > 0) {
      isPrime = 0;
      for(num = 2; num < Prime; num++) {
        if(Prime % num == 0) {
          isPrime = 1;
        }
      }
      if(isPrime == 0) {
        sum = sum + Prime ;
        input-- ;
      }
       Prime++ ;
    }
    return sum ;
  }
}
int main() {
  int input;
  cin >> input;
  cout << sumOfPrimes(input) << endl;
  return 0;
}
