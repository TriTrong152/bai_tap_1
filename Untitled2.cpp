#include <stdio.h>

//M?t s? h�m t�nh don gi?n
int Cong(int a, int b) { return a + b; }
int Tru(int a, int b) { return a - b; }
int Nhan(int a, int b) { return a * b; }

//�?nh nghia ki?u con tr? h�m PhepTinh
typedef int (*PhepTinh)(int, int);

//�?nh nghia h�m t�nh to�n t?ng qu�t
//v?i tham s? l� 2 s? nguy�n v� con tr? PhepTinh
int TinhToan(int a, int b, PhepTinh tinh)
{
    //G?i h�m th�ng qua con tr? h�m
    return tinh(a, b);
}

int main()
{

//M?t s? l?i g?i h�m
int tong = TinhToan(5, 9, Cong);
int hieu = TinhToan(5, 9, Tru);
printf( "%d",tong);

}

