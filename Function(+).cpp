#include <iostream>
using namespace std;
int MyFunction(int a, int b)
{
	int t;
	t = a + b;
	cout << "The t is:" << t << endl;
	return t;
}
int main()
{
	int x = MyFunction(2, 3);
	int y = MyFunction(x, 4);
	int z = MyFunction(y, 5);
}