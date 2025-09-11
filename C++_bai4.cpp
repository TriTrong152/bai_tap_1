#include "iostream"
// ít dùng
using namespace std;

int x;
int &get();
int main()
{
	get() = 10;
	cout << x;
	return 0;
}
int &get()
{
	return x;
}
