#include <iostream>
using namespace std;
int main()
{
  int num1, num2, sum;
  float avg;
  cout << "enter your two number:  ";
  cin >> num1;
  cin >> num2;
  cout << num1 << endl;
  cout << num2 << endl;
  sum = num1 + num2;
  avg = sum / 2;
  cout << "sum of two number is :" << sum << "\n";
  cout << "avrage of two number is :" << avg << "\n";

  return 0;
}
