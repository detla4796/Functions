#include <iostream>
using namespace std;

int positive(int n)
{
  return n > 0 ? 1 : 0;
}
int main()
{
  int n;
  cin >> n;
  if (positive(n))
    cout << "yes";
  else
    cout << "no";
  return 0;
}
