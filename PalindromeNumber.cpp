#include <iostream>
#include<math.h>
using namespace std;
int isPalindrome(int input)
{
  int reversed=0;

  int original=input;


  while(input>0){
    reversed = reversed*10 + input%10;
    input /= 10;
  }

  if(reversed ==orginal)
   return 1;
  else
   return 0;
}

int main() {
  int n;
  cin >> n;
  cout << isPalindrome(n)<<"\n";
  return 0;
}
