#include <iostream>
using namespace std;

int prime(int p)
{
  int i;
  for (i = 2;i <= p / 2;i++)
  {
    if (p % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int n;
  cin >> n;
  if (prime(n))
  {
    cout << "yes";
  }
  else
  {
    cout << "no";
  }
}
