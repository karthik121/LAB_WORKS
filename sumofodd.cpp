#include<iostream>
using namespace std;
int main()
{
  int input, odd, sum=0;
  cin >> input;
  odd = 1;
  while(input != 0) {
    if(odd % 2 != 0) {
      sum = sum + odd;
      input--;
    }
    odd++;
  }
  cout << sum << endl;
  return 0;
}
