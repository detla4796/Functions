double max(int a, int b)
{
  return a > b ? a : b;
}
int main()
{
  int a, b, c, d;
  a = 4; b = 3; c = 7; d = 5;
  cout << max(max(a, b), max(c, d)) << endl;
}
