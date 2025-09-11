#include <stdio.h>

//M?t s? hàm tính don gi?n
int Cong(int a, int b) { return a + b; }
int Tru(int a, int b) { return a - b; }
int Nhan(int a, int b) { return a * b; }

//Ð?nh nghia ki?u con tr? hàm PhepTinh
typedef int (*PhepTinh)(int, int);

//Ð?nh nghia hàm tính toán t?ng quát
//v?i tham s? là 2 s? nguyên và con tr? PhepTinh
int TinhToan(int a, int b, PhepTinh tinh)
{
    //G?i hàm thông qua con tr? hàm
    return tinh(a, b);
}

int main()
{

//M?t s? l?i g?i hàm
int tong = TinhToan(5, 9, Cong);
int hieu = TinhToan(5, 9, Tru);
printf( "%d",tong);

}

