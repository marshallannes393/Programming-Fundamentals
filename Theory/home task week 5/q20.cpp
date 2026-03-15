#include <iostream>
using namespace std;

int main() {
   int x ;
cout << "enter no";
cin >> x;
for (int i = 0;i <= x;i++)
{
	for (int j = 0;j < i;j++)
	{
		cout << x - j << " ";
	}
	cout << endl;
}

   return 0;
}