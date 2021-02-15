#include <iostream>
using namespace std;

int main(){
  int a=123;
  int &b = a;
  cout << "a is " << a << "b is " << b << endl;
  b = 987;
  cout << "a is " << a << "b is " << b << endl;

  return 0;
}
