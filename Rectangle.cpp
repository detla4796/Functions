#include <iostream>
using namespace std;

void Rectangle(int n, int k)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < k; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
}
int main()
{
  int n, k;
  cin >> n;
  cin >> k;
  Rectangle(n, k);
  return 0;
}
