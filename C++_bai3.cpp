#include "iostream"

using namespace std;

//prototype
void hv1(int a,int b);
void hv2(int&a, int &b);
void hv3(int*a, int *b);

int main()
{
	int a =3,b =4;
	cout << "a =" <<a << ", b = " <<b<<endl;
	hv1(a,b);
	cout << "a =" <<a << ", b = " <<b<<endl;
	hv2(a,b);
    cout << "a =" <<a << ", b = " <<b<<endl;
    hv3(&a,&b);
    cout << "a =" <<a << ", b = " <<b<<endl;
	return 0;
}

void hv1(int a,int b)
{
	int t = a; a =b ; b = t; 
}
void hv2(int&a, int &b)
{
	int t = a; a =b ; b = t; 
}
void hv3(int*a, int *b)
{
	int t = *a; *a = *b ; *b = t; 
}
