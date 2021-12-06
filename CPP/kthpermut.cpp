#include <bits/stdc++.h>
#include <vector>
using namespace std;

stack<int> mystack;
stack<int> Orgstack;

void permute(string a, int l, int r)
{
	// Caso base
	if (l == r)
      mystack.push( atoi(a.c_str()));
	else
	{
		for (int i = l; i <= r; i++)	// Permutaciones
		{
			swap(a[l], a[i]); // Hacer el swap
			permute(a, l+1, r); // Recursividad
			swap(a[l], a[i]); // Deshacer el swap
		}
	}
}

int main()
{
	string str = "123";
	int n = str.size();
	permute(str, 0, n-1);

  while(!mystack.empty()){
    int k = mystack.top();
    mystack.pop();
    while(!Orgstack.empty() && Orgstack.top() < k){
      mystack.push(Orgstack.top());
      Orgstack.pop();
    }
    Orgstack.push(k);
  }

  while(!Orgstack.empty()){
    cout << Orgstack.top() << " ";
    Orgstack.pop();
  }
	return 0;
}