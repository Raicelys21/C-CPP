#include <iostream>
using namespace std;
 
void permute(string a, int l, int r)
{
  if (l == r)
    cout<<a<<endl;
  else
  {
    for (int i = l; i <= r; i++)
    {
      swap(a[l], a[i]); // Cambios
      permute(a, l + 1, r); // Recursión
      swap(a[l], a[i]); // Retroceso
    }
  }
}
 
int main()
{
  string str = "SOL";
  int n = str.size();
  permute(str, 0, n - 1);
  return 0;
}
