#include <stdio.h>

int tong(int a, int b) { return a+b;}
int hieu(int a, int b) { return a-b;}
int tich(int a, int b) { return a*b;}
int thuong(int a, int b) { return a/b;}

// Dinh nghia kieu con tro
typedef int (*pheptinh)(int,int);
// Dinh nghia ham tinh toan tong quat
int Tinhtoan(int a, int b, pheptinh tinh)
{
	return tinh(a,b);
}





int main() {
    Tinhtoan(4,3,tong);
	printf("Hello, world!\n");
    return 0;
}

