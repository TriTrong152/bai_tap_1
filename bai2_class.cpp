//#include <stdio.h>
#include <iostream>  // c?n d? dùng cout, cin
#include <stdio.h>
using namespace std;

//class()
//{
//	private: // Thuoc tinh
//	      int diem_toan;
//	      char ten
//	public:  // Khai bao	
//};
int x =10;
int f()
{
	return x;
}
int g()
{
	int  x = 20;
	return f();
}
int main()
{
	cout << g();
}
