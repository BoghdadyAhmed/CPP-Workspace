#include <iostream>
using namespace std;

int plusFuncInt(int x, int y)
{
  return x + y;
}

double plusFuncDouble(double x, double y)
{
  return x + y;
}

int main()
{

  cout << "Int: " << plusFuncInt(10, 15) << "\n";
  cout << "Double: " << plusFuncDouble(10.5, 12.8) << endl;
  return 0;
}