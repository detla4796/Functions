#include <iostream>
using namespace std;

int fact(int a)
{
  int f = 1;
  for (int i = 2; i <= a; i++)
  {
    f *= i;
  }
  return f;
}
int fact_recursion(int a)
{
  if (a == 1)
  {
    return 1;
  }
  else
  {
    return a * fact_recursion(a - 1);
  }
}
int main()
{
  int n;
  cin >> n;
  cout << fact(n) << endl << fact_recursion(n);
}
